/*
 * Module Name: pe_unit
 * Author(s): Kiet Le
 * Target: FIPS 203 (ML-KEM / Kyber) Hardware Accelerator
 *
 * Reference:
 * Architecture based on the "Unified Polynomial Arithmetic Module (UniPAM)" from:
 * H. Jung, Q. D. Truong and H. Lee, "Highly-Efficient Hardware Architecture
 * for ML-KEM PQC Standard," in IEEE Open Journal of Circuits and Systems, 2025,
 * doi: 10.1109/OJCAS.2025.3591136. (Inha University)
 *
 * Description:
 *
 */

import poly_arith_pkg::*;

module pe_unit (
    input   logic           clk,
    input   logic           rst,

    input   logic           valid_i,
    input   pe_mode_e       ctrl_i,

    input   coeff_t         x0_i,
    input   coeff_t         x1_i,
    input   coeff_t         x2_i,
    input   coeff_t         x3_i,

    output  coeff_t         z0_o,
    output  coeff_t         z1_o,
    output  coeff_t         z2_o,
    output  coeff_t         z3_o,

    output  logic           valid_o
);

    // =========================================================================
    // Logic Instantiations
    // =========================================================================


    // =========================================================================
    // Processing Element (PE) Instantiations
    // =========================================================================

    // -------- PE0 --------
    pe0 u_pe0 (
        .clk        (clk),
        .rst        (rst),

        .a0_i       (pe0_a0_i),
        .b0_i       (pe0_b0_i),
        .w0_i       (pe0_w0_i),

        .ctrl_i     (pe0_ctrl_i),
        .valid_i    (pe0_valid_i),

        .u0_o       (pe0_u0_o),
        .v0_o       (pe0_v0_o),
        .valid_o    (pe0_valid_o)
    );
    assign pe0_a0_i     = ;
    assign pe0_b0_i     = ;
    assign pe0_w0_i     = ;
    assign pe0_ctrl_i   = ;
    assign pe0_valid_i  = ;

    // -------- PE1 --------
    pe1 u_pe1 (
        .clk        (clk),
        .rst        (rst),

        .a1_i       (pe1_a1_i),
        .b1_i       (pe1_b1_i),
        .c0_i       (pe1_c0_i),
        .c1_i       (pe1_c1_i),

        .ctrl_i     (pe1_ctrl_i),
        .valid_i    (pe1_valid_i),

        .u1_o       (pe1_u1_o),
        .v1_o       (pe1_v1_o),
        .valid_o    (pe1_valid_o)
    );
    assign pe1_a1_i     = ;
    assign pe1_b1_i     = ;
    assign pe1_c0_i     = ;
    assign pe1_c1_i     = ;
    assign pe1_ctrl_i   = ;
    assign pe1_valid_i  = ;

    // -------- PE2 --------
    pe2 u_pe2 (
        .clk        (clk),
        .rst        (rst),

        .a2_i       (pe2_a2_i),
        .b2_i       (pe2_b2_i),
        .w1_i       (pe2_w1_i),
        .w2_i       (pe2_w2_i),

        .ctrl_i     (pe2_ctrl_i),
        .valid_i    (pe2_valid_i),

        .u2_o       (pe2_u2_o),
        .v2_o       (pe2_v2_o),
        .valid_o    (pe2_valid_o),

        .m_o        (pe2_m_o),
        .valid_m_o  (pe2_valid_m_o)
    );
    assign pe2_a2_i         = ;
    assign pe2_b2_i         = ;
    assign pe2_w1_i         = ;
    assign pe2_w2_i         = ;
    assign pe2_ctrl_i       = ;
    assign pe2_valid_i      = ;
    assign pe2_m_o          = ;
    assign pe2_valid_m_o    = ;

    // -------- PE3 --------
    pe3 u_pe3 (
        .clk            (clk),
        .rst            (rst),

        .a3_i           (pe3_a2_i),
        .b3_i           (pe3_b2_i),
        .w3_i           (pe3_w1_i),
        .tf_omega_4_i   (pe3_tf_omega_4_i),

        .ctrl_i         (pe3_ctrl_i),
        .valid_i        (pe3_valid_i),

        .u3_o           (pe3_u3_o),
        .v3_o           (pe3_v3_o),
        .valid_o        (pe3_valid_o)
    );
    assign pe3_a2_i         = ;
    assign pe3_b2_i         = ;
    assign pe3_w1_i         = ;
    assign pe3_tf_omega_4_i = ;
    assign pe3_ctrl_i       = ;
    assign pe3_valid_i      = ;

    // =========================================================================
    // Processing Element (PE) Routing (from Table 1 of Inha Paper)
    // =========================================================================

    always_comb begin
        case(ctrl_i)
            PE_MODE_CWM     : begin
                
            end

            PE_MODE_NTT     : begin

            end

            PE_MODE_INTT    : begin

            end

            PE_MODE_ADDSUB  : begin

            end

            PE_MODE_COMP    : begin

            end

            PE_MODE_DECOMP  : begin

            end
        endcase
    end

endmodule
