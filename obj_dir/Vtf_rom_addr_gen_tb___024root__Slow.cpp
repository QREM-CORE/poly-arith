// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtf_rom_addr_gen_tb.h for the primary calling header

#include "Vtf_rom_addr_gen_tb__pch.h"
#include "Vtf_rom_addr_gen_tb__Syms.h"
#include "Vtf_rom_addr_gen_tb___024root.h"

// Parameter definitions for Vtf_rom_addr_gen_tb___024root
constexpr VlUnpacked<QData/*35:0*/, 21> Vtf_rom_addr_gen_tb___024root::tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__R4NTT_ROM;
constexpr VlUnpacked<SData/*11:0*/, 64> Vtf_rom_addr_gen_tb___024root::tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__OMEGA_ROM;
constexpr VlUnpacked<QData/*35:0*/, 21> Vtf_rom_addr_gen_tb___024root::tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__R4INTT_ROM;
constexpr VlUnpacked<SData/*11:0*/, 64> Vtf_rom_addr_gen_tb___024root::tf_rom_addr_gen_tb__DOT__u_tf_rom__DOT__OMEGA_INV_ROM;


void Vtf_rom_addr_gen_tb___024root___ctor_var_reset(Vtf_rom_addr_gen_tb___024root* vlSelf);

Vtf_rom_addr_gen_tb___024root::Vtf_rom_addr_gen_tb___024root(Vtf_rom_addr_gen_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtf_rom_addr_gen_tb___024root___ctor_var_reset(this);
}

void Vtf_rom_addr_gen_tb___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtf_rom_addr_gen_tb___024root::~Vtf_rom_addr_gen_tb___024root() {
}
