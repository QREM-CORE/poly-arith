// ==========================================================
// Testbench for PE_UNIT (Top-Level Arithmetic Unit Wrapper)
// Author(s): Kiet Le
// Target: FIPS 203 (ML-KEM) - Unified Polynomial Arithmetic
// Mode: Fully Pipelined Verification (Streaming Inputs)
// ==========================================================
`timescale 1ns/1ps

import poly_arith_pkg::*;

module pe_unit_tb();

    // ------------------------------------------------------
    // Signals
    // ------------------------------------------------------
    logic           clk;
    logic           rst;

    logic           valid_i;
    pe_mode_e       ctrl_i;
    logic           addsub_sel_i;

    // Primary Operand Bus (A)
    coeff_t         op_a0_i, op_a1_i, op_a2_i, op_a3_i;
    // Secondary Operand Bus (B)
    coeff_t         op_b0_i, op_b1_i, op_b2_i, op_b3_i;

    // Outputs
    coeff_t         z0_o, z1_o, z2_o, z3_o;
    logic           valid_o;

    // Verification Stats
    int error_count = 0;
    int pass_count  = 0;

    // ------------------------------------------------------
    // Constants & Structures
    // ------------------------------------------------------
    localparam int  MODULUS = 3329;

    // Struct to hold expected results for ALL outputs
    typedef struct {
        coeff_t     z0;
        coeff_t     z1;
        coeff_t     z2;
        coeff_t     z3;
        pe_mode_e   mode;
        string      name;
    } expected_result_t;

    expected_result_t expected_queue [$]; // FIFO Queue

    // ------------------------------------------------------
    // DUT Instantiation
    // ------------------------------------------------------
    pe_unit dut (
        .clk(clk),
        .rst(rst),
        .valid_i(valid_i),
        .ctrl_i(ctrl_i),
        .addsub_sel_i(addsub_sel_i),
        .op_a0_i(op_a0_i), .op_a1_i(op_a1_i), .op_a2_i(op_a2_i), .op_a3_i(op_a3_i),
        .op_b0_i(op_b0_i), .op_b1_i(op_b1_i), .op_b2_i(op_b2_i), .op_b3_i(op_b3_i),
        .z0_o(z0_o), .z1_o(z1_o), .z2_o(z2_o), .z3_o(z3_o),
        .valid_o(valid_o)
    );

    // ------------------------------------------------------
    // Clock Generation
    // ------------------------------------------------------
    initial begin
        clk = 0;
        forever #5 clk = ~clk; // 100MHz
    end

    // ------------------------------------------------------
    // Golden Model Helpers (Modulo Math)
    // ------------------------------------------------------
    function automatic coeff_t mod_add(input coeff_t a, input coeff_t b);
        return coeff_t'((longint'(a) + longint'(b)) % MODULUS);
    endfunction

    function automatic coeff_t mod_sub(input coeff_t a, input coeff_t b);
        return coeff_t'((longint'(a) - longint'(b) + MODULUS) % MODULUS);
    endfunction

    function automatic coeff_t mod_mul(input coeff_t a, input coeff_t b);
        return coeff_t'((longint'(a) * longint'(b)) % MODULUS);
    endfunction

    // ------------------------------------------------------
    // Task: Drive Pipeline
    // Computes expected results and drives pins for 1 CC
    // ------------------------------------------------------
    task automatic drive_pipeline(
        input coeff_t a0, input coeff_t a1, input coeff_t a2, input coeff_t a3,
        input coeff_t b0, input coeff_t b1, input coeff_t b2, input coeff_t b3,
        input pe_mode_e mode, input logic addsub_sel, input string name
    );
        expected_result_t exp;

        // Initialize with default 0s
        exp.z0 = 0; exp.z1 = 0; exp.z2 = 0; exp.z3 = 0;
        exp.mode = mode;
        exp.name = name;

        // =======================================================
        // GOLDEN MODEL ROUTING
        // =======================================================
        if (mode == PE_MODE_CWM) begin
            // ---------------------------------------------------
            // CWM Mathematical Definition
            // f0 = a0, f1 = a1, g0 = a2, g1 = a3, w = b0
            // U3 = (f0*g0) + w*(f1*g1)
            // V0 = (g0+g1)*(f0+f1) - (f0*g0) - (f1*g1)
            // ---------------------------------------------------
            coeff_t f0_g0      = mod_mul(a0, a2);
            coeff_t f1_g1      = mod_mul(a1, a3);
            coeff_t f_sum      = mod_add(a0, a1);
            coeff_t g_sum      = mod_add(a2, a3);
            coeff_t sum_prod   = mod_mul(f_sum, g_sum);

            // Expected Z1 (Maps to PE3 U3 output)
            exp.z1 = mod_add(f0_g0, mod_mul(b0, f1_g1));

            // Expected Z2 (Maps to PE0 V0 output)
            exp.z2 = mod_sub(mod_sub(sum_prod, f0_g0), f1_g1);

            // Z0 and Z3 are unused in CWM, we will ignore them in the monitor
        end
        // TODO: Expand with 'else if (mode == PE_MODE_NTT)' later

        // 2. Push expected result to queue
        expected_queue.push_back(exp);

        // 3. Drive Inputs
        @(posedge clk);
        valid_i      <= 1'b1;
        ctrl_i       <= mode;
        addsub_sel_i <= addsub_sel;
        op_a0_i <= a0; op_a1_i <= a1; op_a2_i <= a2; op_a3_i <= a3;
        op_b0_i <= b0; op_b1_i <= b1; op_b2_i <= b2; op_b3_i <= b3;
    endtask

    // ------------------------------------------------------
    // Task: Flush Pipeline (Waits for data to drain)
    // ------------------------------------------------------
    task automatic flush_pipeline();
        @(posedge clk);
        valid_i <= 1'b0;
        // Zero out data lines to prevent floating Xs in sim
        op_a0_i <= 0; op_a1_i <= 0; op_a2_i <= 0; op_a3_i <= 0;
        op_b0_i <= 0; op_b1_i <= 0; op_b2_i <= 0; op_b3_i <= 0;

        // Wait until all pushed data has been processed by the monitor
        wait(expected_queue.size() == 0);
        repeat(2) @(posedge clk); // Safety buffer
    endtask

    // ------------------------------------------------------
    // Monitor Process (Continuous Output Verification)
    // ------------------------------------------------------
    always @(posedge clk) begin
        if (valid_o) begin
            expected_result_t exp;
            logic match;

            if (expected_queue.size() == 0) begin
                $display("==================================================");
                $display("[FATAL ERROR] valid_o is high, but expected_queue is empty!");
                $display("==================================================");
                error_count++;
            end else begin
                exp = expected_queue.pop_front();
                match = 1'b1; // Assume pass until proven otherwise

                // Dynamic mode checking - Only check the ports active for the mode
                if (exp.mode == PE_MODE_CWM) begin
                    if (z1_o !== exp.z1 || z2_o !== exp.z2) match = 1'b0;
                end
                // TODO: Expand with 'else if (exp.mode == PE_MODE_NTT)' to check all 4 Z ports

                if (!match) begin
                    $display("==================================================");
                    $display("[FAIL] %s", exp.name);
                    $display("Mode: %s", exp.mode.name());
                    if (exp.mode == PE_MODE_CWM) begin
                        if (z1_o !== exp.z1) $display("   Z1 (U3) Mismatch! Exp: %0d, Got: %0d", exp.z1, z1_o);
                        if (z2_o !== exp.z2) $display("   Z2 (V0) Mismatch! Exp: %0d, Got: %0d", exp.z2, z2_o);
                    end
                    $display("==================================================");
                    error_count++;
                end else begin
                    pass_count++;
                end
            end
        end
    end

    // ==========================================================
    // Main Test Procedure
    // ==========================================================
    initial begin
        // Initialize
        rst = 1;
        valid_i = 0;
        ctrl_i = PE_MODE_CWM;
        addsub_sel_i = 0;
        op_a0_i = 0; op_a1_i = 0; op_a2_i = 0; op_a3_i = 0;
        op_b0_i = 0; op_b1_i = 0; op_b2_i = 0; op_b3_i = 0;

        repeat(5) @(posedge clk);
        rst = 0;
        repeat(2) @(posedge clk);

        $display("==========================================================");
        $display("Starting PE_UNIT Wrapper Verification");
        $display("==========================================================");

        // --------------------------------------------------
        // Pipelined Stream: CWM Mode
        // op_a mapping: [f0, f1, g0, g1]
        // op_b mapping: [w, unused, unused, unused]
        // --------------------------------------------------
        $display("--- Testing Streaming CWM Mode (8-Cycle Latency) ---");

        //                  f0  f1  g0  g1    w   b1 b2 b3   Mode          SubSel  Name
        drive_pipeline(  0,  0,  0,  0,   0,  0, 0, 0,   PE_MODE_CWM,  1'b0,   "CWM: All Zeros");
        drive_pipeline(  1,  1,  1,  1,   1,  0, 0, 0,   PE_MODE_CWM,  1'b0,   "CWM: All Ones");
        drive_pipeline( 10,  5,  2,  4,  20,  0, 0, 0,   PE_MODE_CWM,  1'b0,   "CWM: Simple Math");
        drive_pipeline(100, 50,  0,  0,  10,  0, 0, 0,   PE_MODE_CWM,  1'b0,   "CWM: g is Zero");
        drive_pipeline(100, 20, 50, 40,   0,  0, 0, 0,   PE_MODE_CWM,  1'b0,   "CWM: w is Zero");
        drive_pipeline(3328, 3328, 3328, 3328, 3328, 0, 0, 0, PE_MODE_CWM, 1'b0, "CWM: Max Stress");

        // --------------------------------------------------
        // Random Pipeline Saturation Test
        // --------------------------------------------------
        $display("--- Testing CWM Random Stress Loop ---");
        begin
            // 1. Declare the variables first
            coeff_t rf0, rf1, rg0, rg1, rw;

            for (int i = 0; i < 20; i++) begin
                // 2. Assign them inside the loop
                rf0 = $urandom_range(0, 3328);
                rf1 = $urandom_range(0, 3328);
                rg0 = $urandom_range(0, 3328);
                rg1 = $urandom_range(0, 3328);
                rw  = $urandom_range(0, 3328);

                drive_pipeline(rf0, rf1, rg0, rg1, rw, 0, 0, 0, PE_MODE_CWM, 1'b0, "CWM: Random Flow");
            end
        end

        flush_pipeline();

        // Final Summary
        repeat(5) @(posedge clk);
        $display("");
        $display("==========================================================");
        $display("SUMMARY");
        $display("Passed: %0d", pass_count);
        $display("Failed: %0d", error_count);
        $display("----------------------------------------------------------");

        if (error_count == 0) $display("RESULT: SUCCESS");
        else begin
            $display("RESULT: FAILURE");
            $fatal(1, "pe_unit_tb: Testbench failed.");
        end
        $display("==========================================================");
        $finish;
    end
endmodule
