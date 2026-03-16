// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtf_rom_addr_gen_tb__Syms.h"


VL_ATTR_COLD void Vtf_rom_addr_gen_tb___024root__trace_init_sub__TOP__poly_arith_pkg__0(Vtf_rom_addr_gen_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtf_rom_addr_gen_tb___024root__trace_init_sub__TOP__0(Vtf_rom_addr_gen_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtf_rom_addr_gen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtf_rom_addr_gen_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("poly_arith_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vtf_rom_addr_gen_tb___024root__trace_init_sub__TOP__poly_arith_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("tf_rom_addr_gen_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+41,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+4,0,"pass_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+16,0,"r4_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+17,0,"r2_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+5,0,"is_intt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"is_radix2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"ag_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"pass_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+21,0,"w0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+22,0,"w1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+23,0,"w2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+24,0,"w3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+42,0,"CLK_PERIOD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+6,0,"errors",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+7,0,"total_tests",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+8,0,"cycle_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("u_tf_addr_gen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+41,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"start_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"ctrl_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+4,0,"pass_idx_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+16,0,"r4_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+17,0,"r2_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+18,0,"is_radix2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"pass_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+25,0,"state_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+9,0,"state_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+26,0,"mode_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+27,0,"is_intt_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"is_cwm_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"bf_cnt_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+30,0,"block_cnt_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+31,0,"r4_cnt_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+32,0,"r2_cnt_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+33,0,"was_radix2_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"pass_done_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"blocks_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+36,0,"bfs_max",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+37,0,"pass_is_radix2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"bf_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"block_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"pass_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_tf_rom", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+41,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"is_intt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"is_radix2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+16,0,"r4_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+17,0,"r2_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+21,0,"w0_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+22,0,"w1_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+23,0,"w2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+24,0,"w3_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->pushPrefix("R4NTT_ROM", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 21; ++i) {
        tracep->declQuad(c+43+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, true,(i+0), 35,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("R4INTT_ROM", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 21; ++i) {
        tracep->declQuad(c+85+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, true,(i+0), 35,0);
    }
    tracep->popPrefix();
    tracep->declQuad(c+10,0,"r4_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 35,0);
    tracep->declBus(c+12,0,"r2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+13,0,"r4_w1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+14,0,"r4_w2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+15,0,"r4_w3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtf_rom_addr_gen_tb___024root__trace_init_sub__TOP__poly_arith_pkg__0(Vtf_rom_addr_gen_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtf_rom_addr_gen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtf_rom_addr_gen_tb___024root__trace_init_sub__TOP__poly_arith_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+127,0,"DWIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+128,0,"KEEP_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+129,0,"BYTE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+130,0,"Q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+127,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+129,0,"LOG_N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+131,0,"COEFF_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+132,0,"STORE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+132,0,"COEFFS_PER_BEAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+132,0,"BEATS_PER_POLY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+133,0,"OMEGA_4_NTT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+134,0,"OMEGA_4_INTT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+135,0,"INV_2_MOD_Q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
}

VL_ATTR_COLD void Vtf_rom_addr_gen_tb___024root__trace_init_top(Vtf_rom_addr_gen_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtf_rom_addr_gen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtf_rom_addr_gen_tb___024root__trace_init_top\n"); );
    // Body
    Vtf_rom_addr_gen_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtf_rom_addr_gen_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtf_rom_addr_gen_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtf_rom_addr_gen_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtf_rom_addr_gen_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtf_rom_addr_gen_tb___024root__trace_register(Vtf_rom_addr_gen_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtf_rom_addr_gen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtf_rom_addr_gen_tb___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtf_rom_addr_gen_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtf_rom_addr_gen_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtf_rom_addr_gen_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtf_rom_addr_gen_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtf_rom_addr_gen_tb___024root__trace_const_0_sub_0(Vtf_rom_addr_gen_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtf_rom_addr_gen_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtf_rom_addr_gen_tb___024root__trace_const_0\n"); );
    // Init
    Vtf_rom_addr_gen_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtf_rom_addr_gen_tb___024root*>(voidSelf);
    Vtf_rom_addr_gen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtf_rom_addr_gen_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtf_rom_addr_gen_tb___024root__trace_const_0_sub_0(Vtf_rom_addr_gen_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtf_rom_addr_gen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtf_rom_addr_gen_tb___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+42,(0xaU),32);
    bufp->fullQData(oldp+43,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__R4NTT_ROM[0]),36);
    bufp->fullQData(oldp+45,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__R4NTT_ROM[1]),36);
    bufp->fullQData(oldp+47,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__R4NTT_ROM[2]),36);
    bufp->fullQData(oldp+49,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__R4NTT_ROM[3]),36);
    bufp->fullQData(oldp+51,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__R4NTT_ROM[4]),36);
    bufp->fullQData(oldp+53,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__R4NTT_ROM[5]),36);
    bufp->fullQData(oldp+55,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__R4NTT_ROM[6]),36);
    bufp->fullQData(oldp+57,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__R4NTT_ROM[7]),36);
    bufp->fullQData(oldp+59,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__R4NTT_ROM[8]),36);
    bufp->fullQData(oldp+61,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__R4NTT_ROM[9]),36);
    bufp->fullQData(oldp+63,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__R4NTT_ROM[10]),36);
    bufp->fullQData(oldp+65,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__R4NTT_ROM[11]),36);
    bufp->fullQData(oldp+67,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__R4NTT_ROM[12]),36);
    bufp->fullQData(oldp+69,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__R4NTT_ROM[13]),36);
    bufp->fullQData(oldp+71,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__R4NTT_ROM[14]),36);
    bufp->fullQData(oldp+73,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__R4NTT_ROM[15]),36);
    bufp->fullQData(oldp+75,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__R4NTT_ROM[16]),36);
    bufp->fullQData(oldp+77,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__R4NTT_ROM[17]),36);
    bufp->fullQData(oldp+79,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__R4NTT_ROM[18]),36);
    bufp->fullQData(oldp+81,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__R4NTT_ROM[19]),36);
    bufp->fullQData(oldp+83,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__R4NTT_ROM[20]),36);
    bufp->fullQData(oldp+85,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__R4INTT_ROM[0]),36);
    bufp->fullQData(oldp+87,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__R4INTT_ROM[1]),36);
    bufp->fullQData(oldp+89,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__R4INTT_ROM[2]),36);
    bufp->fullQData(oldp+91,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__R4INTT_ROM[3]),36);
    bufp->fullQData(oldp+93,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__R4INTT_ROM[4]),36);
    bufp->fullQData(oldp+95,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__R4INTT_ROM[5]),36);
    bufp->fullQData(oldp+97,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__R4INTT_ROM[6]),36);
    bufp->fullQData(oldp+99,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__R4INTT_ROM[7]),36);
    bufp->fullQData(oldp+101,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__R4INTT_ROM[8]),36);
    bufp->fullQData(oldp+103,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__R4INTT_ROM[9]),36);
    bufp->fullQData(oldp+105,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__R4INTT_ROM[10]),36);
    bufp->fullQData(oldp+107,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__R4INTT_ROM[11]),36);
    bufp->fullQData(oldp+109,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__R4INTT_ROM[12]),36);
    bufp->fullQData(oldp+111,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__R4INTT_ROM[13]),36);
    bufp->fullQData(oldp+113,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__R4INTT_ROM[14]),36);
    bufp->fullQData(oldp+115,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__R4INTT_ROM[15]),36);
    bufp->fullQData(oldp+117,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__R4INTT_ROM[16]),36);
    bufp->fullQData(oldp+119,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__R4INTT_ROM[17]),36);
    bufp->fullQData(oldp+121,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__R4INTT_ROM[18]),36);
    bufp->fullQData(oldp+123,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__R4INTT_ROM[19]),36);
    bufp->fullQData(oldp+125,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__R4INTT_ROM[20]),36);
    bufp->fullIData(oldp+127,(0x100U),32);
    bufp->fullIData(oldp+128,(0x20U),32);
    bufp->fullIData(oldp+129,(8U),32);
    bufp->fullIData(oldp+130,(0xd01U),32);
    bufp->fullIData(oldp+131,(0xcU),32);
    bufp->fullIData(oldp+132,(0x10U),32);
    bufp->fullSData(oldp+133,(0x6c1U),12);
    bufp->fullSData(oldp+134,(0x640U),12);
    bufp->fullSData(oldp+135,(0x681U),12);
}

VL_ATTR_COLD void Vtf_rom_addr_gen_tb___024root__trace_full_0_sub_0(Vtf_rom_addr_gen_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtf_rom_addr_gen_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtf_rom_addr_gen_tb___024root__trace_full_0\n"); );
    // Init
    Vtf_rom_addr_gen_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtf_rom_addr_gen_tb___024root*>(voidSelf);
    Vtf_rom_addr_gen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtf_rom_addr_gen_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtf_rom_addr_gen_tb___024root__trace_full_0_sub_0(Vtf_rom_addr_gen_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtf_rom_addr_gen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtf_rom_addr_gen_tb___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->tf_rom_addr_gen_tb__DOT__rst));
    bufp->fullBit(oldp+2,(vlSelf->tf_rom_addr_gen_tb__DOT__start));
    bufp->fullCData(oldp+3,(vlSelf->tf_rom_addr_gen_tb__DOT__mode),4);
    bufp->fullCData(oldp+4,(vlSelf->tf_rom_addr_gen_tb__DOT__pass_idx),2);
    bufp->fullBit(oldp+5,((0xfU == (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__mode))));
    bufp->fullIData(oldp+6,(vlSelf->tf_rom_addr_gen_tb__DOT__errors),32);
    bufp->fullIData(oldp+7,(vlSelf->tf_rom_addr_gen_tb__DOT__total_tests),32);
    bufp->fullIData(oldp+8,(vlSelf->tf_rom_addr_gen_tb__DOT__cycle_count),32);
    bufp->fullCData(oldp+9,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__state_next),3);
    bufp->fullQData(oldp+10,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__r4_data),36);
    bufp->fullSData(oldp+12,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__r2_data),12);
    bufp->fullSData(oldp+13,((0xfffU & (IData)((vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__r4_data 
                                                >> 0x18U)))),12);
    bufp->fullSData(oldp+14,((0xfffU & (IData)((vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__r4_data 
                                                >> 0xcU)))),12);
    bufp->fullSData(oldp+15,((0xfffU & (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__r4_data))),12);
    bufp->fullCData(oldp+16,(vlSelf->tf_rom_addr_gen_tb__DOT__r4_addr),5);
    bufp->fullCData(oldp+17,(vlSelf->tf_rom_addr_gen_tb__DOT__r2_addr),6);
    bufp->fullBit(oldp+18,(vlSelf->tf_rom_addr_gen_tb__DOT__is_radix2));
    bufp->fullBit(oldp+19,(((0U != (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__state_r)) 
                            | (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_done_r))));
    bufp->fullCData(oldp+20,(vlSelf->tf_rom_addr_gen_tb__DOT__pass_num),2);
    bufp->fullSData(oldp+21,(vlSelf->tf_rom_addr_gen_tb__DOT__w0),12);
    bufp->fullSData(oldp+22,(vlSelf->tf_rom_addr_gen_tb__DOT__w1),12);
    bufp->fullSData(oldp+23,(vlSelf->tf_rom_addr_gen_tb__DOT__w2),12);
    bufp->fullSData(oldp+24,(vlSelf->tf_rom_addr_gen_tb__DOT__w3),12);
    bufp->fullCData(oldp+25,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__state_r),3);
    bufp->fullCData(oldp+26,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__mode_r),4);
    bufp->fullBit(oldp+27,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__is_intt_r));
    bufp->fullBit(oldp+28,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__is_cwm_r));
    bufp->fullCData(oldp+29,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__bf_cnt_r),6);
    bufp->fullCData(oldp+30,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__block_cnt_r),6);
    bufp->fullCData(oldp+31,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__r4_cnt_r),5);
    bufp->fullCData(oldp+32,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__r2_cnt_r),6);
    bufp->fullBit(oldp+33,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__was_radix2_r));
    bufp->fullBit(oldp+34,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_done_r));
    bufp->fullCData(oldp+35,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__blocks_max),6);
    bufp->fullCData(oldp+36,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__bfs_max),6);
    bufp->fullBit(oldp+37,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_is_radix2));
    bufp->fullBit(oldp+38,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__bf_last));
    bufp->fullBit(oldp+39,(((IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__block_cnt_r) 
                            == (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__blocks_max))));
    bufp->fullBit(oldp+40,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_last));
    bufp->fullBit(oldp+41,(vlSelf->tf_rom_addr_gen_tb__DOT__clk));
}
