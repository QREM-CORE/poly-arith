// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtf_rom_addr_gen_tb__pch.h"
#include "Vtf_rom_addr_gen_tb.h"
#include "Vtf_rom_addr_gen_tb___024root.h"
#include "Vtf_rom_addr_gen_tb___024unit.h"

// FUNCTIONS
Vtf_rom_addr_gen_tb__Syms::~Vtf_rom_addr_gen_tb__Syms()
{
}

Vtf_rom_addr_gen_tb__Syms::Vtf_rom_addr_gen_tb__Syms(VerilatedContext* contextp, const char* namep, Vtf_rom_addr_gen_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_tf_rom_addr_gen_tb.configure(this, name(), "tf_rom_addr_gen_tb", "tf_rom_addr_gen_tb", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tf_rom_addr_gen_tb__verify_cycle_counts.configure(this, name(), "tf_rom_addr_gen_tb.verify_cycle_counts", "verify_cycle_counts", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tf_rom_addr_gen_tb__verify_intt.configure(this, name(), "tf_rom_addr_gen_tb.verify_intt", "verify_intt", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tf_rom_addr_gen_tb__verify_intt__unnamedblk11__unnamedblk12.configure(this, name(), "tf_rom_addr_gen_tb.verify_intt.unnamedblk11.unnamedblk12", "unnamedblk12", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tf_rom_addr_gen_tb__verify_intt__unnamedblk13__unnamedblk14.configure(this, name(), "tf_rom_addr_gen_tb.verify_intt.unnamedblk13.unnamedblk14", "unnamedblk14", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tf_rom_addr_gen_tb__verify_intt__unnamedblk15__unnamedblk16.configure(this, name(), "tf_rom_addr_gen_tb.verify_intt.unnamedblk15.unnamedblk16", "unnamedblk16", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tf_rom_addr_gen_tb__verify_intt__unnamedblk9__unnamedblk10.configure(this, name(), "tf_rom_addr_gen_tb.verify_intt.unnamedblk9.unnamedblk10", "unnamedblk10", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tf_rom_addr_gen_tb__verify_ntt.configure(this, name(), "tf_rom_addr_gen_tb.verify_ntt", "verify_ntt", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tf_rom_addr_gen_tb__verify_ntt__unnamedblk1__unnamedblk2.configure(this, name(), "tf_rom_addr_gen_tb.verify_ntt.unnamedblk1.unnamedblk2", "unnamedblk2", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tf_rom_addr_gen_tb__verify_ntt__unnamedblk3__unnamedblk4.configure(this, name(), "tf_rom_addr_gen_tb.verify_ntt.unnamedblk3.unnamedblk4", "unnamedblk4", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tf_rom_addr_gen_tb__verify_ntt__unnamedblk5__unnamedblk6.configure(this, name(), "tf_rom_addr_gen_tb.verify_ntt.unnamedblk5.unnamedblk6", "unnamedblk6", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tf_rom_addr_gen_tb__verify_ntt__unnamedblk7__unnamedblk8.configure(this, name(), "tf_rom_addr_gen_tb.verify_ntt.unnamedblk7.unnamedblk8", "unnamedblk8", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tf_rom_addr_gen_tb__verify_rom_values.configure(this, name(), "tf_rom_addr_gen_tb.verify_rom_values", "verify_rom_values", -9, VerilatedScope::SCOPE_OTHER);
}
