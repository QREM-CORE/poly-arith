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
 * Top-level wrapper for the Unified Polynomial Arithmetic Module.
 * Routes incoming data to PE0, PE1, PE2, and PE3 depending on the operational mode.
 */

import poly_arith_pkg::*;

module pe_unit (
    input   logic           clk,
    input   logic           rst,

    input   logic           valid_i,
    input   pe_mode_e       ctrl_i,

    // ==========================================
    // Primary Operand Bus (Fed by SRAM Bank A)
    // ==========================================
    // Mappings:
    // - NTT/INTT/COMP/DECOMP : X_0, X_1, X_2, X_3
    // - ADDSUB               : X_0, X_1, X_2, X_3
    // - CWM                  : f_2i, f_2i+1, g_2i, g_2i+1
    input   coeff_t         op_a0_i,
    input   coeff_t         op_a1_i,
    input   coeff_t         op_a2_i,
    input   coeff_t         op_a3_i,

    // ==========================================
    // Secondary Operand Bus (Fed by SRAM Bank B OR Twiddle ROM)
    // ==========================================
    // Mappings:
    // - NTT/INTT/COMP/DECOMP : w_2, w_1, w_3, w_4 (Twiddles / Constants)
    // - ADDSUB               : Y_0, Y_1, Y_2, Y_3 (Secondary Polynomial)
    // - CWM                  : omega, Unused, Unused, Unused
    input   coeff_t         op_b0_i,
    input   coeff_t         op_b1_i,
    input   coeff_t         op_b2_i,
    input   coeff_t         op_b3_i,

    // ==========================================
    // Outputs
    // ==========================================
    output  coeff_t         z0_o,
    output  coeff_t         z1_o,
    output  coeff_t         z2_o,
    output  coeff_t         z3_o,

    output  logic           valid_o
);

    // =========================================================================
    // Logic Instantiations
    // =========================================================================

    // -------- PE0 Wires --------
    coeff_t     pe0_a0_i, pe0_b0_i, pe0_w0_i;
    coeff_t     pe0_u0_o, pe0_v0_o;
    pe_mode_e   pe0_ctrl_i;
    logic       pe0_valid_i, pe0_valid_o;

    // -------- PE1 Wires --------
    coeff_t     pe1_a1_i, pe1_b1_i, pe1_c0_i, pe1_c1_i;
    coeff_t     pe1_u1_o, pe1_v1_o;
    pe_mode_e   pe1_ctrl_i;
    logic       pe1_valid_i, pe1_valid_o;

    // -------- PE2 Wires --------
    coeff_t     pe2_a2_i, pe2_b2_i, pe2_w1_i, pe2_w2_i;
    coeff_t     pe2_u2_o, pe2_v2_o, pe2_m_o;
    pe_mode_e   pe2_ctrl_i;
    logic       pe2_valid_i, pe2_valid_o, pe2_valid_m_o;

    // -------- PE3 Wires --------
    coeff_t     pe3_a3_i, pe3_b3_i, pe3_w3_i, pe3_tf_omega_4_i;
    coeff_t     pe3_u3_o, pe3_v3_o;
    pe_mode_e   pe3_ctrl_i;
    logic       pe3_valid_i, pe3_valid_o;

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

    // -------- PE3 --------
    pe3 u_pe3 (
        .clk            (clk),
        .rst            (rst),
        .a3_i           (pe3_a3_i),
        .b3_i           (pe3_b3_i),
        .w3_i           (pe3_w3_i),
        .tf_omega_4_i   (pe3_tf_omega_4_i),
        .ctrl_i         (pe3_ctrl_i),
        .valid_i        (pe3_valid_i),
        .u3_o           (pe3_u3_o),
        .v3_o           (pe3_v3_o),
        .valid_o        (pe3_valid_o)
    );

    // =========================================================================
    // Processing Element (PE) Routing (Optimized 8-Port Interface)
    // Reference: Table 1 (Inha University UniPAM Architecture)
    // =========================================================================

    always_comb begin
        // Default assignments to prevent inferred latches
        pe0_a0_i = '0; pe0_b0_i = '0; pe0_w0_i = '0;
        pe1_a1_i = '0; pe1_b1_i = '0; pe1_c0_i = '0; pe1_c1_i = '0;
        pe2_a2_i = '0; pe2_b2_i = '0; pe2_w1_i = '0; pe2_w2_i = '0;
        pe3_a3_i = '0; pe3_b3_i = '0; pe3_w3_i = '0; pe3_tf_omega_4_i = '0;
        z0_o = '0; z1_o = '0; z2_o = '0; z3_o = '0;

        // Default Control & Valid propagation
        pe0_ctrl_i = ctrl_i; pe1_ctrl_i = ctrl_i;
        pe2_ctrl_i = ctrl_i; pe3_ctrl_i = ctrl_i;

        pe0_valid_i = valid_i; pe1_valid_i = valid_i;
        pe2_valid_i = valid_i; pe3_valid_i = valid_i;
        valid_o = pe0_valid_o; // Standardize valid_o to PE0's output

        case(ctrl_i)
            PE_MODE_CWM : begin
                // ---------------------------------------------------------
                // External Mapping for CWM (5 Inputs Used):
                // op_a0_i = f_2i        op_b0_i = omega (w)
                // op_a1_i = f_2i+1      op_b1_i = Unused
                // op_a2_i = g_2i        op_b2_i = Unused
                // op_a3_i = g_2i+1      op_b3_i = Unused
                // ---------------------------------------------------------

                // CE0 Routing (Feedback Heavy)
                pe0_a0_i = pe2_m_o;   // M
                pe0_b0_i = pe1_u1_o;  // U1
                pe0_w0_i = pe1_v1_o;  // V1

                // CE1 Routing
                pe1_a1_i = op_a2_i;   // g_2i
                pe1_b1_i = op_a1_i;   // f_2i+1
                // NOTE: Swapped c0 and c1 inputs to fix theoretical CWM routing
                pe1_c0_i = op_a0_i;   // f_2i
                pe1_c1_i = op_a3_i;   // g_2i+1

                // CE2 Routing
                pe2_a2_i = op_a0_i;   // f_2i
                pe2_b2_i = op_a3_i;   // g_2i+1
                pe2_w1_i = op_a2_i;   // g_2i
                pe2_w2_i = op_a1_i;   // f_2i+1

                // CE3 Routing
                pe3_a3_i = pe2_u2_o;  // U2
                pe3_b3_i = pe2_v2_o;  // V2
                pe3_w3_i = op_b0_i;   // omega

                // Outputs
                z1_o = pe3_u3_o;      // U3
                z2_o = pe0_v0_o;      // V0
            end

            PE_MODE_NTT : begin
                // ---------------------------------------------------------
                // External Mapping for NTT (8 Inputs Used):
                // op_a0_i = X_0         op_b0_i = w_2
                // op_a1_i = X_1         op_b1_i = w_1
                // op_a2_i = X_2         op_b2_i = w_3
                // op_a3_i = X_3         op_b3_i = w_4^1 (or single omega)
                // ---------------------------------------------------------

                // CE0 Routing
                pe0_a0_i = op_a0_i;   // X_0
                pe0_b0_i = op_a2_i;   // X_2
                pe0_w0_i = op_b0_i;   // w_2

                // CE1 Routing (Cross-PE Feedback)
                pe1_a1_i = pe0_u0_o;  // U0
                pe1_b1_i = pe2_u2_o;  // U2

                // CE2 Routing
                pe2_a2_i = op_a1_i;   // X_1
                pe2_b2_i = op_a3_i;   // X_3
                pe2_w1_i = op_b1_i;   // w_1
                pe2_w2_i = op_b2_i;   // w_3

                // CE3 Routing (Cross-PE Feedback)
                pe3_a3_i = pe0_v0_o;  // V0
                pe3_b3_i = pe2_v2_o;  // V2
                pe3_tf_omega_4_i = op_b3_i; // w_4^1

                // Outputs
                z0_o = pe1_u1_o;      // U1
                z1_o = pe1_v1_o;      // V1
                z2_o = pe3_u3_o;      // U3
                z3_o = pe3_v3_o;      // V3
            end

            PE_MODE_INTT : begin
                // ---------------------------------------------------------
                // External Mapping for INTT (8 Inputs Used):
                // op_a0_i = X_0         op_b0_i = w_2^-1
                // op_a1_i = X_1         op_b1_i = w_1^-1
                // op_a2_i = X_2         op_b2_i = w_3^-1
                // op_a3_i = X_3         op_b3_i = w_4^-1 (or single inv)
                // ---------------------------------------------------------

                // CE0 Routing (Cross-PE Feedback)
                pe0_a0_i = pe3_u3_o;  // U3
                pe0_b0_i = pe1_u1_o;  // U1
                pe0_w0_i = op_b0_i;   // w_2^-1

                // CE1 Routing
                pe1_a1_i = op_a2_i;   // X_2
                pe1_b1_i = op_a3_i;   // X_3

                // CE2 Routing (Cross-PE Feedback)
                pe2_a2_i = pe3_v3_o;  // V3
                pe2_b2_i = pe1_v1_o;  // V1
                pe2_w1_i = op_b1_i;   // w_1^-1
                pe2_w2_i = op_b2_i;   // w_3^-1

                // CE3 Routing
                pe3_a3_i = op_a0_i;   // X_0
                pe3_b3_i = op_a1_i;   // X_1
                pe3_tf_omega_4_i = op_b3_i; // w_4^-1

                // Outputs
                z0_o = pe0_u0_o;      // U0
                z1_o = pe2_u2_o;      // U2
                z2_o = pe0_v0_o;      // V0
                z3_o = pe2_v2_o;      // V2
            end

            PE_MODE_ADD, PE_MODE_SUB : begin
                // ---------------------------------------------------------
                // External Mapping for Point-wise ADD/SUB (8 Inputs Used):
                // op_a0_i = X_0         op_b0_i = Y_0
                // op_a1_i = X_1         op_b1_i = Y_1
                // op_a2_i = X_2         op_b2_i = Y_2
                // op_a3_i = X_3         op_b3_i = Y_3
                // ---------------------------------------------------------

                // CE0 Routing
                pe0_a0_i = op_a0_i;
                pe0_b0_i = op_b0_i;

                // CE1 Routing (Follows Table 1 mapping X2/Y2)
                pe1_a1_i = op_a2_i;
                pe1_b1_i = op_b2_i;

                // CE2 Routing (Follows Table 1 mapping X1/Y1)
                pe2_a2_i = op_a1_i;
                pe2_b2_i = op_b1_i;

                // CE3 Routing (Follows Table 1 mapping X3/Y3)
                pe3_a3_i = op_a3_i;
                pe3_b3_i = op_b3_i;

                // Outputs - Dynamically map U (Add) or V (Sub) to Z
                if (ctrl_i == PE_MODE_ADD) begin
                    z0_o = pe0_u0_o;
                    z1_o = pe1_u1_o;
                    z2_o = pe2_u2_o;
                    z3_o = pe3_u3_o;
                end else begin
                    z0_o = pe0_v0_o;
                    z1_o = pe1_v1_o;
                    z2_o = pe2_v2_o;
                    z3_o = pe3_v3_o;
                end
            end

            PE_MODE_COMP, PE_MODE_DECOMP : begin
                // ---------------------------------------------------------
                // External Mapping for COMP / DECOMP (8 Inputs Used):
                // op_a0_i = X_0         op_b0_i = m/q
                // op_a1_i = X_1         op_b1_i = m/q
                // op_a2_i = X_2         op_b2_i = m/q
                // op_a3_i = X_3         op_b3_i = m/q
                // ---------------------------------------------------------

                // CE0 Routing
                pe0_b0_i = op_a0_i;   // X_0
                pe0_w0_i = op_b0_i;   // m/q

                // CE2 Routing
                pe2_a2_i = op_a1_i;   // X_1
                pe2_b2_i = op_a2_i;   // X_2
                pe2_w1_i = op_b1_i;   // m/q
                pe2_w2_i = op_b2_i;   // m/q

                // CE3 Routing
                pe3_b3_i = op_a3_i;   // X_3
                pe3_w3_i = op_b3_i;   // m/q

                // Outputs
                z0_o = pe0_v0_o;      // V0
                z1_o = pe2_u2_o;      // U2
                z2_o = pe2_v2_o;      // V2
                z3_o = pe3_v3_o;      // V3
            end

            default : begin
                // Safely falls back to top-level default assignments ('0)
                // synthesis translate_off
                $error("[AU Wrapper] ERROR: Invalid pe_mode_e state received: %b", ctrl_i);
                // synthesis translate_on
            end
        endcase
    end

endmodule
