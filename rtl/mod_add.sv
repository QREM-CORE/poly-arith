/*
* Module Name: mod_add
* Author(s): Jessica Buentipo
* Target: FIPS 203 (ML-KEM / Kyber)
*
* Description:
* Performs Modular Addition: (A + B) mod 3329.
* Implements a single-stage conditional subtraction reduction. Since the
* maximum sum of two coefficients (0 to 3328) is 6656, a single subtraction
* of the modulus Q (3329) is sufficient for reduction.
*
* Latency: 2 Clock Cycles
* - Cycle 0: Input Registration (Pipeline Stage 1)
* - Cycle 1: Combinational Addition, Modular Reduction, and Output
* Registration (Pipeline Stage 2)
*/

import poly_arith_pkg::*;

module mod_add(
    input   logic   clk,
    input   logic   rst,

    // Inputs: Two 12-bit coefficients (0 to 3328)
    input   coeff_t op1_i,
    input   coeff_t op2_i,
    input   logic   valid_i,

    // Output: 12-bit result (0 to 3328)
    output  coeff_t result_o,
    output  logic   valid_o
);

    coeff_t         op1_reg, op2_reg;
    logic           valid_reg1;

    logic [12:0]    sum;
    logic [12:0]    sum_minus_q;
    coeff_t         final_result_wire;

    // =========================================================================
    // CYCLE 0: Input Registers (Pipeline Stage 1)
    // =========================================================================

    always_ff @(posedge clk) begin
        if (rst) begin
            op1_reg    <= '0;
            op2_reg    <= '0;
            valid_reg1 <= 1'b0;
        end else begin
            op1_reg    <= op1_i;
            op2_reg    <= op2_i;
            valid_reg1 <= valid_i;
        end
    end

    // combinational reduction logic
    assign sum = op1_reg + op2_reg;
    assign sum_minus_q = sum - Q;

    // selection
    assign final_result_wire = (sum >= Q) ? sum_minus_q[11:0] : sum[11:0];

    // =========================================================================
    // CYCLE 1 Logic: Output Registers (Pipeline Stage 2)
    // =========================================================================

    always_ff @(posedge clk) begin
        if (rst) begin
            result_o    <= '0;
            valid_o     <= 1'b0;
        end else begin
            result_o    <= final_result_wire;
            valid_o     <= valid_reg1;
        end
    end

endmodule
