// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtf_rom_addr_gen_tb.h for the primary calling header

#ifndef VERILATED_VTF_ROM_ADDR_GEN_TB___024ROOT_H_
#define VERILATED_VTF_ROM_ADDR_GEN_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtf_rom_addr_gen_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtf_rom_addr_gen_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tf_rom_addr_gen_tb__DOT__clk;
    CData/*0:0*/ tf_rom_addr_gen_tb__DOT__rst;
    CData/*0:0*/ tf_rom_addr_gen_tb__DOT__start;
    CData/*3:0*/ tf_rom_addr_gen_tb__DOT__mode;
    CData/*1:0*/ tf_rom_addr_gen_tb__DOT__pass_idx;
    CData/*4:0*/ tf_rom_addr_gen_tb__DOT__r4_addr;
    CData/*5:0*/ tf_rom_addr_gen_tb__DOT__r2_addr;
    CData/*0:0*/ tf_rom_addr_gen_tb__DOT__is_intt;
    CData/*0:0*/ tf_rom_addr_gen_tb__DOT__is_radix2;
    CData/*1:0*/ tf_rom_addr_gen_tb__DOT__pass_num;
    CData/*2:0*/ tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__state_r;
    CData/*2:0*/ tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__state_next;
    CData/*3:0*/ tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__mode_r;
    CData/*0:0*/ tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__is_intt_r;
    CData/*0:0*/ tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__is_cwm_r;
    CData/*5:0*/ tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__bf_cnt_r;
    CData/*5:0*/ tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__block_cnt_r;
    CData/*4:0*/ tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__r4_cnt_r;
    CData/*5:0*/ tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__r2_cnt_r;
    CData/*0:0*/ tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__was_radix2_r;
    CData/*0:0*/ tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_done_r;
    CData/*5:0*/ tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__blocks_max;
    CData/*5:0*/ tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__bfs_max;
    CData/*0:0*/ tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_is_radix2;
    CData/*0:0*/ tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__bf_last;
    CData/*0:0*/ tf_rom_addr_gen_tb__DOT__u_tf_addr_gen__DOT__pass_last;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tf_rom_addr_gen_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr_h1a9d9ec3__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    SData/*11:0*/ tf_rom_addr_gen_tb__DOT__w0;
    SData/*11:0*/ tf_rom_addr_gen_tb__DOT__w1;
    SData/*11:0*/ tf_rom_addr_gen_tb__DOT__w2;
    SData/*11:0*/ tf_rom_addr_gen_tb__DOT__w3;
    SData/*11:0*/ tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__r2_data;
    IData/*31:0*/ tf_rom_addr_gen_tb__DOT__errors;
    IData/*31:0*/ tf_rom_addr_gen_tb__DOT__total_tests;
    IData/*31:0*/ tf_rom_addr_gen_tb__DOT__cycle_count;
    IData/*31:0*/ __VactIterCount;
    QData/*35:0*/ tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__r4_data;
    VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h9ecdf918__0;
    VlTriggerScheduler __VtrigSched_h8aaad8d5__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtf_rom_addr_gen_tb__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr VlUnpacked<QData/*35:0*/, 21> tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__R4NTT_ROM = {{
        0x0000000011121630ULL, 0x0000000128426581ULL,
        0x00000006a728a427ULL, 0x000000090f5923abULL,
        0x0000000af4a576baULL, 0x0000000a52a14247ULL,
        0x0000000665cb57f5ULL, 0x00000004ad53bae5ULL,
        0x0000000177327193ULL, 0x0000000be60c1cd1ULL,
        0x00000007379d1ad5ULL, 0x000000059e217985ULL,
        0x00000004775c9752ULL, 0x0000000ae27698f0ULL,
        0x00000002f48e582aULL, 0x0000000b318c05b5ULL,
        0x00000008335fead7ULL, 0x0000000959239bc7ULL,
        0x00000002dd5289a2ULL, 0x00000009aa7b610cULL,
        0x000000083e4cb375ULL
    }};
    static constexpr VlUnpacked<SData/*11:0*/, 64> tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__OMEGA_ROM = {{
        0x06c1U, 0x0ac9U, 0x014bU, 0x08faU, 0x098fU, 0x0673U, 0x059bU, 0x0444U,
        0x077fU, 0x0a66U, 0x07b9U, 0x013fU, 0x082eU, 0x0904U, 0x0a39U, 0x04bcU,
        0x0276U, 0x02d3U, 0x0900U, 0x09f5U, 0x0038U, 0x03b8U, 0x0b34U, 0x0866U,
        0x0cbcU, 0x086cU, 0x0021U, 0x0231U, 0x0b3fU, 0x0921U, 0x0c26U, 0x0b77U,
        0x0cd9U, 0x0a59U, 0x06dcU, 0x0c94U, 0x05c4U, 0x06fdU, 0x01c4U, 0x0402U,
        0x031dU, 0x00e9U, 0x0278U, 0x02f5U, 0x0b42U, 0x0954U, 0x0288U, 0x0405U,
        0x0350U, 0x044cU, 0x0807U, 0x066dU, 0x0535U, 0x0a7fU, 0x0962U, 0x0376U,
        0x06d2U, 0x0beaU, 0x077bU, 0x0a22U, 0x0335U, 0x0281U, 0x038eU, 0x086aU
    }};
    static constexpr VlUnpacked<QData/*35:0*/, 21> tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__R4INTT_ROM = {{
        0x0000000ac9a5914bULL, 0x00000008fa6dc98fULL,
        0x0000000673c9459bULL, 0x00000004445c477fULL,
        0x0000000a666fd7b9ULL, 0x000000013f1c482eULL,
        0x0000000904402a39ULL, 0x00000004bc31d276ULL,
        0x00000002d30e9900ULL, 0x00000009f5278038ULL,
        0x00000003b82f5b34ULL, 0x0000000866b42cbcULL,
        0x000000086c954021ULL, 0x0000000231288b3fULL,
        0x0000000921405c26ULL, 0x0000000b77350cd9ULL,
        0x000000044cbea807ULL, 0x000000066d77b535ULL,
        0x0000000a7fa22962ULL, 0x00000003763356d2ULL,
        0x000000028186a38eULL
    }};
    static constexpr VlUnpacked<SData/*11:0*/, 64> tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__OMEGA_INV_ROM = {{
        0x0011U, 0x0121U, 0x0630U, 0x0128U, 0x06a7U, 0x090fU, 0x0af4U, 0x0426U,
        0x0581U, 0x028aU, 0x0427U, 0x0592U, 0x03abU, 0x0a57U, 0x06baU, 0x0a52U,
        0x0665U, 0x04adU, 0x0177U, 0x0be6U, 0x0737U, 0x059eU, 0x0477U, 0x0ae2U,
        0x02f4U, 0x0b31U, 0x0833U, 0x0959U, 0x02ddU, 0x09aaU, 0x083eU, 0x0a14U,
        0x0247U, 0x0cb5U, 0x07f5U, 0x053bU, 0x0ae5U, 0x0327U, 0x0193U, 0x00c1U,
        0x0cd1U, 0x09d1U, 0x0ad5U, 0x0217U, 0x0985U, 0x05c9U, 0x0752U, 0x0769U,
        0x08f0U, 0x08e5U, 0x082aU, 0x08c0U, 0x05b5U, 0x05feU, 0x0ad7U, 0x0239U,
        0x0bc7U, 0x0528U, 0x09a2U, 0x07b6U, 0x010cU, 0x04cbU, 0x0375U, 0x06c1U
    }};

    // CONSTRUCTORS
    Vtf_rom_addr_gen_tb___024root(Vtf_rom_addr_gen_tb__Syms* symsp, const char* v__name);
    ~Vtf_rom_addr_gen_tb___024root();
    VL_UNCOPYABLE(Vtf_rom_addr_gen_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
