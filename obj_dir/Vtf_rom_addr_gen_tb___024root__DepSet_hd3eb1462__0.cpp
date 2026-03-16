// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtf_rom_addr_gen_tb.h for the primary calling header

#include "Vtf_rom_addr_gen_tb__pch.h"
#include "Vtf_rom_addr_gen_tb__Syms.h"
#include "Vtf_rom_addr_gen_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vtf_rom_addr_gen_tb___024root___eval_initial__TOP__Vtiming__0(Vtf_rom_addr_gen_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtf_rom_addr_gen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtf_rom_addr_gen_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    IData/*31:0*/ tf_rom_addr_gen_tb__DOT____Vrepeat0;
    tf_rom_addr_gen_tb__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__unnamedblk1__DOT__b;
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__unnamedblk1__DOT__b = 0;
    IData/*31:0*/ __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__unnamedblk1__DOT__unnamedblk2__DOT__j;
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__unnamedblk1__DOT__unnamedblk2__DOT__j = 0;
    IData/*31:0*/ __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__unnamedblk3__DOT__b;
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__unnamedblk3__DOT__b = 0;
    IData/*31:0*/ __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__unnamedblk3__DOT__unnamedblk4__DOT__j;
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__unnamedblk3__DOT__unnamedblk4__DOT__j = 0;
    IData/*31:0*/ __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__unnamedblk5__DOT__b;
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__unnamedblk5__DOT__b = 0;
    IData/*31:0*/ __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__unnamedblk5__DOT__unnamedblk6__DOT__j;
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__unnamedblk5__DOT__unnamedblk6__DOT__j = 0;
    IData/*31:0*/ __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__unnamedblk7__DOT__b;
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__unnamedblk7__DOT__b = 0;
    IData/*31:0*/ __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__unnamedblk7__DOT__unnamedblk8__DOT__j;
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__unnamedblk7__DOT__unnamedblk8__DOT__j = 0;
    IData/*31:0*/ __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__expected_r4;
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__expected_r4 = 0;
    IData/*31:0*/ __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__expected_r2;
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__expected_r2 = 0;
    IData/*31:0*/ __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__num_blocks;
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__num_blocks = 0;
    IData/*31:0*/ __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__bfs_per_block;
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__bfs_per_block = 0;
    IData/*31:0*/ __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__ntt_errors_start;
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__ntt_errors_start = 0;
    IData/*31:0*/ __Vtask_tf_rom_addr_gen_tb__DOT__wait_cycles__1__n;
    __Vtask_tf_rom_addr_gen_tb__DOT__wait_cycles__1__n = 0;
    IData/*31:0*/ __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__unnamedblk9__DOT__b;
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__unnamedblk9__DOT__b = 0;
    IData/*31:0*/ __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__unnamedblk9__DOT__unnamedblk10__DOT__j;
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__unnamedblk9__DOT__unnamedblk10__DOT__j = 0;
    IData/*31:0*/ __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__unnamedblk11__DOT__b;
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__unnamedblk11__DOT__b = 0;
    IData/*31:0*/ __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__unnamedblk11__DOT__unnamedblk12__DOT__j;
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__unnamedblk11__DOT__unnamedblk12__DOT__j = 0;
    IData/*31:0*/ __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__unnamedblk13__DOT__b;
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__unnamedblk13__DOT__b = 0;
    IData/*31:0*/ __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__unnamedblk13__DOT__unnamedblk14__DOT__j;
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__unnamedblk13__DOT__unnamedblk14__DOT__j = 0;
    IData/*31:0*/ __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__unnamedblk15__DOT__b;
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__unnamedblk15__DOT__b = 0;
    IData/*31:0*/ __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__unnamedblk15__DOT__unnamedblk16__DOT__j;
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__unnamedblk15__DOT__unnamedblk16__DOT__j = 0;
    IData/*31:0*/ __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__expected_r4;
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__expected_r4 = 0;
    IData/*31:0*/ __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__expected_r2;
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__expected_r2 = 0;
    IData/*31:0*/ __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__num_blocks;
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__num_blocks = 0;
    IData/*31:0*/ __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__bfs_per_block;
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__bfs_per_block = 0;
    IData/*31:0*/ __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__intt_errors_start;
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__intt_errors_start = 0;
    IData/*31:0*/ __Vtask_tf_rom_addr_gen_tb__DOT__wait_cycles__3__n;
    __Vtask_tf_rom_addr_gen_tb__DOT__wait_cycles__3__n = 0;
    IData/*31:0*/ __Vtask_tf_rom_addr_gen_tb__DOT__verify_rom_values__4__rom_errors_start;
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_rom_values__4__rom_errors_start = 0;
    IData/*31:0*/ __Vtask_tf_rom_addr_gen_tb__DOT__wait_cycles__5__n;
    __Vtask_tf_rom_addr_gen_tb__DOT__wait_cycles__5__n = 0;
    IData/*31:0*/ __Vtask_tf_rom_addr_gen_tb__DOT__verify_cycle_counts__6__ntt_cycles;
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_cycle_counts__6__ntt_cycles = 0;
    IData/*31:0*/ __Vtask_tf_rom_addr_gen_tb__DOT__verify_cycle_counts__6__intt_cycles;
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_cycle_counts__6__intt_cycles = 0;
    IData/*31:0*/ __Vtask_tf_rom_addr_gen_tb__DOT__wait_cycles__7__n;
    __Vtask_tf_rom_addr_gen_tb__DOT__wait_cycles__7__n = 0;
    // Body
    VL_WRITEF("\n==========================================================\n Twiddle Factor ROM + Address Generator Testbench\n Architecture: 4-ROM (R4NTT, OMEGA, R4INTT, OMEGA_INV)\n Addressing: Sequential t++ counter\n==========================================================\n\n");
    vlSelf->tf_rom_addr_gen_tb__DOT__rst = 1U;
    vlSelf->tf_rom_addr_gen_tb__DOT__start = 0U;
    vlSelf->tf_rom_addr_gen_tb__DOT__mode = 0xaU;
    vlSelf->tf_rom_addr_gen_tb__DOT__pass_idx = 0U;
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       612);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       612);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       612);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       612);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       612);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tf_rom_addr_gen_tb__DOT__rst = 0U;
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       614);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       614);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__ntt_errors_start 
        = vlSelf->tf_rom_addr_gen_tb__DOT__errors;
    VL_WRITEF("===================================================\n  VERIFYING NTT TWIDDLE FACTOR GENERATION\n===================================================\n");
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       121);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tf_rom_addr_gen_tb__DOT__mode = 0xaU;
    vlSelf->tf_rom_addr_gen_tb__DOT__pass_idx = 0U;
    vlSelf->tf_rom_addr_gen_tb__DOT__start = 1U;
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       125);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tf_rom_addr_gen_tb__DOT__start = 0U;
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__expected_r4 = 0U;
    VL_WRITEF("\n--- NTT Pass 1 (Radix-4, Stages 1&2) ---\n");
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__num_blocks = 1U;
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__bfs_per_block = 0x40U;
    vlSelf->tf_rom_addr_gen_tb__DOT__cycle_count = 0U;
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__unnamedblk1__DOT__b = 0U;
    while (VL_LTS_III(32, __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__unnamedblk1__DOT__b, __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__num_blocks)) {
        __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__unnamedblk1__DOT__unnamedblk2__DOT__j = 0U;
        while (VL_LTS_III(32, __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__unnamedblk1__DOT__unnamedblk2__DOT__j, __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__bfs_per_block)) {
            co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                               "tb/tf_rom_addr_gen_tb.sv", 
                                                               138);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->tf_rom_addr_gen_tb__DOT__total_tests 
                = ((IData)(1U) + vlSelf->tf_rom_addr_gen_tb__DOT__total_tests);
            vlSelf->tf_rom_addr_gen_tb__DOT__cycle_count 
                = ((IData)(1U) + vlSelf->tf_rom_addr_gen_tb__DOT__cycle_count);
            if (VL_UNLIKELY(((IData)(vlSelf->tf_rom_addr_gen_tb__DOT__r4_addr) 
                             != (0x1fU & __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__expected_r4)))) {
                VL_WRITEF("[%0t] %%Error: tf_rom_addr_gen_tb.sv:144: Assertion failed in %Ntf_rom_addr_gen_tb.verify_ntt.unnamedblk1.unnamedblk2: NTT P1 B%0d BF%0d: r4_addr=%0#, expected=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__unnamedblk1__DOT__b,
                          32,__Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__unnamedblk1__DOT__unnamedblk2__DOT__j,
                          5,(IData)(vlSelf->tf_rom_addr_gen_tb__DOT__r4_addr),
                          32,__Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__expected_r4);
                VL_STOP_MT("tb/tf_rom_addr_gen_tb.sv", 144, "");
                vlSelf->tf_rom_addr_gen_tb__DOT__errors 
                    = ((IData)(1U) + vlSelf->tf_rom_addr_gen_tb__DOT__errors);
            }
            if (VL_UNLIKELY(vlSelf->tf_rom_addr_gen_tb__DOT__is_radix2)) {
                VL_WRITEF("[%0t] %%Error: tf_rom_addr_gen_tb.sv:151: Assertion failed in %Ntf_rom_addr_gen_tb.verify_ntt.unnamedblk1.unnamedblk2: NTT P1: is_radix2 should be 0\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("tb/tf_rom_addr_gen_tb.sv", 151, "");
                vlSelf->tf_rom_addr_gen_tb__DOT__errors 
                    = ((IData)(1U) + vlSelf->tf_rom_addr_gen_tb__DOT__errors);
            }
            if (VL_UNLIKELY((0U != (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__pass_num)))) {
                VL_WRITEF("[%0t] %%Error: tf_rom_addr_gen_tb.sv:157: Assertion failed in %Ntf_rom_addr_gen_tb.verify_ntt.unnamedblk1.unnamedblk2: NTT P1: pass_num=%0#, expected=0\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),2,(IData)(vlSelf->tf_rom_addr_gen_tb__DOT__pass_num));
                VL_STOP_MT("tb/tf_rom_addr_gen_tb.sv", 157, "");
                vlSelf->tf_rom_addr_gen_tb__DOT__errors 
                    = ((IData)(1U) + vlSelf->tf_rom_addr_gen_tb__DOT__errors);
            }
            __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__unnamedblk1__DOT__unnamedblk2__DOT__j 
                = ((IData)(1U) + __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__unnamedblk1__DOT__unnamedblk2__DOT__j);
        }
        __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__expected_r4 
            = ((IData)(1U) + __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__expected_r4);
        __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__unnamedblk1__DOT__b 
            = ((IData)(1U) + __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__unnamedblk1__DOT__b);
    }
    VL_WRITEF("  Pass 1: Verified %0d cycles, r4 counter ended at %0d\n",
              32,vlSelf->tf_rom_addr_gen_tb__DOT__cycle_count,
              32,__Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__expected_r4);
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       166);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tf_rom_addr_gen_tb__DOT__pass_idx = 1U;
    vlSelf->tf_rom_addr_gen_tb__DOT__start = 1U;
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       169);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tf_rom_addr_gen_tb__DOT__start = 0U;
    VL_WRITEF("\n--- NTT Pass 2 (Radix-4, Stages 3&4) ---\n");
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__num_blocks = 4U;
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__bfs_per_block = 0x10U;
    vlSelf->tf_rom_addr_gen_tb__DOT__cycle_count = 0U;
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__unnamedblk3__DOT__b = 0U;
    while (VL_LTS_III(32, __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__unnamedblk3__DOT__b, __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__num_blocks)) {
        __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__unnamedblk3__DOT__unnamedblk4__DOT__j = 0U;
        while (VL_LTS_III(32, __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__unnamedblk3__DOT__unnamedblk4__DOT__j, __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__bfs_per_block)) {
            co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                               "tb/tf_rom_addr_gen_tb.sv", 
                                                               180);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->tf_rom_addr_gen_tb__DOT__total_tests 
                = ((IData)(1U) + vlSelf->tf_rom_addr_gen_tb__DOT__total_tests);
            vlSelf->tf_rom_addr_gen_tb__DOT__cycle_count 
                = ((IData)(1U) + vlSelf->tf_rom_addr_gen_tb__DOT__cycle_count);
            if (VL_UNLIKELY(((IData)(vlSelf->tf_rom_addr_gen_tb__DOT__r4_addr) 
                             != (0x1fU & __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__expected_r4)))) {
                VL_WRITEF("[%0t] %%Error: tf_rom_addr_gen_tb.sv:185: Assertion failed in %Ntf_rom_addr_gen_tb.verify_ntt.unnamedblk3.unnamedblk4: NTT P2 B%0d BF%0d: r4_addr=%0#, expected=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__unnamedblk3__DOT__b,
                          32,__Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__unnamedblk3__DOT__unnamedblk4__DOT__j,
                          5,(IData)(vlSelf->tf_rom_addr_gen_tb__DOT__r4_addr),
                          32,__Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__expected_r4);
                VL_STOP_MT("tb/tf_rom_addr_gen_tb.sv", 185, "");
                vlSelf->tf_rom_addr_gen_tb__DOT__errors 
                    = ((IData)(1U) + vlSelf->tf_rom_addr_gen_tb__DOT__errors);
            }
            __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__unnamedblk3__DOT__unnamedblk4__DOT__j 
                = ((IData)(1U) + __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__unnamedblk3__DOT__unnamedblk4__DOT__j);
        }
        __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__expected_r4 
            = ((IData)(1U) + __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__expected_r4);
        __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__unnamedblk3__DOT__b 
            = ((IData)(1U) + __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__unnamedblk3__DOT__b);
    }
    VL_WRITEF("  Pass 2: Verified %0d cycles, r4 counter ended at %0d\n",
              32,vlSelf->tf_rom_addr_gen_tb__DOT__cycle_count,
              32,__Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__expected_r4);
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       195);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tf_rom_addr_gen_tb__DOT__pass_idx = 2U;
    vlSelf->tf_rom_addr_gen_tb__DOT__start = 1U;
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       198);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tf_rom_addr_gen_tb__DOT__start = 0U;
    VL_WRITEF("\n--- NTT Pass 3 (Radix-4, Stages 5&6) ---\n");
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__num_blocks = 0x10U;
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__bfs_per_block = 4U;
    vlSelf->tf_rom_addr_gen_tb__DOT__cycle_count = 0U;
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__unnamedblk5__DOT__b = 0U;
    while (VL_LTS_III(32, __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__unnamedblk5__DOT__b, __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__num_blocks)) {
        __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__unnamedblk5__DOT__unnamedblk6__DOT__j = 0U;
        while (VL_LTS_III(32, __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__unnamedblk5__DOT__unnamedblk6__DOT__j, __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__bfs_per_block)) {
            co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                               "tb/tf_rom_addr_gen_tb.sv", 
                                                               209);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->tf_rom_addr_gen_tb__DOT__total_tests 
                = ((IData)(1U) + vlSelf->tf_rom_addr_gen_tb__DOT__total_tests);
            vlSelf->tf_rom_addr_gen_tb__DOT__cycle_count 
                = ((IData)(1U) + vlSelf->tf_rom_addr_gen_tb__DOT__cycle_count);
            if (VL_UNLIKELY(((IData)(vlSelf->tf_rom_addr_gen_tb__DOT__r4_addr) 
                             != (0x1fU & __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__expected_r4)))) {
                VL_WRITEF("[%0t] %%Error: tf_rom_addr_gen_tb.sv:214: Assertion failed in %Ntf_rom_addr_gen_tb.verify_ntt.unnamedblk5.unnamedblk6: NTT P3 B%0d BF%0d: r4_addr=%0#, expected=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__unnamedblk5__DOT__b,
                          32,__Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__unnamedblk5__DOT__unnamedblk6__DOT__j,
                          5,(IData)(vlSelf->tf_rom_addr_gen_tb__DOT__r4_addr),
                          32,__Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__expected_r4);
                VL_STOP_MT("tb/tf_rom_addr_gen_tb.sv", 214, "");
                vlSelf->tf_rom_addr_gen_tb__DOT__errors 
                    = ((IData)(1U) + vlSelf->tf_rom_addr_gen_tb__DOT__errors);
            }
            __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__unnamedblk5__DOT__unnamedblk6__DOT__j 
                = ((IData)(1U) + __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__unnamedblk5__DOT__unnamedblk6__DOT__j);
        }
        __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__expected_r4 
            = ((IData)(1U) + __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__expected_r4);
        __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__unnamedblk5__DOT__b 
            = ((IData)(1U) + __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__unnamedblk5__DOT__b);
    }
    VL_WRITEF("  Pass 3: Verified %0d cycles, r4 counter ended at %0d\n",
              32,vlSelf->tf_rom_addr_gen_tb__DOT__cycle_count,
              32,__Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__expected_r4);
    if (VL_UNLIKELY((0x15U != __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__expected_r4))) {
        VL_WRITEF("[%0t] %%Error: tf_rom_addr_gen_tb.sv:225: Assertion failed in %Ntf_rom_addr_gen_tb.verify_ntt: NTT: r4 counter should reach 21, got %0d\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,__Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__expected_r4);
        VL_STOP_MT("tb/tf_rom_addr_gen_tb.sv", 225, "");
        vlSelf->tf_rom_addr_gen_tb__DOT__errors = ((IData)(1U) 
                                                   + vlSelf->tf_rom_addr_gen_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       230);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tf_rom_addr_gen_tb__DOT__pass_idx = 3U;
    vlSelf->tf_rom_addr_gen_tb__DOT__start = 1U;
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       233);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tf_rom_addr_gen_tb__DOT__start = 0U;
    VL_WRITEF("\n--- NTT Pass 4 (Radix-2, Stage 7) ---\n");
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__num_blocks = 0x40U;
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__bfs_per_block = 2U;
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__expected_r2 = 0U;
    vlSelf->tf_rom_addr_gen_tb__DOT__cycle_count = 0U;
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__unnamedblk7__DOT__b = 0U;
    while (VL_LTS_III(32, __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__unnamedblk7__DOT__b, __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__num_blocks)) {
        __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__unnamedblk7__DOT__unnamedblk8__DOT__j = 0U;
        while (VL_LTS_III(32, __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__unnamedblk7__DOT__unnamedblk8__DOT__j, __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__bfs_per_block)) {
            co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                               "tb/tf_rom_addr_gen_tb.sv", 
                                                               245);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->tf_rom_addr_gen_tb__DOT__total_tests 
                = ((IData)(1U) + vlSelf->tf_rom_addr_gen_tb__DOT__total_tests);
            vlSelf->tf_rom_addr_gen_tb__DOT__cycle_count 
                = ((IData)(1U) + vlSelf->tf_rom_addr_gen_tb__DOT__cycle_count);
            if (VL_UNLIKELY(((IData)(vlSelf->tf_rom_addr_gen_tb__DOT__r2_addr) 
                             != (0x3fU & __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__expected_r2)))) {
                VL_WRITEF("[%0t] %%Error: tf_rom_addr_gen_tb.sv:250: Assertion failed in %Ntf_rom_addr_gen_tb.verify_ntt.unnamedblk7.unnamedblk8: NTT P4 B%0d BF%0d: r2_addr=%0#, expected=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__unnamedblk7__DOT__b,
                          32,__Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__unnamedblk7__DOT__unnamedblk8__DOT__j,
                          6,(IData)(vlSelf->tf_rom_addr_gen_tb__DOT__r2_addr),
                          32,__Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__expected_r2);
                VL_STOP_MT("tb/tf_rom_addr_gen_tb.sv", 250, "");
                vlSelf->tf_rom_addr_gen_tb__DOT__errors 
                    = ((IData)(1U) + vlSelf->tf_rom_addr_gen_tb__DOT__errors);
            }
            if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__is_radix2))))) {
                VL_WRITEF("[%0t] %%Error: tf_rom_addr_gen_tb.sv:256: Assertion failed in %Ntf_rom_addr_gen_tb.verify_ntt.unnamedblk7.unnamedblk8: NTT P4: is_radix2 should be 1\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("tb/tf_rom_addr_gen_tb.sv", 256, "");
                vlSelf->tf_rom_addr_gen_tb__DOT__errors 
                    = ((IData)(1U) + vlSelf->tf_rom_addr_gen_tb__DOT__errors);
            }
            __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__unnamedblk7__DOT__unnamedblk8__DOT__j 
                = ((IData)(1U) + __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__unnamedblk7__DOT__unnamedblk8__DOT__j);
        }
        __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__expected_r2 
            = ((IData)(1U) + __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__expected_r2);
        __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__unnamedblk7__DOT__b 
            = ((IData)(1U) + __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__unnamedblk7__DOT__b);
    }
    VL_WRITEF("  Pass 4: Verified %0d cycles\n",32,
              vlSelf->tf_rom_addr_gen_tb__DOT__cycle_count);
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       265);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((0U != (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__state_r)) 
                     | (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_done_r)))) {
        VL_WRITEF("[%0t] %%Error: tf_rom_addr_gen_tb.sv:267: Assertion failed in %Ntf_rom_addr_gen_tb.verify_ntt: NTT: Address generator still busy after all passes!\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb/tf_rom_addr_gen_tb.sv", 267, "");
        vlSelf->tf_rom_addr_gen_tb__DOT__errors = ((IData)(1U) 
                                                   + vlSelf->tf_rom_addr_gen_tb__DOT__errors);
    }
    VL_WRITEF("\n  NTT VERIFICATION COMPLETE: %0d errors in %0d tests\n",
              32,(vlSelf->tf_rom_addr_gen_tb__DOT__errors 
                  - __Vtask_tf_rom_addr_gen_tb__DOT__verify_ntt__0__ntt_errors_start),
              32,vlSelf->tf_rom_addr_gen_tb__DOT__total_tests);
    __Vtask_tf_rom_addr_gen_tb__DOT__wait_cycles__1__n = 5U;
    tf_rom_addr_gen_tb__DOT____Vrepeat0 = __Vtask_tf_rom_addr_gen_tb__DOT__wait_cycles__1__n;
    while (VL_LTS_III(32, 0U, tf_rom_addr_gen_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                           "tb/tf_rom_addr_gen_tb.sv", 
                                                           103);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        tf_rom_addr_gen_tb__DOT____Vrepeat0 = (tf_rom_addr_gen_tb__DOT____Vrepeat0 
                                               - (IData)(1U));
    }
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__intt_errors_start 
        = vlSelf->tf_rom_addr_gen_tb__DOT__errors;
    VL_WRITEF("\n===================================================\n  VERIFYING INTT TWIDDLE FACTOR GENERATION\n===================================================\n");
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       290);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tf_rom_addr_gen_tb__DOT__mode = 0xfU;
    vlSelf->tf_rom_addr_gen_tb__DOT__pass_idx = 0U;
    vlSelf->tf_rom_addr_gen_tb__DOT__start = 1U;
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       294);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tf_rom_addr_gen_tb__DOT__start = 0U;
    VL_WRITEF("\n--- INTT Pass 1 (Radix-2, Stage 1) ---\n");
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__num_blocks = 0x40U;
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__bfs_per_block = 2U;
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__expected_r2 = 0U;
    vlSelf->tf_rom_addr_gen_tb__DOT__cycle_count = 0U;
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__unnamedblk9__DOT__b = 0U;
    while (VL_LTS_III(32, __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__unnamedblk9__DOT__b, __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__num_blocks)) {
        __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__unnamedblk9__DOT__unnamedblk10__DOT__j = 0U;
        while (VL_LTS_III(32, __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__unnamedblk9__DOT__unnamedblk10__DOT__j, __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__bfs_per_block)) {
            co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                               "tb/tf_rom_addr_gen_tb.sv", 
                                                               306);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->tf_rom_addr_gen_tb__DOT__total_tests 
                = ((IData)(1U) + vlSelf->tf_rom_addr_gen_tb__DOT__total_tests);
            vlSelf->tf_rom_addr_gen_tb__DOT__cycle_count 
                = ((IData)(1U) + vlSelf->tf_rom_addr_gen_tb__DOT__cycle_count);
            if (VL_UNLIKELY(((IData)(vlSelf->tf_rom_addr_gen_tb__DOT__r2_addr) 
                             != (0x3fU & __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__expected_r2)))) {
                VL_WRITEF("[%0t] %%Error: tf_rom_addr_gen_tb.sv:311: Assertion failed in %Ntf_rom_addr_gen_tb.verify_intt.unnamedblk9.unnamedblk10: INTT P1 B%0d BF%0d: r2_addr=%0#, expected=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__unnamedblk9__DOT__b,
                          32,__Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__unnamedblk9__DOT__unnamedblk10__DOT__j,
                          6,(IData)(vlSelf->tf_rom_addr_gen_tb__DOT__r2_addr),
                          32,__Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__expected_r2);
                VL_STOP_MT("tb/tf_rom_addr_gen_tb.sv", 311, "");
                vlSelf->tf_rom_addr_gen_tb__DOT__errors 
                    = ((IData)(1U) + vlSelf->tf_rom_addr_gen_tb__DOT__errors);
            }
            if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__is_radix2))))) {
                VL_WRITEF("[%0t] %%Error: tf_rom_addr_gen_tb.sv:317: Assertion failed in %Ntf_rom_addr_gen_tb.verify_intt.unnamedblk9.unnamedblk10: INTT P1: is_radix2 should be 1\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("tb/tf_rom_addr_gen_tb.sv", 317, "");
                vlSelf->tf_rom_addr_gen_tb__DOT__errors 
                    = ((IData)(1U) + vlSelf->tf_rom_addr_gen_tb__DOT__errors);
            }
            if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__is_intt))))) {
                VL_WRITEF("[%0t] %%Error: tf_rom_addr_gen_tb.sv:322: Assertion failed in %Ntf_rom_addr_gen_tb.verify_intt.unnamedblk9.unnamedblk10: INTT P1: is_intt should be 1\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("tb/tf_rom_addr_gen_tb.sv", 322, "");
                vlSelf->tf_rom_addr_gen_tb__DOT__errors 
                    = ((IData)(1U) + vlSelf->tf_rom_addr_gen_tb__DOT__errors);
            }
            __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__unnamedblk9__DOT__unnamedblk10__DOT__j 
                = ((IData)(1U) + __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__unnamedblk9__DOT__unnamedblk10__DOT__j);
        }
        __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__expected_r2 
            = ((IData)(1U) + __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__expected_r2);
        __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__unnamedblk9__DOT__b 
            = ((IData)(1U) + __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__unnamedblk9__DOT__b);
    }
    VL_WRITEF("  Pass 1: Verified %0d cycles\n",32,
              vlSelf->tf_rom_addr_gen_tb__DOT__cycle_count);
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       331);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tf_rom_addr_gen_tb__DOT__pass_idx = 1U;
    vlSelf->tf_rom_addr_gen_tb__DOT__start = 1U;
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       334);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tf_rom_addr_gen_tb__DOT__start = 0U;
    VL_WRITEF("\n--- INTT Pass 2 (Radix-4, Stages 2&3) ---\n");
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__num_blocks = 0x10U;
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__bfs_per_block = 4U;
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__expected_r4 = 0U;
    vlSelf->tf_rom_addr_gen_tb__DOT__cycle_count = 0U;
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__unnamedblk11__DOT__b = 0U;
    while (VL_LTS_III(32, __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__unnamedblk11__DOT__b, __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__num_blocks)) {
        __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__unnamedblk11__DOT__unnamedblk12__DOT__j = 0U;
        while (VL_LTS_III(32, __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__unnamedblk11__DOT__unnamedblk12__DOT__j, __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__bfs_per_block)) {
            co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                               "tb/tf_rom_addr_gen_tb.sv", 
                                                               346);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->tf_rom_addr_gen_tb__DOT__total_tests 
                = ((IData)(1U) + vlSelf->tf_rom_addr_gen_tb__DOT__total_tests);
            vlSelf->tf_rom_addr_gen_tb__DOT__cycle_count 
                = ((IData)(1U) + vlSelf->tf_rom_addr_gen_tb__DOT__cycle_count);
            if (VL_UNLIKELY(((IData)(vlSelf->tf_rom_addr_gen_tb__DOT__r4_addr) 
                             != (0x1fU & __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__expected_r4)))) {
                VL_WRITEF("[%0t] %%Error: tf_rom_addr_gen_tb.sv:351: Assertion failed in %Ntf_rom_addr_gen_tb.verify_intt.unnamedblk11.unnamedblk12: INTT P2 B%0d BF%0d: r4_addr=%0#, expected=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__unnamedblk11__DOT__b,
                          32,__Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__unnamedblk11__DOT__unnamedblk12__DOT__j,
                          5,(IData)(vlSelf->tf_rom_addr_gen_tb__DOT__r4_addr),
                          32,__Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__expected_r4);
                VL_STOP_MT("tb/tf_rom_addr_gen_tb.sv", 351, "");
                vlSelf->tf_rom_addr_gen_tb__DOT__errors 
                    = ((IData)(1U) + vlSelf->tf_rom_addr_gen_tb__DOT__errors);
            }
            if (VL_UNLIKELY(vlSelf->tf_rom_addr_gen_tb__DOT__is_radix2)) {
                VL_WRITEF("[%0t] %%Error: tf_rom_addr_gen_tb.sv:357: Assertion failed in %Ntf_rom_addr_gen_tb.verify_intt.unnamedblk11.unnamedblk12: INTT P2: is_radix2 should be 0\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name());
                VL_STOP_MT("tb/tf_rom_addr_gen_tb.sv", 357, "");
                vlSelf->tf_rom_addr_gen_tb__DOT__errors 
                    = ((IData)(1U) + vlSelf->tf_rom_addr_gen_tb__DOT__errors);
            }
            __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__unnamedblk11__DOT__unnamedblk12__DOT__j 
                = ((IData)(1U) + __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__unnamedblk11__DOT__unnamedblk12__DOT__j);
        }
        __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__expected_r4 
            = ((IData)(1U) + __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__expected_r4);
        __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__unnamedblk11__DOT__b 
            = ((IData)(1U) + __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__unnamedblk11__DOT__b);
    }
    VL_WRITEF("  Pass 2: Verified %0d cycles, r4 counter at %0d\n",
              32,vlSelf->tf_rom_addr_gen_tb__DOT__cycle_count,
              32,__Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__expected_r4);
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       366);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tf_rom_addr_gen_tb__DOT__pass_idx = 2U;
    vlSelf->tf_rom_addr_gen_tb__DOT__start = 1U;
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       369);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tf_rom_addr_gen_tb__DOT__start = 0U;
    VL_WRITEF("\n--- INTT Pass 3 (Radix-4, Stages 4&5) ---\n");
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__num_blocks = 4U;
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__bfs_per_block = 0x10U;
    vlSelf->tf_rom_addr_gen_tb__DOT__cycle_count = 0U;
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__unnamedblk13__DOT__b = 0U;
    while (VL_LTS_III(32, __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__unnamedblk13__DOT__b, __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__num_blocks)) {
        __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__unnamedblk13__DOT__unnamedblk14__DOT__j = 0U;
        while (VL_LTS_III(32, __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__unnamedblk13__DOT__unnamedblk14__DOT__j, __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__bfs_per_block)) {
            co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                               "tb/tf_rom_addr_gen_tb.sv", 
                                                               380);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->tf_rom_addr_gen_tb__DOT__total_tests 
                = ((IData)(1U) + vlSelf->tf_rom_addr_gen_tb__DOT__total_tests);
            vlSelf->tf_rom_addr_gen_tb__DOT__cycle_count 
                = ((IData)(1U) + vlSelf->tf_rom_addr_gen_tb__DOT__cycle_count);
            if (VL_UNLIKELY(((IData)(vlSelf->tf_rom_addr_gen_tb__DOT__r4_addr) 
                             != (0x1fU & __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__expected_r4)))) {
                VL_WRITEF("[%0t] %%Error: tf_rom_addr_gen_tb.sv:385: Assertion failed in %Ntf_rom_addr_gen_tb.verify_intt.unnamedblk13.unnamedblk14: INTT P3 B%0d BF%0d: r4_addr=%0#, expected=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__unnamedblk13__DOT__b,
                          32,__Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__unnamedblk13__DOT__unnamedblk14__DOT__j,
                          5,(IData)(vlSelf->tf_rom_addr_gen_tb__DOT__r4_addr),
                          32,__Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__expected_r4);
                VL_STOP_MT("tb/tf_rom_addr_gen_tb.sv", 385, "");
                vlSelf->tf_rom_addr_gen_tb__DOT__errors 
                    = ((IData)(1U) + vlSelf->tf_rom_addr_gen_tb__DOT__errors);
            }
            __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__unnamedblk13__DOT__unnamedblk14__DOT__j 
                = ((IData)(1U) + __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__unnamedblk13__DOT__unnamedblk14__DOT__j);
        }
        __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__expected_r4 
            = ((IData)(1U) + __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__expected_r4);
        __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__unnamedblk13__DOT__b 
            = ((IData)(1U) + __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__unnamedblk13__DOT__b);
    }
    VL_WRITEF("  Pass 3: Verified %0d cycles, r4 counter at %0d\n",
              32,vlSelf->tf_rom_addr_gen_tb__DOT__cycle_count,
              32,__Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__expected_r4);
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       395);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tf_rom_addr_gen_tb__DOT__pass_idx = 3U;
    vlSelf->tf_rom_addr_gen_tb__DOT__start = 1U;
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       398);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tf_rom_addr_gen_tb__DOT__start = 0U;
    VL_WRITEF("\n--- INTT Pass 4 (Radix-4, Stages 6&7) ---\n");
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__num_blocks = 1U;
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__bfs_per_block = 0x40U;
    vlSelf->tf_rom_addr_gen_tb__DOT__cycle_count = 0U;
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__unnamedblk15__DOT__b = 0U;
    while (VL_LTS_III(32, __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__unnamedblk15__DOT__b, __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__num_blocks)) {
        __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__unnamedblk15__DOT__unnamedblk16__DOT__j = 0U;
        while (VL_LTS_III(32, __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__unnamedblk15__DOT__unnamedblk16__DOT__j, __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__bfs_per_block)) {
            co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                               nullptr, 
                                                               "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                               "tb/tf_rom_addr_gen_tb.sv", 
                                                               409);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            vlSelf->tf_rom_addr_gen_tb__DOT__total_tests 
                = ((IData)(1U) + vlSelf->tf_rom_addr_gen_tb__DOT__total_tests);
            vlSelf->tf_rom_addr_gen_tb__DOT__cycle_count 
                = ((IData)(1U) + vlSelf->tf_rom_addr_gen_tb__DOT__cycle_count);
            if (VL_UNLIKELY(((IData)(vlSelf->tf_rom_addr_gen_tb__DOT__r4_addr) 
                             != (0x1fU & __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__expected_r4)))) {
                VL_WRITEF("[%0t] %%Error: tf_rom_addr_gen_tb.sv:414: Assertion failed in %Ntf_rom_addr_gen_tb.verify_intt.unnamedblk15.unnamedblk16: INTT P4 B%0d BF%0d: r4_addr=%0#, expected=%0d\n",
                          64,VL_TIME_UNITED_Q(1000),
                          -9,vlSymsp->name(),32,__Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__unnamedblk15__DOT__b,
                          32,__Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__unnamedblk15__DOT__unnamedblk16__DOT__j,
                          5,(IData)(vlSelf->tf_rom_addr_gen_tb__DOT__r4_addr),
                          32,__Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__expected_r4);
                VL_STOP_MT("tb/tf_rom_addr_gen_tb.sv", 414, "");
                vlSelf->tf_rom_addr_gen_tb__DOT__errors 
                    = ((IData)(1U) + vlSelf->tf_rom_addr_gen_tb__DOT__errors);
            }
            __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__unnamedblk15__DOT__unnamedblk16__DOT__j 
                = ((IData)(1U) + __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__unnamedblk15__DOT__unnamedblk16__DOT__j);
        }
        __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__expected_r4 
            = ((IData)(1U) + __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__expected_r4);
        __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__unnamedblk15__DOT__b 
            = ((IData)(1U) + __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__unnamedblk15__DOT__b);
    }
    VL_WRITEF("  Pass 4: Verified %0d cycles, r4 counter at %0d\n",
              32,vlSelf->tf_rom_addr_gen_tb__DOT__cycle_count,
              32,__Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__expected_r4);
    if (VL_UNLIKELY((0x15U != __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__expected_r4))) {
        VL_WRITEF("[%0t] %%Error: tf_rom_addr_gen_tb.sv:425: Assertion failed in %Ntf_rom_addr_gen_tb.verify_intt: INTT: r4 counter should reach 21, got %0d\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,__Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__expected_r4);
        VL_STOP_MT("tb/tf_rom_addr_gen_tb.sv", 425, "");
        vlSelf->tf_rom_addr_gen_tb__DOT__errors = ((IData)(1U) 
                                                   + vlSelf->tf_rom_addr_gen_tb__DOT__errors);
    }
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       430);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((0U != (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__state_r)) 
                     | (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_done_r)))) {
        VL_WRITEF("[%0t] %%Error: tf_rom_addr_gen_tb.sv:432: Assertion failed in %Ntf_rom_addr_gen_tb.verify_intt: INTT: Address generator still busy after all passes!\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb/tf_rom_addr_gen_tb.sv", 432, "");
        vlSelf->tf_rom_addr_gen_tb__DOT__errors = ((IData)(1U) 
                                                   + vlSelf->tf_rom_addr_gen_tb__DOT__errors);
    }
    VL_WRITEF("\n  INTT VERIFICATION COMPLETE: %0d errors in %0d tests\n",
              32,(vlSelf->tf_rom_addr_gen_tb__DOT__errors 
                  - __Vtask_tf_rom_addr_gen_tb__DOT__verify_intt__2__intt_errors_start),
              32,vlSelf->tf_rom_addr_gen_tb__DOT__total_tests);
    __Vtask_tf_rom_addr_gen_tb__DOT__wait_cycles__3__n = 5U;
    tf_rom_addr_gen_tb__DOT____Vrepeat0 = __Vtask_tf_rom_addr_gen_tb__DOT__wait_cycles__3__n;
    while (VL_LTS_III(32, 0U, tf_rom_addr_gen_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                           "tb/tf_rom_addr_gen_tb.sv", 
                                                           103);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        tf_rom_addr_gen_tb__DOT____Vrepeat0 = (tf_rom_addr_gen_tb__DOT____Vrepeat0 
                                               - (IData)(1U));
    }
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_rom_values__4__rom_errors_start 
        = vlSelf->tf_rom_addr_gen_tb__DOT__errors;
    VL_WRITEF("\n===================================================\n  VERIFYING ROM OUTPUT VALUES (Spot-Check)\n===================================================\n\n--- NTT Radix-4 Pass 1 ROM Values ---\n");
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       454);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tf_rom_addr_gen_tb__DOT__mode = 0xaU;
    vlSelf->tf_rom_addr_gen_tb__DOT__pass_idx = 0U;
    vlSelf->tf_rom_addr_gen_tb__DOT__start = 1U;
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       458);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tf_rom_addr_gen_tb__DOT__start = 0U;
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       463);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       464);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tf_rom_addr_gen_tb__DOT__total_tests = 
        ((IData)(4U) + vlSelf->tf_rom_addr_gen_tb__DOT__total_tests);
    if (VL_UNLIKELY((0x121U != (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__w0)))) {
        VL_WRITEF("[%0t] %%Error: tf_rom_addr_gen_tb.sv:470: Assertion failed in %Ntf_rom_addr_gen_tb.verify_rom_values: NTT ROM: w0=%0#, expected=289 (r4_w2 from R4NTT_ROM[0])\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  12,(IData)(vlSelf->tf_rom_addr_gen_tb__DOT__w0));
        VL_STOP_MT("tb/tf_rom_addr_gen_tb.sv", 470, "");
        vlSelf->tf_rom_addr_gen_tb__DOT__errors = ((IData)(1U) 
                                                   + vlSelf->tf_rom_addr_gen_tb__DOT__errors);
    }
    if (VL_UNLIKELY((0x11U != (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__w1)))) {
        VL_WRITEF("[%0t] %%Error: tf_rom_addr_gen_tb.sv:474: Assertion failed in %Ntf_rom_addr_gen_tb.verify_rom_values: NTT ROM: w1=%0#, expected=17 (r4_w1 from R4NTT_ROM[0])\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  12,(IData)(vlSelf->tf_rom_addr_gen_tb__DOT__w1));
        VL_STOP_MT("tb/tf_rom_addr_gen_tb.sv", 474, "");
        vlSelf->tf_rom_addr_gen_tb__DOT__errors = ((IData)(1U) 
                                                   + vlSelf->tf_rom_addr_gen_tb__DOT__errors);
    }
    if (VL_UNLIKELY((0x630U != (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__w2)))) {
        VL_WRITEF("[%0t] %%Error: tf_rom_addr_gen_tb.sv:478: Assertion failed in %Ntf_rom_addr_gen_tb.verify_rom_values: NTT ROM: w2=%0#, expected=1584 (r4_w3 from R4NTT_ROM[0])\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  12,(IData)(vlSelf->tf_rom_addr_gen_tb__DOT__w2));
        VL_STOP_MT("tb/tf_rom_addr_gen_tb.sv", 478, "");
        vlSelf->tf_rom_addr_gen_tb__DOT__errors = ((IData)(1U) 
                                                   + vlSelf->tf_rom_addr_gen_tb__DOT__errors);
    }
    if (VL_UNLIKELY((0x6c1U != (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__w3)))) {
        VL_WRITEF("[%0t] %%Error: tf_rom_addr_gen_tb.sv:482: Assertion failed in %Ntf_rom_addr_gen_tb.verify_rom_values: NTT ROM: w3=%0#, expected=1729 (OMEGA_4_NTT)\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  12,(IData)(vlSelf->tf_rom_addr_gen_tb__DOT__w3));
        VL_STOP_MT("tb/tf_rom_addr_gen_tb.sv", 482, "");
        vlSelf->tf_rom_addr_gen_tb__DOT__errors = ((IData)(1U) 
                                                   + vlSelf->tf_rom_addr_gen_tb__DOT__errors);
    }
    VL_WRITEF("  NTT R4[0]: w0=%0# w1=%0# w2=%0# w3=%0# %s\n",
              12,vlSelf->tf_rom_addr_gen_tb__DOT__w0,
              12,(IData)(vlSelf->tf_rom_addr_gen_tb__DOT__w1),
              12,vlSelf->tf_rom_addr_gen_tb__DOT__w2,
              12,(IData)(vlSelf->tf_rom_addr_gen_tb__DOT__w3),
              32,(((((0x121U == (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__w0)) 
                     & (0x11U == (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__w1))) 
                    & (0x630U == (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__w2))) 
                   & (0x6c1U == (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__w3)))
                   ? 0x50415353U : 0x4641494cU));
    while (((0U != (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__state_r)) 
            | (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_done_r))) {
        co_await vlSelf->__VtrigSched_h8aaad8d5__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] (~ ((3'h0 != tf_rom_addr_gen_tb.u_tf_addr_gen.state_r) | tf_rom_addr_gen_tb.u_tf_addr_gen.pass_done_r)))", 
                                                           "tb/tf_rom_addr_gen_tb.sv", 
                                                           490);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       491);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("\n--- INTT Radix-2 Pass 1 ROM Values ---\n");
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       495);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tf_rom_addr_gen_tb__DOT__mode = 0xfU;
    vlSelf->tf_rom_addr_gen_tb__DOT__pass_idx = 0U;
    vlSelf->tf_rom_addr_gen_tb__DOT__start = 1U;
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       499);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tf_rom_addr_gen_tb__DOT__start = 0U;
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       502);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       503);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tf_rom_addr_gen_tb__DOT__total_tests = 
        ((IData)(4U) + vlSelf->tf_rom_addr_gen_tb__DOT__total_tests);
    if (VL_UNLIKELY((0x11U != (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__w0)))) {
        VL_WRITEF("[%0t] %%Error: tf_rom_addr_gen_tb.sv:509: Assertion failed in %Ntf_rom_addr_gen_tb.verify_rom_values: INTT ROM R2: w0=%0#, expected=17 (OMEGA_INV_ROM[0])\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  12,(IData)(vlSelf->tf_rom_addr_gen_tb__DOT__w0));
        VL_STOP_MT("tb/tf_rom_addr_gen_tb.sv", 509, "");
        vlSelf->tf_rom_addr_gen_tb__DOT__errors = ((IData)(1U) 
                                                   + vlSelf->tf_rom_addr_gen_tb__DOT__errors);
    }
    if (VL_UNLIKELY((0x681U != (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__w1)))) {
        VL_WRITEF("[%0t] %%Error: tf_rom_addr_gen_tb.sv:513: Assertion failed in %Ntf_rom_addr_gen_tb.verify_rom_values: INTT ROM R2: w1=%0#, expected=1665 (INV_2_MOD_Q for INTT R2)\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  12,(IData)(vlSelf->tf_rom_addr_gen_tb__DOT__w1));
        VL_STOP_MT("tb/tf_rom_addr_gen_tb.sv", 513, "");
        vlSelf->tf_rom_addr_gen_tb__DOT__errors = ((IData)(1U) 
                                                   + vlSelf->tf_rom_addr_gen_tb__DOT__errors);
    }
    if (VL_UNLIKELY((0x11U != (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__w2)))) {
        VL_WRITEF("[%0t] %%Error: tf_rom_addr_gen_tb.sv:517: Assertion failed in %Ntf_rom_addr_gen_tb.verify_rom_values: INTT ROM R2: w2=%0#, expected=17 (same omega as w0)\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  12,(IData)(vlSelf->tf_rom_addr_gen_tb__DOT__w2));
        VL_STOP_MT("tb/tf_rom_addr_gen_tb.sv", 517, "");
        vlSelf->tf_rom_addr_gen_tb__DOT__errors = ((IData)(1U) 
                                                   + vlSelf->tf_rom_addr_gen_tb__DOT__errors);
    }
    if (VL_UNLIKELY((0x640U != (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__w3)))) {
        VL_WRITEF("[%0t] %%Error: tf_rom_addr_gen_tb.sv:521: Assertion failed in %Ntf_rom_addr_gen_tb.verify_rom_values: INTT ROM: w3=%0#, expected=1600 (OMEGA_4_INTT)\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  12,(IData)(vlSelf->tf_rom_addr_gen_tb__DOT__w3));
        VL_STOP_MT("tb/tf_rom_addr_gen_tb.sv", 521, "");
        vlSelf->tf_rom_addr_gen_tb__DOT__errors = ((IData)(1U) 
                                                   + vlSelf->tf_rom_addr_gen_tb__DOT__errors);
    }
    VL_WRITEF("  INTT R2[0]: w0=%0# w1=%0# w2=%0# w3=%0# %s\n",
              12,vlSelf->tf_rom_addr_gen_tb__DOT__w0,
              12,(IData)(vlSelf->tf_rom_addr_gen_tb__DOT__w1),
              12,vlSelf->tf_rom_addr_gen_tb__DOT__w2,
              12,(IData)(vlSelf->tf_rom_addr_gen_tb__DOT__w3),
              32,(((((0x11U == (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__w0)) 
                     & (0x681U == (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__w1))) 
                    & (0x11U == (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__w2))) 
                   & (0x640U == (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__w3)))
                   ? 0x50415353U : 0x4641494cU));
    while (((0U != (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__state_r)) 
            | (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_done_r))) {
        co_await vlSelf->__VtrigSched_h8aaad8d5__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] (~ ((3'h0 != tf_rom_addr_gen_tb.u_tf_addr_gen.state_r) | tf_rom_addr_gen_tb.u_tf_addr_gen.pass_done_r)))", 
                                                           "tb/tf_rom_addr_gen_tb.sv", 
                                                           529);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       530);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    VL_WRITEF("\n  ROM VALUE CHECK COMPLETE: %0d errors\n",
              32,(vlSelf->tf_rom_addr_gen_tb__DOT__errors 
                  - __Vtask_tf_rom_addr_gen_tb__DOT__verify_rom_values__4__rom_errors_start));
    __Vtask_tf_rom_addr_gen_tb__DOT__wait_cycles__5__n = 5U;
    tf_rom_addr_gen_tb__DOT____Vrepeat0 = __Vtask_tf_rom_addr_gen_tb__DOT__wait_cycles__5__n;
    while (VL_LTS_III(32, 0U, tf_rom_addr_gen_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                           "tb/tf_rom_addr_gen_tb.sv", 
                                                           103);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        tf_rom_addr_gen_tb__DOT____Vrepeat0 = (tf_rom_addr_gen_tb__DOT____Vrepeat0 
                                               - (IData)(1U));
    }
    VL_WRITEF("\n===================================================\n  VERIFYING TOTAL CYCLE COUNTS\n===================================================\n");
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_cycle_counts__6__ntt_cycles = 0U;
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       549);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tf_rom_addr_gen_tb__DOT__mode = 0xaU;
    vlSelf->tf_rom_addr_gen_tb__DOT__pass_idx = 0U;
    vlSelf->tf_rom_addr_gen_tb__DOT__start = 1U;
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       553);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tf_rom_addr_gen_tb__DOT__start = 0U;
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       557);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((0U != (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__state_r)) 
         | (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_done_r))) {
        __Vtask_tf_rom_addr_gen_tb__DOT__verify_cycle_counts__6__ntt_cycles 
            = ((IData)(1U) + __Vtask_tf_rom_addr_gen_tb__DOT__verify_cycle_counts__6__ntt_cycles);
    }
    while (((0U != (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__state_r)) 
            | (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_done_r))) {
        co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                           "tb/tf_rom_addr_gen_tb.sv", 
                                                           557);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        if (((0U != (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__state_r)) 
             | (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_done_r))) {
            __Vtask_tf_rom_addr_gen_tb__DOT__verify_cycle_counts__6__ntt_cycles 
                = ((IData)(1U) + __Vtask_tf_rom_addr_gen_tb__DOT__verify_cycle_counts__6__ntt_cycles);
        }
    }
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       549);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tf_rom_addr_gen_tb__DOT__mode = 0xaU;
    vlSelf->tf_rom_addr_gen_tb__DOT__pass_idx = 1U;
    vlSelf->tf_rom_addr_gen_tb__DOT__start = 1U;
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       553);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tf_rom_addr_gen_tb__DOT__start = 0U;
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       557);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((0U != (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__state_r)) 
         | (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_done_r))) {
        __Vtask_tf_rom_addr_gen_tb__DOT__verify_cycle_counts__6__ntt_cycles 
            = ((IData)(1U) + __Vtask_tf_rom_addr_gen_tb__DOT__verify_cycle_counts__6__ntt_cycles);
    }
    while (((0U != (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__state_r)) 
            | (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_done_r))) {
        co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                           "tb/tf_rom_addr_gen_tb.sv", 
                                                           557);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        if (((0U != (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__state_r)) 
             | (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_done_r))) {
            __Vtask_tf_rom_addr_gen_tb__DOT__verify_cycle_counts__6__ntt_cycles 
                = ((IData)(1U) + __Vtask_tf_rom_addr_gen_tb__DOT__verify_cycle_counts__6__ntt_cycles);
        }
    }
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       549);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tf_rom_addr_gen_tb__DOT__mode = 0xaU;
    vlSelf->tf_rom_addr_gen_tb__DOT__pass_idx = 2U;
    vlSelf->tf_rom_addr_gen_tb__DOT__start = 1U;
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       553);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tf_rom_addr_gen_tb__DOT__start = 0U;
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       557);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((0U != (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__state_r)) 
         | (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_done_r))) {
        __Vtask_tf_rom_addr_gen_tb__DOT__verify_cycle_counts__6__ntt_cycles 
            = ((IData)(1U) + __Vtask_tf_rom_addr_gen_tb__DOT__verify_cycle_counts__6__ntt_cycles);
    }
    while (((0U != (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__state_r)) 
            | (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_done_r))) {
        co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                           "tb/tf_rom_addr_gen_tb.sv", 
                                                           557);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        if (((0U != (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__state_r)) 
             | (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_done_r))) {
            __Vtask_tf_rom_addr_gen_tb__DOT__verify_cycle_counts__6__ntt_cycles 
                = ((IData)(1U) + __Vtask_tf_rom_addr_gen_tb__DOT__verify_cycle_counts__6__ntt_cycles);
        }
    }
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       549);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tf_rom_addr_gen_tb__DOT__mode = 0xaU;
    vlSelf->tf_rom_addr_gen_tb__DOT__pass_idx = 3U;
    vlSelf->tf_rom_addr_gen_tb__DOT__start = 1U;
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       553);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tf_rom_addr_gen_tb__DOT__start = 0U;
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       557);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((0U != (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__state_r)) 
         | (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_done_r))) {
        __Vtask_tf_rom_addr_gen_tb__DOT__verify_cycle_counts__6__ntt_cycles 
            = ((IData)(1U) + __Vtask_tf_rom_addr_gen_tb__DOT__verify_cycle_counts__6__ntt_cycles);
    }
    while (((0U != (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__state_r)) 
            | (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_done_r))) {
        co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                           "tb/tf_rom_addr_gen_tb.sv", 
                                                           557);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        if (((0U != (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__state_r)) 
             | (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_done_r))) {
            __Vtask_tf_rom_addr_gen_tb__DOT__verify_cycle_counts__6__ntt_cycles 
                = ((IData)(1U) + __Vtask_tf_rom_addr_gen_tb__DOT__verify_cycle_counts__6__ntt_cycles);
        }
    }
    vlSelf->tf_rom_addr_gen_tb__DOT__total_tests = 
        ((IData)(1U) + vlSelf->tf_rom_addr_gen_tb__DOT__total_tests);
    if (VL_UNLIKELY((0x140U != __Vtask_tf_rom_addr_gen_tb__DOT__verify_cycle_counts__6__ntt_cycles))) {
        VL_WRITEF("[%0t] %%Error: tf_rom_addr_gen_tb.sv:564: Assertion failed in %Ntf_rom_addr_gen_tb.verify_cycle_counts: NTT cycle count: %0d, expected 320\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,__Vtask_tf_rom_addr_gen_tb__DOT__verify_cycle_counts__6__ntt_cycles);
        VL_STOP_MT("tb/tf_rom_addr_gen_tb.sv", 564, "");
        vlSelf->tf_rom_addr_gen_tb__DOT__errors = ((IData)(1U) 
                                                   + vlSelf->tf_rom_addr_gen_tb__DOT__errors);
    }
    VL_WRITEF("  NTT: %0d cycles %s\n",32,__Vtask_tf_rom_addr_gen_tb__DOT__verify_cycle_counts__6__ntt_cycles,
              32,((0x140U == __Vtask_tf_rom_addr_gen_tb__DOT__verify_cycle_counts__6__ntt_cycles)
                   ? 0x50415353U : 0x4641494cU));
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       569);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tf_rom_addr_gen_tb__DOT__verify_cycle_counts__6__intt_cycles = 0U;
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       574);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tf_rom_addr_gen_tb__DOT__mode = 0xfU;
    vlSelf->tf_rom_addr_gen_tb__DOT__pass_idx = 0U;
    vlSelf->tf_rom_addr_gen_tb__DOT__start = 1U;
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       578);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tf_rom_addr_gen_tb__DOT__start = 0U;
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       582);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((0U != (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__state_r)) 
         | (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_done_r))) {
        __Vtask_tf_rom_addr_gen_tb__DOT__verify_cycle_counts__6__intt_cycles 
            = ((IData)(1U) + __Vtask_tf_rom_addr_gen_tb__DOT__verify_cycle_counts__6__intt_cycles);
    }
    while (((0U != (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__state_r)) 
            | (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_done_r))) {
        co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                           "tb/tf_rom_addr_gen_tb.sv", 
                                                           582);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        if (((0U != (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__state_r)) 
             | (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_done_r))) {
            __Vtask_tf_rom_addr_gen_tb__DOT__verify_cycle_counts__6__intt_cycles 
                = ((IData)(1U) + __Vtask_tf_rom_addr_gen_tb__DOT__verify_cycle_counts__6__intt_cycles);
        }
    }
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       574);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tf_rom_addr_gen_tb__DOT__mode = 0xfU;
    vlSelf->tf_rom_addr_gen_tb__DOT__pass_idx = 1U;
    vlSelf->tf_rom_addr_gen_tb__DOT__start = 1U;
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       578);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tf_rom_addr_gen_tb__DOT__start = 0U;
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       582);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((0U != (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__state_r)) 
         | (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_done_r))) {
        __Vtask_tf_rom_addr_gen_tb__DOT__verify_cycle_counts__6__intt_cycles 
            = ((IData)(1U) + __Vtask_tf_rom_addr_gen_tb__DOT__verify_cycle_counts__6__intt_cycles);
    }
    while (((0U != (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__state_r)) 
            | (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_done_r))) {
        co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                           "tb/tf_rom_addr_gen_tb.sv", 
                                                           582);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        if (((0U != (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__state_r)) 
             | (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_done_r))) {
            __Vtask_tf_rom_addr_gen_tb__DOT__verify_cycle_counts__6__intt_cycles 
                = ((IData)(1U) + __Vtask_tf_rom_addr_gen_tb__DOT__verify_cycle_counts__6__intt_cycles);
        }
    }
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       574);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tf_rom_addr_gen_tb__DOT__mode = 0xfU;
    vlSelf->tf_rom_addr_gen_tb__DOT__pass_idx = 2U;
    vlSelf->tf_rom_addr_gen_tb__DOT__start = 1U;
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       578);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tf_rom_addr_gen_tb__DOT__start = 0U;
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       582);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (((0U != (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__state_r)) 
         | (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_done_r))) {
        __Vtask_tf_rom_addr_gen_tb__DOT__verify_cycle_counts__6__intt_cycles 
            = ((IData)(1U) + __Vtask_tf_rom_addr_gen_tb__DOT__verify_cycle_counts__6__intt_cycles);
    }
    while (((0U != (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__state_r)) 
            | (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_done_r))) {
        co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                           "tb/tf_rom_addr_gen_tb.sv", 
                                                           582);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        if (((0U != (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__state_r)) 
             | (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_done_r))) {
            __Vtask_tf_rom_addr_gen_tb__DOT__verify_cycle_counts__6__intt_cycles 
                = ((IData)(1U) + __Vtask_tf_rom_addr_gen_tb__DOT__verify_cycle_counts__6__intt_cycles);
        }
    }
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       574);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tf_rom_addr_gen_tb__DOT__mode = 0xfU;
    vlSelf->tf_rom_addr_gen_tb__DOT__pass_idx = 3U;
    vlSelf->tf_rom_addr_gen_tb__DOT__start = 1U;
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       578);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tf_rom_addr_gen_tb__DOT__start = 0U;
    co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                       "tb/tf_rom_addr_gen_tb.sv", 
                                                       582);
    if (((0U != (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__state_r)) 
         | (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_done_r))) {
        __Vtask_tf_rom_addr_gen_tb__DOT__verify_cycle_counts__6__intt_cycles 
            = ((IData)(1U) + __Vtask_tf_rom_addr_gen_tb__DOT__verify_cycle_counts__6__intt_cycles);
    }
    vlSelf->__Vm_traceActivity[2U] = 1U;
    while (((0U != (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__state_r)) 
            | (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_done_r))) {
        co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                           "tb/tf_rom_addr_gen_tb.sv", 
                                                           582);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        if (((0U != (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__state_r)) 
             | (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_done_r))) {
            __Vtask_tf_rom_addr_gen_tb__DOT__verify_cycle_counts__6__intt_cycles 
                = ((IData)(1U) + __Vtask_tf_rom_addr_gen_tb__DOT__verify_cycle_counts__6__intt_cycles);
        }
    }
    vlSelf->tf_rom_addr_gen_tb__DOT__total_tests = 
        ((IData)(1U) + vlSelf->tf_rom_addr_gen_tb__DOT__total_tests);
    if (VL_UNLIKELY((0x140U != __Vtask_tf_rom_addr_gen_tb__DOT__verify_cycle_counts__6__intt_cycles))) {
        VL_WRITEF("[%0t] %%Error: tf_rom_addr_gen_tb.sv:589: Assertion failed in %Ntf_rom_addr_gen_tb.verify_cycle_counts: INTT cycle count: %0d, expected 320\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,__Vtask_tf_rom_addr_gen_tb__DOT__verify_cycle_counts__6__intt_cycles);
        VL_STOP_MT("tb/tf_rom_addr_gen_tb.sv", 589, "");
        vlSelf->tf_rom_addr_gen_tb__DOT__errors = ((IData)(1U) 
                                                   + vlSelf->tf_rom_addr_gen_tb__DOT__errors);
    }
    VL_WRITEF("  INTT: %0d cycles %s\n",32,__Vtask_tf_rom_addr_gen_tb__DOT__verify_cycle_counts__6__intt_cycles,
              32,((0x140U == __Vtask_tf_rom_addr_gen_tb__DOT__verify_cycle_counts__6__intt_cycles)
                   ? 0x50415353U : 0x4641494cU));
    __Vtask_tf_rom_addr_gen_tb__DOT__wait_cycles__7__n = 5U;
    tf_rom_addr_gen_tb__DOT____Vrepeat0 = __Vtask_tf_rom_addr_gen_tb__DOT__wait_cycles__7__n;
    while (VL_LTS_III(32, 0U, tf_rom_addr_gen_tb__DOT____Vrepeat0)) {
        co_await vlSelf->__VtrigSched_h9ecdf918__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tf_rom_addr_gen_tb.clk)", 
                                                           "tb/tf_rom_addr_gen_tb.sv", 
                                                           103);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        tf_rom_addr_gen_tb__DOT____Vrepeat0 = (tf_rom_addr_gen_tb__DOT____Vrepeat0 
                                               - (IData)(1U));
    }
    VL_WRITEF("\n==========================================================\n");
    if ((0U == vlSelf->tf_rom_addr_gen_tb__DOT__errors)) {
        VL_WRITEF(" ALL %0d TESTS PASSED!\n",32,vlSelf->tf_rom_addr_gen_tb__DOT__total_tests);
    } else {
        VL_WRITEF(" FAILED: %0d errors in %0d tests\n",
                  32,vlSelf->tf_rom_addr_gen_tb__DOT__errors,
                  32,vlSelf->tf_rom_addr_gen_tb__DOT__total_tests);
    }
    VL_WRITEF("==========================================================\n\n");
    VL_FINISH_MT("tb/tf_rom_addr_gen_tb.sv", 638, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtf_rom_addr_gen_tb___024root___dump_triggers__act(Vtf_rom_addr_gen_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtf_rom_addr_gen_tb___024root___eval_triggers__act(Vtf_rom_addr_gen_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtf_rom_addr_gen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtf_rom_addr_gen_tb___024root___eval_triggers__act\n"); );
    // Body
    CData/*0:0*/ __Vtrigcurrexpr_h1a9d9ec3__0;
    __Vtrigcurrexpr_h1a9d9ec3__0 = 0;
    __Vtrigcurrexpr_h1a9d9ec3__0 = (1U & (~ ((0U != (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__state_r)) 
                                             | (IData)(vlSelf->tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_done_r))));
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->tf_rom_addr_gen_tb__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tf_rom_addr_gen_tb__DOT__clk__0))));
    vlSelf->__VactTriggered.set(1U, ((IData)(__Vtrigcurrexpr_h1a9d9ec3__0) 
                                     != (IData)(vlSelf->__Vtrigprevexpr_h1a9d9ec3__0)));
    vlSelf->__VactTriggered.set(2U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__tf_rom_addr_gen_tb__DOT__clk__0 
        = vlSelf->tf_rom_addr_gen_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr_h1a9d9ec3__0 = __Vtrigcurrexpr_h1a9d9ec3__0;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtf_rom_addr_gen_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
