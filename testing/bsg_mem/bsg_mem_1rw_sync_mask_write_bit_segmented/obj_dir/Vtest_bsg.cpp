// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtest_bsg.h"
#include "Vtest_bsg__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtest_bsg::Vtest_bsg(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vtest_bsg__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , v_i{vlSymsp->TOP.v_i}
    , w_i{vlSymsp->TOP.w_i}
    , rootp{&(vlSymsp->TOP)}
{
}

Vtest_bsg::Vtest_bsg(const char* _vcname__)
    : Vtest_bsg(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vtest_bsg::~Vtest_bsg() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vtest_bsg___024root___eval_initial(Vtest_bsg___024root* vlSelf);
void Vtest_bsg___024root___eval_settle(Vtest_bsg___024root* vlSelf);
void Vtest_bsg___024root___eval(Vtest_bsg___024root* vlSelf);
#ifdef VL_DEBUG
void Vtest_bsg___024root___eval_debug_assertions(Vtest_bsg___024root* vlSelf);
#endif  // VL_DEBUG
void Vtest_bsg___024root___final(Vtest_bsg___024root* vlSelf);

static void _eval_initial_loop(Vtest_bsg__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vtest_bsg___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vtest_bsg___024root___eval_settle(&(vlSymsp->TOP));
        Vtest_bsg___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vtest_bsg::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtest_bsg::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtest_bsg___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vtest_bsg___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vtest_bsg::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vtest_bsg::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vtest_bsg::final() {
    Vtest_bsg___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void Vtest_bsg___024root__trace_init_top(Vtest_bsg___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtest_bsg___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_bsg___024root*>(voidSelf);
    Vtest_bsg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vtest_bsg___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vtest_bsg___024root__trace_register(Vtest_bsg___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtest_bsg::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtest_bsg___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
