// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtf_rom_addr_gen_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtf_rom_addr_gen_tb::Vtf_rom_addr_gen_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtf_rom_addr_gen_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtf_rom_addr_gen_tb::Vtf_rom_addr_gen_tb(const char* _vcname__)
    : Vtf_rom_addr_gen_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtf_rom_addr_gen_tb::~Vtf_rom_addr_gen_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtf_rom_addr_gen_tb___024root___eval_debug_assertions(Vtf_rom_addr_gen_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vtf_rom_addr_gen_tb___024root___eval_static(Vtf_rom_addr_gen_tb___024root* vlSelf);
void Vtf_rom_addr_gen_tb___024root___eval_initial(Vtf_rom_addr_gen_tb___024root* vlSelf);
void Vtf_rom_addr_gen_tb___024root___eval_settle(Vtf_rom_addr_gen_tb___024root* vlSelf);
void Vtf_rom_addr_gen_tb___024root___eval(Vtf_rom_addr_gen_tb___024root* vlSelf);

void Vtf_rom_addr_gen_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtf_rom_addr_gen_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtf_rom_addr_gen_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtf_rom_addr_gen_tb___024root___eval_static(&(vlSymsp->TOP));
        Vtf_rom_addr_gen_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vtf_rom_addr_gen_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtf_rom_addr_gen_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtf_rom_addr_gen_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtf_rom_addr_gen_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtf_rom_addr_gen_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtf_rom_addr_gen_tb___024root___eval_final(Vtf_rom_addr_gen_tb___024root* vlSelf);

VL_ATTR_COLD void Vtf_rom_addr_gen_tb::final() {
    Vtf_rom_addr_gen_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtf_rom_addr_gen_tb::hierName() const { return vlSymsp->name(); }
const char* Vtf_rom_addr_gen_tb::modelName() const { return "Vtf_rom_addr_gen_tb"; }
unsigned Vtf_rom_addr_gen_tb::threads() const { return 1; }
void Vtf_rom_addr_gen_tb::prepareClone() const { contextp()->prepareClone(); }
void Vtf_rom_addr_gen_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtf_rom_addr_gen_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtf_rom_addr_gen_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtf_rom_addr_gen_tb___024root__trace_init_top(Vtf_rom_addr_gen_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtf_rom_addr_gen_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtf_rom_addr_gen_tb___024root*>(voidSelf);
    Vtf_rom_addr_gen_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vtf_rom_addr_gen_tb___024root__trace_decl_types(tracep);
    Vtf_rom_addr_gen_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtf_rom_addr_gen_tb___024root__trace_register(Vtf_rom_addr_gen_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtf_rom_addr_gen_tb::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtf_rom_addr_gen_tb::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtf_rom_addr_gen_tb___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
