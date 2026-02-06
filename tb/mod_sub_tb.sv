// ==========================================================
// Testbench for Base Case Multiplier (Enhanced Debugging)
// Author: Jessica Buentipo
// Target: FIPS 203 (ML-KEM) - 2-Cycle Latency
// ==========================================================

`timescale 1ns/1ps

module mod_sub_tb();

    import poly_arith_pkg::*;
    
    logic        clk;
    logic        rst;
    coeff_t      op1_i;
    coeff_t      op2_i;
    logic        valid_i;

    coeff_t      result_o;
    logic        valid_o;

    // Queue to hold expected results for latency matching
    coeff_t expected_q[$];
    int pass_count = 0;
    int fail_count = 0;

    // Clock Generation
    initial clk = 0;
    always #5 clk = ~clk;

    // Instantiate UUT (Unit Under Test)
    mod_sub uut (.*);

    // Task to send stimulus and calculate expected result
    task send_sub(input [11:0] a, input [11:0] b);
        // Using signed integer to calculate the expected golden value
        int signed diff;
        coeff_t expected_val;
        begin
            @(posedge clk);
            op1_i   <= a;
            op2_i   <= b;
            valid_i <= 1'b1;
            
            // Golden Model Logic for Subtraction
            diff = $signed({1'b0, a}) - $signed({1'b0, b});
            if (diff < 0) begin
                expected_val = coeff_t'(diff + Q);
            end else begin
                expected_val = coeff_t'(diff);
            end
            
            expected_q.push_back(expected_val); // Store for later checking
            
            @(posedge clk);
            valid_i <= 1'b0;
        end
    endtask

    // Checker Logic: Runs every time valid_o is asserted
    always @(posedge clk) begin
        if (valid_o) begin
            coeff_t expected;
            if (expected_q.size() > 0) begin
                expected = expected_q.pop_front();
                if (result_o === expected) begin
                    $display("[PASS] Time:%0t | Expected:%d Got:%d", $time, expected, result_o);
                    pass_count++;
                end else begin
                    $display("[FAIL] Time:%0t | Expected:%d Got:%d", $time, expected, result_o);
                    fail_count++;
                end
            end else begin
                $display("[ERROR] Time:%0t | valid_o asserted but no expected data in queue!", $time);
                fail_count++;
            end
        end
    end

    // Main Stimulus
    initial begin
        // Initialize Signals
        rst = 1;
        op1_i = 0;
        op2_i = 0;
        valid_i = 0;

        repeat (2) @(posedge clk);
        rst = 0;
        repeat (2) @(posedge clk);

        // --- Test Cases ---
        $display("--- Starting Subtraction Tests ---");
        
        send_sub(12'd50, 12'd20);      // Simple positive result: 30
        send_sub(12'd20, 12'd50);      // Underflow: 20 - 50 = -30 -> (-30 + 3329) = 3299
        send_sub(12'd0, 12'd1);        // Smallest underflow: -1 -> 3328
        send_sub(12'd3328, 12'd0);     // Max positive: 3328
        send_sub(12'd100, 12'd100);    // Zero case
        send_sub(12'd0, 12'd3328);     // Max underflow: -3328 -> 1
        send_sub(12'd1664, 12'd1665);  // Mid-range underflow
        
        // Random testing (optional)
        repeat(5) begin
            send_sub($urandom_range(0, Q-1), $urandom_range(0, Q-1));
        end

        // Wait for pipeline to drain (2 stages in your module)
        repeat (5) @(posedge clk);
        
        $display("\n--- FINAL REPORT ---");
        $display("Tests Passed: %0d", pass_count);
        $display("Tests Failed: %0d", fail_count);
        
        if (fail_count == 0 && pass_count > 0)
            $display("SIMULATION RESULT: SUCCESS\n");
        else
            $display("SIMULATION RESULT: FAILURE\n");

        $finish;
    end

endmodule