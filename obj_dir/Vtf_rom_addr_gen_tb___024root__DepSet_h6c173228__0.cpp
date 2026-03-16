// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtf_rom_addr_gen_tb.h for the primary calling header

#include "Vtf_rom_addr_gen_tb__pch.h"
#include "Vtf_rom_addr_gen_tb___024root.h"

VL_ATTR_COLD void Vtf_rom_addr_gen_tb___024root___eval_initial__TOP(Vtf_rom_addr_gen_tb___024root* vlSelf);
VlCoroutine Vtf_rom_addr_gen_tb___024root___eval_initial__TOP__Vtiming__0(Vtf_rom_addr_gen_tb___024root* vlSelf);
VlCoroutine Vtf_rom_addr_gen_tb___024root___eval_initial__TOP__Vtiming__1(Vtf_rom_addr_gen_tb___024root* vlSelf);
VlCoroutine Vtf_rom_addr_gen_tb___024root___eval_initial__TOP__Vtiming__2(Vtf_rom_addr_gen_tb___024root* vlSelf);

void Vtf_rom_addr_gen_tb___024root___eval_initial(Vtf_rom_addr_gen_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtf_rom_addr_gen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtf_rom_addr_gen_tb___024root___eval_initial\n"); );
    // Body
    Vtf_rom_addr_gen_tb___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtf_rom_addr_gen_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtf_rom_addr_gen_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtf_rom_addr_gen_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tf_rom_addr_gen_tb__DOT__clk__0 
        = vlSelf->tf_rom_addr_gen_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr_h1a9d9ec3__0 = (1U & (~ 
                                                  ((0U 
                                                    != (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__state_r)) 
                                                   | (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_done_r))));
}

VL_INLINE_OPT VlCoroutine Vtf_rom_addr_gen_tb___024root___eval_initial__TOP__Vtiming__1(Vtf_rom_addr_gen_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtf_rom_addr_gen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtf_rom_addr_gen_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0x3b9aca00ULL, 
                                       nullptr, "tb/tf_rom_addr_gen_tb.sv", 
                                       643);
    VL_WRITEF("ERROR: Simulation timeout!\n");
    VL_FINISH_MT("tb/tf_rom_addr_gen_tb.sv", 645, "");
}

VL_INLINE_OPT VlCoroutine Vtf_rom_addr_gen_tb___024root___eval_initial__TOP__Vtiming__2(Vtf_rom_addr_gen_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtf_rom_addr_gen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtf_rom_addr_gen_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "tb/tf_rom_addr_gen_tb.sv", 
                                           48);
        vlSelf->tf_rom_addr_gen_tb__DOT__clk = (1U 
                                                & (~ (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__clk)));
    }
}

extern const VlUnpacked<CData/*2:0*/, 2048> Vtf_rom_addr_gen_tb__ConstPool__TABLE_hbaad0fee_0;

VL_INLINE_OPT void Vtf_rom_addr_gen_tb___024root___act_comb__TOP__0(Vtf_rom_addr_gen_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtf_rom_addr_gen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtf_rom_addr_gen_tb___024root___act_comb__TOP__0\n"); );
    // Init
    SData/*10:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    if ((0xfU == (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__mode))) {
        vlSelf->tf_rom_addr_gen_tb__DOT__is_intt = 1U;
        vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__r2_data 
            = vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__OMEGA_INV_ROM
            [vlSelf->tf_rom_addr_gen_tb__DOT__r2_addr];
        vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__r4_data 
            = ((0x14U >= (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__r4_addr))
                ? vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__R4INTT_ROM
               [vlSelf->tf_rom_addr_gen_tb__DOT__r4_addr]
                : 0ULL);
    } else {
        vlSelf->tf_rom_addr_gen_tb__DOT__is_intt = 0U;
        vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__r2_data 
            = vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__OMEGA_ROM
            [vlSelf->tf_rom_addr_gen_tb__DOT__r2_addr];
        vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__r4_data 
            = ((0x14U >= (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__r4_addr))
                ? vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__R4NTT_ROM
               [vlSelf->tf_rom_addr_gen_tb__DOT__r4_addr]
                : 0ULL);
    }
    __Vtableidx2 = (((IData)(vlSelf->tf_rom_addr_gen_tb__DOT__pass_idx) 
                     << 9U) | (((IData)(vlSelf->tf_rom_addr_gen_tb__DOT__mode) 
                                << 5U) | (((IData)(vlSelf->tf_rom_addr_gen_tb__DOT__start) 
                                           << 4U) | 
                                          (((IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_last) 
                                            << 3U) 
                                           | (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__state_r)))));
    vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__state_next 
        = Vtf_rom_addr_gen_tb__ConstPool__TABLE_hbaad0fee_0
        [__Vtableidx2];
}

void Vtf_rom_addr_gen_tb___024root___eval_act(Vtf_rom_addr_gen_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtf_rom_addr_gen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtf_rom_addr_gen_tb___024root___eval_act\n"); );
    // Body
    if ((3ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtf_rom_addr_gen_tb___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

extern const VlUnpacked<CData/*1:0*/, 8> Vtf_rom_addr_gen_tb__ConstPool__TABLE_hf5baebff_0;
extern const VlUnpacked<CData/*5:0*/, 32> Vtf_rom_addr_gen_tb__ConstPool__TABLE_h2dc09744_0;
extern const VlUnpacked<CData/*5:0*/, 32> Vtf_rom_addr_gen_tb__ConstPool__TABLE_hcafc7da6_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtf_rom_addr_gen_tb__ConstPool__TABLE_hd5480cae_0;

VL_INLINE_OPT void Vtf_rom_addr_gen_tb___024root___nba_sequent__TOP__0(Vtf_rom_addr_gen_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtf_rom_addr_gen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtf_rom_addr_gen_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*2:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*0:0*/ __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__is_intt_r;
    __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__is_intt_r = 0;
    CData/*0:0*/ __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__is_cwm_r;
    __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__is_cwm_r = 0;
    CData/*5:0*/ __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__bf_cnt_r;
    __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__bf_cnt_r = 0;
    CData/*5:0*/ __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__block_cnt_r;
    __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__block_cnt_r = 0;
    CData/*4:0*/ __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__r4_cnt_r;
    __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__r4_cnt_r = 0;
    CData/*5:0*/ __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__r2_cnt_r;
    __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__r2_cnt_r = 0;
    // Body
    __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__r4_cnt_r 
        = vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__r4_cnt_r;
    __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__r2_cnt_r 
        = vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__r2_cnt_r;
    __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__bf_cnt_r 
        = vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__bf_cnt_r;
    __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__block_cnt_r 
        = vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__block_cnt_r;
    __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__is_intt_r 
        = vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__is_intt_r;
    __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__is_cwm_r 
        = vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__is_cwm_r;
    if (vlSelf->tf_rom_addr_gen_tb__DOT__rst) {
        vlSelf->tf_rom_addr_gen_tb__DOT__w3 = 0U;
        vlSelf->tf_rom_addr_gen_tb__DOT__w1 = 0U;
        vlSelf->tf_rom_addr_gen_tb__DOT__w2 = 0U;
        vlSelf->tf_rom_addr_gen_tb__DOT__w0 = 0U;
        vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__mode_r = 0xaU;
        __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__is_intt_r = 0U;
        __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__is_cwm_r = 0U;
        __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__bf_cnt_r = 0U;
        __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__block_cnt_r = 0U;
        __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__r4_cnt_r = 0U;
        __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__r2_cnt_r = 0U;
        vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__was_radix2_r = 0U;
        vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_done_r = 0U;
        vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__state_r = 0U;
    } else {
        vlSelf->tf_rom_addr_gen_tb__DOT__w3 = ((0xfU 
                                                == (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__mode))
                                                ? 0x640U
                                                : 0x6c1U);
        if (vlSelf->tf_rom_addr_gen_tb__DOT__is_radix2) {
            vlSelf->tf_rom_addr_gen_tb__DOT__w1 = (0xfffU 
                                                   & ((0xfU 
                                                       == (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__mode))
                                                       ? 0x681U
                                                       : 1U));
            vlSelf->tf_rom_addr_gen_tb__DOT__w2 = (0xfffU 
                                                   & (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__r2_data));
            vlSelf->tf_rom_addr_gen_tb__DOT__w0 = (0xfffU 
                                                   & (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__r2_data));
        } else {
            vlSelf->tf_rom_addr_gen_tb__DOT__w1 = (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__r4_data 
                                                              >> 0x18U)));
            vlSelf->tf_rom_addr_gen_tb__DOT__w2 = (0xfffU 
                                                   & (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__r4_data));
            vlSelf->tf_rom_addr_gen_tb__DOT__w0 = (0xfffU 
                                                   & (IData)(
                                                             (vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__r4_data 
                                                              >> 0xcU)));
        }
        if ((4U & (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__state_r))) {
            if ((2U & (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__state_r))) {
                __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__bf_cnt_r = 0U;
                __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__block_cnt_r = 0U;
                __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__r4_cnt_r = 0U;
                __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__r2_cnt_r = 0U;
            } else if ((1U & (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__state_r))) {
                __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__bf_cnt_r = 0U;
                __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__block_cnt_r = 0U;
                __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__r4_cnt_r = 0U;
                __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__r2_cnt_r = 0U;
            } else if (vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_last) {
                __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__bf_cnt_r = 0U;
                __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__block_cnt_r = 0U;
                vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__was_radix2_r 
                    = vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_is_radix2;
                vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_done_r = 1U;
            } else if (vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__bf_last) {
                __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__block_cnt_r 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__block_cnt_r)));
                __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__bf_cnt_r = 0U;
            } else {
                __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__bf_cnt_r 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__bf_cnt_r)));
                if (((0U == (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__bf_cnt_r)) 
                     & (0U != (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__block_cnt_r)))) {
                    if (vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_is_radix2) {
                        __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__r2_cnt_r 
                            = (0x3fU & ((IData)(1U) 
                                        + (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__r2_cnt_r)));
                    } else if ((1U & (~ (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__is_cwm_r)))) {
                        __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__r4_cnt_r 
                            = (0x1fU & ((IData)(1U) 
                                        + (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__r4_cnt_r)));
                    }
                }
            }
        } else if ((2U & (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__state_r))) {
            if (vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_last) {
                __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__bf_cnt_r = 0U;
                __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__block_cnt_r = 0U;
                vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__was_radix2_r 
                    = vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_is_radix2;
                vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_done_r = 1U;
            } else if (vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__bf_last) {
                __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__block_cnt_r 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__block_cnt_r)));
                __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__bf_cnt_r = 0U;
            } else {
                __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__bf_cnt_r 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__bf_cnt_r)));
                if (((0U == (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__bf_cnt_r)) 
                     & (0U != (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__block_cnt_r)))) {
                    if (vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_is_radix2) {
                        __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__r2_cnt_r 
                            = (0x3fU & ((IData)(1U) 
                                        + (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__r2_cnt_r)));
                    } else if ((1U & (~ (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__is_cwm_r)))) {
                        __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__r4_cnt_r 
                            = (0x1fU & ((IData)(1U) 
                                        + (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__r4_cnt_r)));
                    }
                }
            }
        } else if ((1U & (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__state_r))) {
            if (vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_last) {
                __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__bf_cnt_r = 0U;
                __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__block_cnt_r = 0U;
                vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__was_radix2_r 
                    = vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_is_radix2;
                vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_done_r = 1U;
            } else if (vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__bf_last) {
                __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__block_cnt_r 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__block_cnt_r)));
                __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__bf_cnt_r = 0U;
            } else {
                __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__bf_cnt_r 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__bf_cnt_r)));
                if (((0U == (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__bf_cnt_r)) 
                     & (0U != (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__block_cnt_r)))) {
                    if (vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_is_radix2) {
                        __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__r2_cnt_r 
                            = (0x3fU & ((IData)(1U) 
                                        + (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__r2_cnt_r)));
                    } else if ((1U & (~ (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__is_cwm_r)))) {
                        __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__r4_cnt_r 
                            = (0x1fU & ((IData)(1U) 
                                        + (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__r4_cnt_r)));
                    }
                }
            }
        } else {
            vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_done_r = 0U;
            if (vlSelf->tf_rom_addr_gen_tb__DOT__start) {
                if ((0U == (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__pass_idx))) {
                    __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__r4_cnt_r = 0U;
                } else if (((8U != (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__mode)) 
                            & (~ ((IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__is_intt_r) 
                                  & (1U == (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__pass_idx)))))) {
                    __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__r4_cnt_r 
                        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__r4_cnt_r)));
                }
                vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__mode_r 
                    = vlSelf->tf_rom_addr_gen_tb__DOT__mode;
                __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__is_cwm_r 
                    = (8U == (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__mode));
                __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__bf_cnt_r = 0U;
                __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__block_cnt_r = 0U;
                __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__r2_cnt_r = 0U;
                __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__is_intt_r 
                    = (0xfU == (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__mode));
            }
        }
        vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__state_r 
            = vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__state_next;
    }
    vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__r4_cnt_r 
        = __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__r4_cnt_r;
    vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__r2_cnt_r 
        = __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__r2_cnt_r;
    vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__bf_cnt_r 
        = __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__bf_cnt_r;
    vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__block_cnt_r 
        = __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__block_cnt_r;
    vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__is_intt_r 
        = __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__is_intt_r;
    vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__is_cwm_r 
        = __Vdly__tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__is_cwm_r;
    __Vtableidx3 = vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__state_r;
    vlSelf->tf_rom_addr_gen_tb__DOT__pass_num = Vtf_rom_addr_gen_tb__ConstPool__TABLE_hf5baebff_0
        [__Vtableidx3];
    __Vtableidx1 = (((IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__is_intt_r) 
                     << 4U) | (((IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__state_r) 
                                << 1U) | (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__is_cwm_r)));
    vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__blocks_max 
        = Vtf_rom_addr_gen_tb__ConstPool__TABLE_h2dc09744_0
        [__Vtableidx1];
    vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__bfs_max 
        = Vtf_rom_addr_gen_tb__ConstPool__TABLE_hcafc7da6_0
        [__Vtableidx1];
    vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_is_radix2 
        = Vtf_rom_addr_gen_tb__ConstPool__TABLE_hd5480cae_0
        [__Vtableidx1];
    vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__bf_last 
        = ((IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__bf_cnt_r) 
           == (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__bfs_max));
    vlSelf->tf_rom_addr_gen_tb__DOT__is_radix2 = ((IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_is_radix2) 
                                                  | ((0U 
                                                      == (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__state_r)) 
                                                     & (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__was_radix2_r)));
    if (vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__is_cwm_r) {
        vlSelf->tf_rom_addr_gen_tb__DOT__r4_addr = 0U;
        vlSelf->tf_rom_addr_gen_tb__DOT__r2_addr = vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__block_cnt_r;
    } else if (((IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_is_radix2) 
                | ((0U == (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__state_r)) 
                   & (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__was_radix2_r)))) {
        vlSelf->tf_rom_addr_gen_tb__DOT__r4_addr = 0U;
        vlSelf->tf_rom_addr_gen_tb__DOT__r2_addr = vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__r2_cnt_r;
    } else {
        vlSelf->tf_rom_addr_gen_tb__DOT__r4_addr = vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__r4_cnt_r;
        vlSelf->tf_rom_addr_gen_tb__DOT__r2_addr = 0U;
    }
    vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_last 
        = ((IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__bf_last) 
           & ((IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__block_cnt_r) 
              == (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__blocks_max)));
}

VL_INLINE_OPT void Vtf_rom_addr_gen_tb___024root___nba_comb__TOP__0(Vtf_rom_addr_gen_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtf_rom_addr_gen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtf_rom_addr_gen_tb___024root___nba_comb__TOP__0\n"); );
    // Init
    SData/*10:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    if ((0xfU == (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__mode))) {
        vlSelf->tf_rom_addr_gen_tb__DOT__is_intt = 1U;
        vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__r4_data 
            = ((0x14U >= (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__r4_addr))
                ? vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__R4INTT_ROM
               [vlSelf->tf_rom_addr_gen_tb__DOT__r4_addr]
                : 0ULL);
        vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__r2_data 
            = vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__OMEGA_INV_ROM
            [vlSelf->tf_rom_addr_gen_tb__DOT__r2_addr];
    } else {
        vlSelf->tf_rom_addr_gen_tb__DOT__is_intt = 0U;
        vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__r4_data 
            = ((0x14U >= (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__r4_addr))
                ? vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__R4NTT_ROM
               [vlSelf->tf_rom_addr_gen_tb__DOT__r4_addr]
                : 0ULL);
        vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__r2_data 
            = vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__OMEGA_ROM
            [vlSelf->tf_rom_addr_gen_tb__DOT__r2_addr];
    }
    __Vtableidx2 = (((IData)(vlSelf->tf_rom_addr_gen_tb__DOT__pass_idx) 
                     << 9U) | (((IData)(vlSelf->tf_rom_addr_gen_tb__DOT__mode) 
                                << 5U) | (((IData)(vlSelf->tf_rom_addr_gen_tb__DOT__start) 
                                           << 4U) | 
                                          (((IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_last) 
                                            << 3U) 
                                           | (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__state_r)))));
    vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__state_next 
        = Vtf_rom_addr_gen_tb__ConstPool__TABLE_hbaad0fee_0
        [__Vtableidx2];
}

void Vtf_rom_addr_gen_tb___024root___eval_nba(Vtf_rom_addr_gen_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtf_rom_addr_gen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtf_rom_addr_gen_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtf_rom_addr_gen_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtf_rom_addr_gen_tb___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
}

void Vtf_rom_addr_gen_tb___024root___timing_resume(Vtf_rom_addr_gen_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtf_rom_addr_gen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtf_rom_addr_gen_tb___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h9ecdf918__0.resume("@(posedge tf_rom_addr_gen_tb.clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h8aaad8d5__0.resume("@([changed] (~ ((3'h0 != tf_rom_addr_gen_tb.u_tf_addr_gen.state_r) | tf_rom_addr_gen_tb.u_tf_addr_gen.pass_done_r)))");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtf_rom_addr_gen_tb___024root___timing_commit(Vtf_rom_addr_gen_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtf_rom_addr_gen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtf_rom_addr_gen_tb___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h9ecdf918__0.commit("@(posedge tf_rom_addr_gen_tb.clk)");
    }
    if ((! (2ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h8aaad8d5__0.commit("@([changed] (~ ((3'h0 != tf_rom_addr_gen_tb.u_tf_addr_gen.state_r) | tf_rom_addr_gen_tb.u_tf_addr_gen.pass_done_r)))");
    }
}

void Vtf_rom_addr_gen_tb___024root___eval_triggers__act(Vtf_rom_addr_gen_tb___024root* vlSelf);

bool Vtf_rom_addr_gen_tb___024root___eval_phase__act(Vtf_rom_addr_gen_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtf_rom_addr_gen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtf_rom_addr_gen_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtf_rom_addr_gen_tb___024root___eval_triggers__act(vlSelf);
    Vtf_rom_addr_gen_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtf_rom_addr_gen_tb___024root___timing_resume(vlSelf);
        Vtf_rom_addr_gen_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtf_rom_addr_gen_tb___024root___eval_phase__nba(Vtf_rom_addr_gen_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtf_rom_addr_gen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtf_rom_addr_gen_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtf_rom_addr_gen_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtf_rom_addr_gen_tb___024root___dump_triggers__nba(Vtf_rom_addr_gen_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtf_rom_addr_gen_tb___024root___dump_triggers__act(Vtf_rom_addr_gen_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtf_rom_addr_gen_tb___024root___eval(Vtf_rom_addr_gen_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtf_rom_addr_gen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtf_rom_addr_gen_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtf_rom_addr_gen_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tf_rom_addr_gen_tb.sv", 17, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtf_rom_addr_gen_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tf_rom_addr_gen_tb.sv", 17, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtf_rom_addr_gen_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtf_rom_addr_gen_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtf_rom_addr_gen_tb___024root___eval_debug_assertions(Vtf_rom_addr_gen_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtf_rom_addr_gen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtf_rom_addr_gen_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
