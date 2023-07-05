// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest_bsg__Syms.h"


void Vtest_bsg___024root__trace_chg_sub_0(Vtest_bsg___024root* vlSelf, VerilatedVcd* tracep);

void Vtest_bsg___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bsg___024root__trace_chg_top_0\n"); );
    // Init
    Vtest_bsg___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_bsg___024root*>(voidSelf);
    Vtest_bsg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtest_bsg___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void Vtest_bsg___024root__trace_chg_sub_0(Vtest_bsg___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_bsg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bsg___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        tracep->chgIData(oldp+0,(vlSelf->test_bsg__DOT__expected_data),32);
        tracep->chgIData(oldp+1,(vlSelf->test_bsg__DOT__f),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgCData(oldp+2,(vlSelf->test_bsg__DOT__read_en),4);
        tracep->chgIData(oldp+3,(vlSelf->test_bsg__DOT__actual_data_lo),32);
        tracep->chgIData(oldp+4,(vlSelf->test_bsg__DOT__DUT__DOT__w_mask_lo),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgIData(oldp+5,(vlSelf->test_bsg__DOT____Vcellout__random_data_gen__data_o),32);
        tracep->chgBit(oldp+6,(vlSelf->test_bsg__DOT__test_input_addr));
        tracep->chgCData(oldp+7,(vlSelf->test_bsg__DOT__read_en_r),4);
        tracep->chgCData(oldp+8,(vlSelf->test_bsg__DOT__count),2);
        tracep->chgCData(oldp+9,((0xffU & vlSelf->test_bsg__DOT____Vcellout__random_data_gen__data_o)),8);
        tracep->chgCData(oldp+10,((0xffU & (vlSelf->test_bsg__DOT____Vcellout__random_data_gen__data_o 
                                            >> 8U))),8);
        tracep->chgCData(oldp+11,((0xffU & (vlSelf->test_bsg__DOT____Vcellout__random_data_gen__data_o 
                                            >> 0x10U))),8);
        tracep->chgCData(oldp+12,((vlSelf->test_bsg__DOT____Vcellout__random_data_gen__data_o 
                                   >> 0x18U)),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        tracep->chgBit(oldp+13,(vlSelf->test_bsg__DOT__reset));
        tracep->chgBit(oldp+14,(vlSelf->test_bsg__DOT__reset_gen__DOT__ctr_lo_r));
        tracep->chgCData(oldp+15,(vlSelf->test_bsg__DOT__reset_gen__DOT__ctr_hi_r),4);
        tracep->chgBit(oldp+16,(vlSelf->test_bsg__DOT__reset_gen__DOT__ctr_lo_r));
        tracep->chgBit(oldp+17,((0xaU == (IData)(vlSelf->test_bsg__DOT__reset_gen__DOT__ctr_hi_r))));
    }
    tracep->chgBit(oldp+18,(vlSelf->clk));
    tracep->chgCData(oldp+19,(vlSelf->v_i),4);
    tracep->chgBit(oldp+20,(vlSelf->w_i));
    tracep->chgBit(oldp+21,((0U != (IData)(vlSelf->v_i))));
    tracep->chgBit(oldp+22,(((IData)(vlSelf->clk) & 
                             ((0xffffffffU == vlSelf->test_bsg__DOT____Vcellout__random_data_gen__data_o) 
                              & ((IData)(vlSelf->test_bsg__DOT__test_input_addr) 
                                 & ((0U != (IData)(vlSelf->v_i)) 
                                    & ((0xffffffffU 
                                        == vlSelf->test_bsg__DOT__DUT__DOT__w_mask_lo) 
                                       & (IData)(vlSelf->w_i))))))));
    tracep->chgBit(oldp+23,((1U & (IData)(vlSelf->v_i))));
    tracep->chgBit(oldp+24,((1U & ((IData)(vlSelf->v_i) 
                                   >> 1U))));
    tracep->chgBit(oldp+25,((1U & ((IData)(vlSelf->v_i) 
                                   >> 2U))));
    tracep->chgBit(oldp+26,((1U & ((IData)(vlSelf->v_i) 
                                   >> 3U))));
}

void Vtest_bsg___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bsg___024root__trace_cleanup\n"); );
    // Init
    Vtest_bsg___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_bsg___024root*>(voidSelf);
    Vtest_bsg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
