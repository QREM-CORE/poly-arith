// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTF_ROM_ADDR_GEN_TB__SYMS_H_
#define VERILATED_VTF_ROM_ADDR_GEN_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtf_rom_addr_gen_tb.h"

// INCLUDE MODULE CLASSES
#include "Vtf_rom_addr_gen_tb___024root.h"
#include "Vtf_rom_addr_gen_tb___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtf_rom_addr_gen_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtf_rom_addr_gen_tb* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtf_rom_addr_gen_tb___024root  TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_tf_rom_addr_gen_tb;
    VerilatedScope __Vscope_tf_rom_addr_gen_tb__verify_cycle_counts;
    VerilatedScope __Vscope_tf_rom_addr_gen_tb__verify_intt;
    VerilatedScope __Vscope_tf_rom_addr_gen_tb__verify_intt__unnamedblk11__unnamedblk12;
    VerilatedScope __Vscope_tf_rom_addr_gen_tb__verify_intt__unnamedblk13__unnamedblk14;
    VerilatedScope __Vscope_tf_rom_addr_gen_tb__verify_intt__unnamedblk15__unnamedblk16;
    VerilatedScope __Vscope_tf_rom_addr_gen_tb__verify_intt__unnamedblk9__unnamedblk10;
    VerilatedScope __Vscope_tf_rom_addr_gen_tb__verify_ntt;
    VerilatedScope __Vscope_tf_rom_addr_gen_tb__verify_ntt__unnamedblk1__unnamedblk2;
    VerilatedScope __Vscope_tf_rom_addr_gen_tb__verify_ntt__unnamedblk3__unnamedblk4;
    VerilatedScope __Vscope_tf_rom_addr_gen_tb__verify_ntt__unnamedblk5__unnamedblk6;
    VerilatedScope __Vscope_tf_rom_addr_gen_tb__verify_ntt__unnamedblk7__unnamedblk8;
    VerilatedScope __Vscope_tf_rom_addr_gen_tb__verify_rom_values;

    // CONSTRUCTORS
    Vtf_rom_addr_gen_tb__Syms(VerilatedContext* contextp, const char* namep, Vtf_rom_addr_gen_tb* modelp);
    ~Vtf_rom_addr_gen_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
