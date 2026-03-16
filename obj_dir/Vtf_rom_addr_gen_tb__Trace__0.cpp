// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtf_rom_addr_gen_tb__Syms.h"


void Vtf_rom_addr_gen_tb___024root__trace_chg_0_sub_0(Vtf_rom_addr_gen_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtf_rom_addr_gen_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtf_rom_addr_gen_tb___024root__trace_chg_0\n"); );
    // Init
    Vtf_rom_addr_gen_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtf_rom_addr_gen_tb___024root*>(voidSelf);
    Vtf_rom_addr_gen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtf_rom_addr_gen_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtf_rom_addr_gen_tb___024root__trace_chg_0_sub_0(Vtf_rom_addr_gen_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtf_rom_addr_gen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtf_rom_addr_gen_tb___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->tf_rom_addr_gen_tb__DOT__rst));
        bufp->chgBit(oldp+1,(vlSelf->tf_rom_addr_gen_tb__DOT__start));
        bufp->chgCData(oldp+2,(vlSelf->tf_rom_addr_gen_tb__DOT__mode),4);
        bufp->chgCData(oldp+3,(vlSelf->tf_rom_addr_gen_tb__DOT__pass_idx),2);
        bufp->chgBit(oldp+4,((0xfU == (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__mode))));
        bufp->chgIData(oldp+5,(vlSelf->tf_rom_addr_gen_tb__DOT__errors),32);
        bufp->chgIData(oldp+6,(vlSelf->tf_rom_addr_gen_tb__DOT__total_tests),32);
        bufp->chgIData(oldp+7,(vlSelf->tf_rom_addr_gen_tb__DOT__cycle_count),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgCData(oldp+8,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__state_next),3);
        bufp->chgQData(oldp+9,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__r4_data),36);
        bufp->chgSData(oldp+11,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__r2_data),12);
        bufp->chgSData(oldp+12,((0xfffU & (IData)((vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__r4_data 
                                                   >> 0x18U)))),12);
        bufp->chgSData(oldp+13,((0xfffU & (IData)((vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__r4_data 
                                                   >> 0xcU)))),12);
        bufp->chgSData(oldp+14,((0xfffU & (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__r4_data))),12);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgCData(oldp+15,(vlSelf->tf_rom_addr_gen_tb__DOT__r4_addr),5);
        bufp->chgCData(oldp+16,(vlSelf->tf_rom_addr_gen_tb__DOT__r2_addr),6);
        bufp->chgBit(oldp+17,(vlSelf->tf_rom_addr_gen_tb__DOT__is_radix2));
        bufp->chgBit(oldp+18,(((0U != (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__state_r)) 
                               | (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_done_r))));
        bufp->chgCData(oldp+19,(vlSelf->tf_rom_addr_gen_tb__DOT__pass_num),2);
        bufp->chgSData(oldp+20,(vlSelf->tf_rom_addr_gen_tb__DOT__w0),12);
        bufp->chgSData(oldp+21,(vlSelf->tf_rom_addr_gen_tb__DOT__w1),12);
        bufp->chgSData(oldp+22,(vlSelf->tf_rom_addr_gen_tb__DOT__w2),12);
        bufp->chgSData(oldp+23,(vlSelf->tf_rom_addr_gen_tb__DOT__w3),12);
        bufp->chgCData(oldp+24,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__state_r),3);
        bufp->chgCData(oldp+25,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__mode_r),4);
        bufp->chgBit(oldp+26,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__is_intt_r));
        bufp->chgBit(oldp+27,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__is_cwm_r));
        bufp->chgCData(oldp+28,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__bf_cnt_r),6);
        bufp->chgCData(oldp+29,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__block_cnt_r),6);
        bufp->chgCData(oldp+30,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__r4_cnt_r),5);
        bufp->chgCData(oldp+31,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__r2_cnt_r),6);
        bufp->chgBit(oldp+32,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__was_radix2_r));
        bufp->chgBit(oldp+33,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_done_r));
        bufp->chgCData(oldp+34,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__blocks_max),6);
        bufp->chgCData(oldp+35,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__bfs_max),6);
        bufp->chgBit(oldp+36,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_is_radix2));
        bufp->chgBit(oldp+37,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__bf_last));
        bufp->chgBit(oldp+38,(((IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__block_cnt_r) 
                               == (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__blocks_max))));
        bufp->chgBit(oldp+39,(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_last));
    }
    bufp->chgBit(oldp+40,(vlSelf->tf_rom_addr_gen_tb__DOT__clk));
}

void Vtf_rom_addr_gen_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtf_rom_addr_gen_tb___024root__trace_cleanup\n"); );
    // Init
    Vtf_rom_addr_gen_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtf_rom_addr_gen_tb___024root*>(voidSelf);
    Vtf_rom_addr_gen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
