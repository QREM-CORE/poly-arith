// ==========================================================
// Testbench for Base Case Multiplier (Enhanced Debugging)
// Author: Jessica Buentipo
// Target: FIPS 203 (ML-KEM) - 2-Cycle Latency
// ==========================================================


`timescale 1ns/1ps

module mod_add_tb();

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

    // Instantiate UUT
    mod_add uut (.*);

    // Task to send stimulus and calculate expected result
    task send_add(input [11:0] a, input [11:0] b);
        logic [12:0] local_sum;
        coeff_t expected_val;
        begin
            @(posedge clk);
            op1_i   <= a;
            op2_i   <= b;
            valid_i <= 1'b1;

            // Golden Model Logic
            local_sum = a + b;
            expected_val = (local_sum >= Q) ? (local_sum - Q) : local_sum;
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
        rst = 1;
        op1_i = 0;
        op2_i = 0;
        valid_i = 0;

        repeat (2) @(posedge clk);
        rst = 0;
        repeat (2) @(posedge clk);

        // --- Test Cases ---
        send_add(12'd10, 12'd20);      // No reduction
        send_add(Q-1, 12'd1);          // Exact wrap
        send_add(12'd3000, 12'd3000);  // Large reduction
        send_add(12'd0, 12'd0);        // Zeros
        send_add(12'd3328, 12'd3328);  // Near max possible

        // Wait for pipeline to drain
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