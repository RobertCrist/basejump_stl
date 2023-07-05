// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_bsg.h for the primary calling header

#include "verilated.h"

#include "Vtest_bsg__Syms.h"
#include "Vtest_bsg___024root.h"

VL_INLINE_OPT void Vtest_bsg___024root___sequent__TOP__9__PROF__test_bsg__l164(Vtest_bsg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_bsg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bsg___024root___sequent__TOP__9__PROF__test_bsg__l164\n"); );
    // Body
    if ((0U != (IData)(vlSelf->test_bsg__DOT__read_en_r))) {
        if (VL_LIKELY((vlSelf->test_bsg__DOT__expected_data 
                       == vlSelf->test_bsg__DOT__actual_data_lo))) {
            VL_FWRITEF(vlSelf->test_bsg__DOT__f,"[FOUND MATCH][NO LLR] At time %^ --> expected_data : 0x%x | actual_data : 0x%x\n",
                       64,VL_TIME_UNITED_D(1),-12,32,
                       vlSelf->test_bsg__DOT__expected_data,
                       32,vlSelf->test_bsg__DOT__actual_data_lo);
        } else {
            VL_WRITEF("[%0t] %%Error: test_bsg.v:170: Assertion failed in %Ntest_bsg: \n[FOUND MISMATCH][NO LLR] At time %0^ --> expected_data : 0x%0x | actual_data : 0x0\n",
                      64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                      64,VL_TIME_UNITED_D(1),-12,32,
                      vlSelf->test_bsg__DOT__expected_data);
            VL_STOP_MT("test_bsg.v", 170, "");
        }
    }
}
