// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest_bsg.h for the primary calling header

#ifndef VERILATED_VTEST_BSG___024ROOT_H_
#define VERILATED_VTEST_BSG___024ROOT_H_  // guard

#include "verilated.h"

class Vtest_bsg__Syms;
VL_MODULE(Vtest_bsg___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    CData/*0:0*/ test_bsg__DOT__reset;
    VL_IN8(v_i,3,0);
    VL_IN8(w_i,0,0);
    CData/*0:0*/ test_bsg__DOT__test_input_addr;
    IData/*31:0*/ test_bsg__DOT__expected_data;
    CData/*3:0*/ test_bsg__DOT__read_en;
    CData/*3:0*/ test_bsg__DOT__read_en_r;
    CData/*1:0*/ test_bsg__DOT__count;
    IData/*31:0*/ test_bsg__DOT__actual_data_lo;
    CData/*0:0*/ test_bsg__DOT__reset_gen__DOT__ctr_lo_r;
    CData/*3:0*/ test_bsg__DOT__reset_gen__DOT__ctr_hi_r;
    CData/*0:0*/ test_bsg__DOT__reset_gen__DOT__phase_lo_r;
    CData/*0:0*/ test_bsg__DOT__reset_gen__DOT__phase_hi_r;
    IData/*31:0*/ test_bsg__DOT__DUT__DOT__w_mask_lo;
    CData/*1:0*/ __Vdly__test_bsg__DOT__count;
    CData/*0:0*/ __Vdly__test_bsg__DOT__reset_gen__DOT__ctr_lo_r;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__test_bsg__DOT__reset;
    IData/*31:0*/ test_bsg__DOT____Vcellout__random_data_gen__data_o;
    IData/*31:0*/ test_bsg__DOT__f;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtest_bsg__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vtest_bsg___024root(const char* name);
    ~Vtest_bsg___024root();
    VL_UNCOPYABLE(Vtest_bsg___024root);

    // INTERNAL METHODS
    void __Vconfigure(Vtest_bsg__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
