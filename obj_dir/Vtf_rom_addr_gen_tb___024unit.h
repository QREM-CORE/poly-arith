// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtf_rom_addr_gen_tb.h for the primary calling header

#ifndef VERILATED_VTF_ROM_ADDR_GEN_TB___024UNIT_H_
#define VERILATED_VTF_ROM_ADDR_GEN_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtf_rom_addr_gen_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtf_rom_addr_gen_tb___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtf_rom_addr_gen_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtf_rom_addr_gen_tb___024unit(Vtf_rom_addr_gen_tb__Syms* symsp, const char* v__name);
    ~Vtf_rom_addr_gen_tb___024unit();
    VL_UNCOPYABLE(Vtf_rom_addr_gen_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
