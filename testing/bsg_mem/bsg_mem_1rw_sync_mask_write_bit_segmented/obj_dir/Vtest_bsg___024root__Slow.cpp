// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_bsg.h for the primary calling header

#include "verilated.h"

#include "Vtest_bsg__Syms.h"
#include "Vtest_bsg___024root.h"

void Vtest_bsg___024root___ctor_var_reset(Vtest_bsg___024root* vlSelf);

Vtest_bsg___024root::Vtest_bsg___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtest_bsg___024root___ctor_var_reset(this);
}

void Vtest_bsg___024root::__Vconfigure(Vtest_bsg__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtest_bsg___024root::~Vtest_bsg___024root() {
}
