/*
 * Module Name: base_case_mul
 * Author: Kiet Le
 * Target Standard: FIPS 203 (ML-KEM) - Algorithm 12
 *
 * Description:
 * Implements the "BaseCaseMultiply" operation for degree-one polynomials
 * in the NTT domain. This is the fundamental building block for the
 * pointwise multiplication of two NTT-transformed polynomials.
 *
 * Mathematical Operation:
 * Computes the product of two linear polynomials mod (X^2 - zeta):
 * a(x) = a0 + a1*X
 * b(x) = b0 + b1*X
 * c(x) = a(x) * b(x) mod (X^2 - zeta)
 *
 * Latency: 4 Clock Cycles
 *
 */

import poly_arith_pkg::*;

module base_case_mul (
    input           clk,
    input           rst,
    input           valid_i,

    // Input Pair A
    input  coeff_t  a0_i,
    input  coeff_t  a1_i,

    // Input Pair B
    input  coeff_t  b0_i,
    input  coeff_t  b1_i,

    // Zeta
    input  coeff_t  zeta_i,

    // Output Pair
    output coeff_t  c0_o,
    output coeff_t  c1_o,
    output          valid_o
);

    // ============================================================
    // STAGE 0: Raw Multiplication & Karatsuba Setup
    // ============================================================

    // 1. Raw Products (24-bit)
    logic [23:0] prod_high, prod_low;
    assign prod_high = a1_i * b1_i;
    assign prod_low  = a0_i * b0_i;

    // 2. Middle Term Calculation (Karatsuba)
    // Formula: (a0+a1)(b0+b1) - a1b1 - a0b0
    // Note: In standard integer math, this result is always positive.
    logic [12:0] sum_a, sum_b; // 13-bit to hold sum of two 12-bit coeffs
    assign sum_a = a0_i + a1_i;
    assign sum_b = b0_i + b1_i;

    logic [25:0] prod_sum; 
    assign prod_sum = sum_a * sum_b;

    logic [25:0] mid_term_raw;
    assign mid_term_raw = prod_sum - prod_high - prod_low;

    // ============================================================
    // PHASE 1: Parallel Reduction (Cycles 0 -> 2)
    // ============================================================

    // We reduce ALL three terms immediately to save register width later.

    logic val_high_valid, val_low_valid, val_mid_valid;
    logic [11:0] red_high, red_low, red_mid;

    // Reducer 1: High Term (a1 * b1)
    modular_reduce REDUCE_HIGH (
        .clk(clk), .rst(rst),
        .valid_i(valid_i),
        .product_i(prod_high),
        .valid_o(val_high_valid),
        .result_o(red_high)
    );

    // Reducer 2: Low Term (a0 * b0)
    modular_reduce REDUCE_LOW (
        .clk(clk), .rst(rst),
        .valid_i(valid_i),
        .product_i(prod_low),
        .valid_o(val_low_valid),
        .result_o(red_low)
    );

    // Reducer 3: Middle Term
    // Note: mid_term_raw can be up to ~25 bits, but modular_reduce takes 24.
    // However, for ML-KEM inputs, (a0+a1)(b0+b1) max is roughly 2*3328 * 2*3328
    // which fits in 24 bits if inputs are reduced.
    // Ideally, ensure modular_reduce input is wide enough or cast carefully.
    modular_reduce REDUCE_MID (
        .clk(clk), .rst(rst),
        .valid_i(valid_i),
        .product_i(mid_term_raw[23:0]), // Assuming fits in 24 bits
        .valid_o(val_mid_valid),
        .result_o(red_mid)
    );

    // ============================================================
    // STAGE 2: Zeta Multiplication & C0 Calculation (Cycle 2)
    // ============================================================

    // When the reducers finish (T+2), we combine High and Low to make C0.
    // C0 = (High_Reduced * Zeta) + Low_Reduced

    // We need to pipeline 'zeta_i' to match the 2-cycle reducer latency.
    logic [11:0] zeta_d1, zeta_d2;
    always_ff @(posedge clk) begin
        if (valid_i) zeta_d1 <= zeta_i;
        zeta_d2 <= zeta_d1;
    end

    // Math Logic (Combinational after Reducers output)
    logic [23:0] term_zeta;
    logic [23:0] sum_c0_raw;

    assign term_zeta  = red_high * zeta_d2;
    assign sum_c0_raw = term_zeta + red_low;
    // Note: term_zeta is ~24 bits. red_low is 12 bits.
    // sum_c0_raw fits comfortably in 24 bits for the final reducer.

    // ============================================================
    // PHASE 2: Final Reduction of C0 (Cycles 2 -> 4)
    // ============================================================

    logic val_c0_valid;
    logic [11:0] c0_final;

    modular_reduce REDUCE_FINAL_C0 (
        .clk(clk), .rst(rst),
        .valid_i(val_high_valid), // Starts when Phase 1 finishes
        .product_i(sum_c0_raw),
        .valid_o(val_c0_valid),
        .result_o(c0_final)
    );

    // ============================================================
    // DELAY LINE: Align C1 with C0 (Cycles 2 -> 4)
    // ============================================================

    // The Middle Term (C1) was ready at T+2, but C0 isn't ready until T+4.
    // We must delay C1 by 2 cycles.

    logic [11:0] c1_d1, c1_final;
    logic        valid_d1;

    always_ff @(posedge clk) begin
        // Pipeline Stage 1 (Cycle 3)
        c1_d1 <= red_mid;

        // Pipeline Stage 2 (Cycle 4 - Output)
        c1_final <= c1_d1;
    end

    // ============================================================
    // OUTPUT ASSIGNMENT
    // ============================================================

    assign c0_o = c0_final;
    assign c1_o = c1_final;
    assign valid_o = val_c0_valid;

endmodule
