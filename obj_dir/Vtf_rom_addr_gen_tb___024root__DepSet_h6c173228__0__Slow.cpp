// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtf_rom_addr_gen_tb.h for the primary calling header

#include "Vtf_rom_addr_gen_tb__pch.h"
#include "Vtf_rom_addr_gen_tb___024root.h"

VL_ATTR_COLD void Vtf_rom_addr_gen_tb___024root___eval_static__TOP(Vtf_rom_addr_gen_tb___024root* vlSelf);

VL_ATTR_COLD void Vtf_rom_addr_gen_tb___024root___eval_static(Vtf_rom_addr_gen_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtf_rom_addr_gen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtf_rom_addr_gen_tb___024root___eval_static\n"); );
    // Body
    Vtf_rom_addr_gen_tb___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtf_rom_addr_gen_tb___024root___eval_static__TOP(Vtf_rom_addr_gen_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtf_rom_addr_gen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtf_rom_addr_gen_tb___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->tf_rom_addr_gen_tb__DOT__errors = 0U;
    vlSelf->tf_rom_addr_gen_tb__DOT__total_tests = 0U;
}

VL_ATTR_COLD void Vtf_rom_addr_gen_tb___024root___eval_initial__TOP(Vtf_rom_addr_gen_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtf_rom_addr_gen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtf_rom_addr_gen_tb___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->tf_rom_addr_gen_tb__DOT__clk = 0U;
}

VL_ATTR_COLD void Vtf_rom_addr_gen_tb___024root___eval_final(Vtf_rom_addr_gen_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtf_rom_addr_gen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtf_rom_addr_gen_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtf_rom_addr_gen_tb___024root___dump_triggers__stl(Vtf_rom_addr_gen_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtf_rom_addr_gen_tb___024root___eval_phase__stl(Vtf_rom_addr_gen_tb___024root* vlSelf);

VL_ATTR_COLD void Vtf_rom_addr_gen_tb___024root___eval_settle(Vtf_rom_addr_gen_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtf_rom_addr_gen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtf_rom_addr_gen_tb___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtf_rom_addr_gen_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/tf_rom_addr_gen_tb.sv", 17, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtf_rom_addr_gen_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtf_rom_addr_gen_tb___024root___dump_triggers__stl(Vtf_rom_addr_gen_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtf_rom_addr_gen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtf_rom_addr_gen_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*1:0*/, 8> Vtf_rom_addr_gen_tb__ConstPool__TABLE_hf5baebff_0;
extern const VlUnpacked<CData/*5:0*/, 32> Vtf_rom_addr_gen_tb__ConstPool__TABLE_h2dc09744_0;
extern const VlUnpacked<CData/*5:0*/, 32> Vtf_rom_addr_gen_tb__ConstPool__TABLE_hcafc7da6_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtf_rom_addr_gen_tb__ConstPool__TABLE_hd5480cae_0;
extern const VlUnpacked<CData/*2:0*/, 2048> Vtf_rom_addr_gen_tb__ConstPool__TABLE_hbaad0fee_0;

VL_ATTR_COLD void Vtf_rom_addr_gen_tb___024root___stl_sequent__TOP__0(Vtf_rom_addr_gen_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtf_rom_addr_gen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtf_rom_addr_gen_tb___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    SData/*10:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*2:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    vlSelf->tf_rom_addr_gen_tb__DOT__is_intt = (0xfU 
                                                == (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__mode));
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
    if ((0xfU == (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__mode))) {
        vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__r4_data 
            = ((0x14U >= (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__r4_addr))
                ? vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__R4INTT_ROM
               [vlSelf->tf_rom_addr_gen_tb__DOT__r4_addr]
                : 0ULL);
        vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__r2_data 
            = vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__OMEGA_INV_ROM
            [vlSelf->tf_rom_addr_gen_tb__DOT__r2_addr];
    } else {
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

VL_ATTR_COLD void Vtf_rom_addr_gen_tb___024root___eval_stl(Vtf_rom_addr_gen_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtf_rom_addr_gen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtf_rom_addr_gen_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtf_rom_addr_gen_tb___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vtf_rom_addr_gen_tb___024root___eval_triggers__stl(Vtf_rom_addr_gen_tb___024root* vlSelf);

VL_ATTR_COLD bool Vtf_rom_addr_gen_tb___024root___eval_phase__stl(Vtf_rom_addr_gen_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtf_rom_addr_gen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtf_rom_addr_gen_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtf_rom_addr_gen_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtf_rom_addr_gen_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtf_rom_addr_gen_tb___024root___dump_triggers__act(Vtf_rom_addr_gen_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtf_rom_addr_gen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtf_rom_addr_gen_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tf_rom_addr_gen_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([changed] (~ ((3'h0 != tf_rom_addr_gen_tb.u_tf_addr_gen.state_r) | tf_rom_addr_gen_tb.u_tf_addr_gen.pass_done_r)))\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtf_rom_addr_gen_tb___024root___dump_triggers__nba(Vtf_rom_addr_gen_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtf_rom_addr_gen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtf_rom_addr_gen_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tf_rom_addr_gen_tb.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([changed] (~ ((3'h0 != tf_rom_addr_gen_tb.u_tf_addr_gen.state_r) | tf_rom_addr_gen_tb.u_tf_addr_gen.pass_done_r)))\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtf_rom_addr_gen_tb___024root___ctor_var_reset(Vtf_rom_addr_gen_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtf_rom_addr_gen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtf_rom_addr_gen_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tf_rom_addr_gen_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tf_rom_addr_gen_tb__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->tf_rom_addr_gen_tb__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->tf_rom_addr_gen_tb__DOT__mode = VL_RAND_RESET_I(4);
    vlSelf->tf_rom_addr_gen_tb__DOT__pass_idx = VL_RAND_RESET_I(2);
    vlSelf->tf_rom_addr_gen_tb__DOT__r4_addr = VL_RAND_RESET_I(5);
    vlSelf->tf_rom_addr_gen_tb__DOT__r2_addr = VL_RAND_RESET_I(6);
    vlSelf->tf_rom_addr_gen_tb__DOT__is_intt = VL_RAND_RESET_I(1);
    vlSelf->tf_rom_addr_gen_tb__DOT__is_radix2 = VL_RAND_RESET_I(1);
    vlSelf->tf_rom_addr_gen_tb__DOT__pass_num = VL_RAND_RESET_I(2);
    vlSelf->tf_rom_addr_gen_tb__DOT__w0 = VL_RAND_RESET_I(12);
    vlSelf->tf_rom_addr_gen_tb__DOT__w1 = VL_RAND_RESET_I(12);
    vlSelf->tf_rom_addr_gen_tb__DOT__w2 = VL_RAND_RESET_I(12);
    vlSelf->tf_rom_addr_gen_tb__DOT__w3 = VL_RAND_RESET_I(12);
    vlSelf->tf_rom_addr_gen_tb__DOT__errors = 0;
    vlSelf->tf_rom_addr_gen_tb__DOT__total_tests = 0;
    vlSelf->tf_rom_addr_gen_tb__DOT__cycle_count = 0;
    vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__state_r = VL_RAND_RESET_I(3);
    vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__state_next = VL_RAND_RESET_I(3);
    vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__mode_r = VL_RAND_RESET_I(4);
    vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__is_intt_r = VL_RAND_RESET_I(1);
    vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__is_cwm_r = VL_RAND_RESET_I(1);
    vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__bf_cnt_r = VL_RAND_RESET_I(6);
    vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__block_cnt_r = VL_RAND_RESET_I(6);
    vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__r4_cnt_r = VL_RAND_RESET_I(5);
    vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__r2_cnt_r = VL_RAND_RESET_I(6);
    vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__was_radix2_r = VL_RAND_RESET_I(1);
    vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_done_r = VL_RAND_RESET_I(1);
    vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__blocks_max = VL_RAND_RESET_I(6);
    vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__bfs_max = VL_RAND_RESET_I(6);
    vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_is_radix2 = VL_RAND_RESET_I(1);
    vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__bf_last = VL_RAND_RESET_I(1);
    vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_last = VL_RAND_RESET_I(1);
    vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__r4_data = VL_RAND_RESET_Q(36);
    vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__r2_data = VL_RAND_RESET_I(12);
    vlSelf->__Vtrigprevexpr___TOP__tf_rom_addr_gen_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h1a9d9ec3__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
