// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTEST_BSG__SYMS_H_
#define VERILATED_VTEST_BSG__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtest_bsg.h"

// INCLUDE MODULE CLASSES
#include "Vtest_bsg___024root.h"

// SYMS CLASS (contains all model state)
class Vtest_bsg__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtest_bsg* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtest_bsg___024root            TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_test_bsg;
    VerilatedScope __Vscope_test_bsg__DUT__bank;
    VerilatedScope __Vscope_test_bsg__bank__BRA__0__KET__;
    VerilatedScope __Vscope_test_bsg__bank__BRA__1__KET__;
    VerilatedScope __Vscope_test_bsg__bank__BRA__2__KET__;
    VerilatedScope __Vscope_test_bsg__bank__BRA__3__KET__;

    // CONSTRUCTORS
    Vtest_bsg__Syms(VerilatedContext* contextp, const char* namep, Vtest_bsg* modelp);
    ~Vtest_bsg__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
