/*
 * Module Name: mod_sub
 * Author(s): Jessica Buentipo (Modified for Subtraction)
 * Target: FIPS 203 (ML-KEM / Kyber)
 *
 * Description:
 * Performs Modular Subtraction: (A - B) mod 3329.
 * Implements a single-stage conditional addition reduction. If the result 
 * of (A - B) is negative (indicated by the MSB of the 13-bit difference), 
 * the modulus Q (3329) is added to bring the result back into the 
 * positive range [0, 3328].
 *
 * Latency: 2 Clock Cycles
 * - Cycle 0: Input Registration (Pipeline Stage 1)
 * - Cycle 1: Combinational Subtraction, Modular Correction, and Output 
 * Registration (Pipeline Stage 2)
 */

/*
 * Module Name: mod_sub
 * Author(s): Jessica Buentipo (Modified for Subtraction)
 * Target: FIPS 203 (ML-KEM / Kyber)
 */
import poly_arith_pkg::*;

module mod_sub(
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

    // using 13 bits to capture the sign bit of the subtraction
    logic [12:0]    diff;
    logic [12:0]    diff_plus_q;
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

    // combinational addition logic
    assign diff = op1_reg - op2_reg;
    assign diff_plus_q = diff + Q;

    // selection of output
    assign final_result_wire = diff[12] ? diff_plus_q[11:0] : diff[11:0];

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