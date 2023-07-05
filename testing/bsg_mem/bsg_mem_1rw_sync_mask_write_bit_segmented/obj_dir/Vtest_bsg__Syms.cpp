// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtest_bsg__Syms.h"
#include "Vtest_bsg.h"
#include "Vtest_bsg___024root.h"

// FUNCTIONS
Vtest_bsg__Syms::~Vtest_bsg__Syms()
{
}

Vtest_bsg__Syms::Vtest_bsg__Syms(VerilatedContext* contextp, const char* namep,Vtest_bsg* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP(namep)
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
    // Setup scopes
    __Vscope_test_bsg.configure(this, name(), "test_bsg", "test_bsg", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_test_bsg__DUT__bank.configure(this, name(), "test_bsg.DUT.bank", "bank", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_test_bsg__bank__BRA__0__KET__.configure(this, name(), "test_bsg.bank[0]", "bank[0]", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_test_bsg__bank__BRA__1__KET__.configure(this, name(), "test_bsg.bank[1]", "bank[1]", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_test_bsg__bank__BRA__2__KET__.configure(this, name(), "test_bsg.bank[2]", "bank[2]", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_test_bsg__bank__BRA__3__KET__.configure(this, name(), "test_bsg.bank[3]", "bank[3]", -12, VerilatedScope::SCOPE_OTHER);
}
