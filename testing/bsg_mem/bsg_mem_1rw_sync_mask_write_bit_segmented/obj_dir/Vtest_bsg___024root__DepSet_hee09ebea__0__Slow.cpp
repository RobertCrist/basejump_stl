// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtest_bsg.h for the primary calling header

#include "verilated.h"

#include "Vtest_bsg___024root.h"

VL_ATTR_COLD void Vtest_bsg___024root___final_TOP(Vtest_bsg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_bsg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bsg___024root___final_TOP\n"); );
    // Body
    VL_WRITEF("\nSimulation Ended! You can see results in output.log\n\n");
}

VL_ATTR_COLD void Vtest_bsg___024root___initial__TOP__0__PROF__test_bsg__l31(Vtest_bsg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_bsg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bsg___024root___initial__TOP__0__PROF__test_bsg__l31\n"); );
    // Body
    VL_WRITEF("===========================================================\ntesting bsg_mem_1rw_sync_mask_write_bit_segmented with ...\nWIDTH_P          : 32\nELS_P            : 0\nnum_segments_p   : 4\nsegment_width_lp : 8\n");
}

VL_ATTR_COLD void Vtest_bsg___024root___initial__TOP__6__PROF__test_bsg__l105(Vtest_bsg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_bsg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bsg___024root___initial__TOP__6__PROF__test_bsg__l105\n"); );
    // Body
    vlSelf->test_bsg__DOT__f = 0U;
}

VL_ATTR_COLD void Vtest_bsg___024root___initial__TOP__7__PROF__test_bsg__l107(Vtest_bsg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_bsg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bsg___024root___initial__TOP__7__PROF__test_bsg__l107\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h928c82a9__0;
    // Body
    __Vtemp_h928c82a9__0[0U] = 0x2e6c6f67U;
    __Vtemp_h928c82a9__0[1U] = 0x74707574U;
    __Vtemp_h928c82a9__0[2U] = 0x6f75U;
    vlSelf->test_bsg__DOT__f = VL_FOPEN_NN(VL_CVT_PACK_STR_NW(3, __Vtemp_h928c82a9__0)
                                           , std::string("w"));
}

VL_ATTR_COLD void Vtest_bsg___024root___settle__TOP__9__PROF__test_bsg__l102(Vtest_bsg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_bsg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bsg___024root___settle__TOP__9__PROF__test_bsg__l102\n"); );
    // Body
    vlSelf->test_bsg__DOT__expected_data = 0U;
}

VL_ATTR_COLD void Vtest_bsg___024root___settle__TOP__15__PROF__test_bsg__l160(Vtest_bsg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_bsg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bsg___024root___settle__TOP__15__PROF__test_bsg__l160\n"); );
    // Body
    vlSelf->test_bsg__DOT__actual_data_lo = (0xfffffffcU 
                                             & vlSelf->test_bsg__DOT__actual_data_lo);
}

VL_ATTR_COLD void Vtest_bsg___024root___settle__TOP__16__PROF__test_bsg__l160(Vtest_bsg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_bsg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bsg___024root___settle__TOP__16__PROF__test_bsg__l160\n"); );
    // Body
    vlSelf->test_bsg__DOT__actual_data_lo = (0xfffffff3U 
                                             & vlSelf->test_bsg__DOT__actual_data_lo);
}

VL_ATTR_COLD void Vtest_bsg___024root___settle__TOP__17__PROF__test_bsg__l160(Vtest_bsg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_bsg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bsg___024root___settle__TOP__17__PROF__test_bsg__l160\n"); );
    // Body
    vlSelf->test_bsg__DOT__actual_data_lo = (0xffffffcfU 
                                             & vlSelf->test_bsg__DOT__actual_data_lo);
}

VL_ATTR_COLD void Vtest_bsg___024root___settle__TOP__18__PROF__test_bsg__l160(Vtest_bsg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_bsg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bsg___024root___settle__TOP__18__PROF__test_bsg__l160\n"); );
    // Body
    vlSelf->test_bsg__DOT__actual_data_lo = (0xffffff3fU 
                                             & vlSelf->test_bsg__DOT__actual_data_lo);
}

VL_ATTR_COLD void Vtest_bsg___024root___settle__TOP__19__PROF__test_bsg__l160(Vtest_bsg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_bsg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bsg___024root___settle__TOP__19__PROF__test_bsg__l160\n"); );
    // Body
    vlSelf->test_bsg__DOT__actual_data_lo = (0xfffffcffU 
                                             & vlSelf->test_bsg__DOT__actual_data_lo);
}

VL_ATTR_COLD void Vtest_bsg___024root___settle__TOP__20__PROF__test_bsg__l160(Vtest_bsg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_bsg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bsg___024root___settle__TOP__20__PROF__test_bsg__l160\n"); );
    // Body
    vlSelf->test_bsg__DOT__actual_data_lo = (0xfffff3ffU 
                                             & vlSelf->test_bsg__DOT__actual_data_lo);
}

VL_ATTR_COLD void Vtest_bsg___024root___settle__TOP__21__PROF__test_bsg__l160(Vtest_bsg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_bsg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bsg___024root___settle__TOP__21__PROF__test_bsg__l160\n"); );
    // Body
    vlSelf->test_bsg__DOT__actual_data_lo = (0xffffcfffU 
                                             & vlSelf->test_bsg__DOT__actual_data_lo);
}

VL_ATTR_COLD void Vtest_bsg___024root___settle__TOP__22__PROF__test_bsg__l160(Vtest_bsg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_bsg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bsg___024root___settle__TOP__22__PROF__test_bsg__l160\n"); );
    // Body
    vlSelf->test_bsg__DOT__actual_data_lo = (0xffff3fffU 
                                             & vlSelf->test_bsg__DOT__actual_data_lo);
}

VL_ATTR_COLD void Vtest_bsg___024root___settle__TOP__23__PROF__test_bsg__l160(Vtest_bsg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_bsg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bsg___024root___settle__TOP__23__PROF__test_bsg__l160\n"); );
    // Body
    vlSelf->test_bsg__DOT__actual_data_lo = (0xfffcffffU 
                                             & vlSelf->test_bsg__DOT__actual_data_lo);
}

VL_ATTR_COLD void Vtest_bsg___024root___settle__TOP__24__PROF__test_bsg__l160(Vtest_bsg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_bsg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bsg___024root___settle__TOP__24__PROF__test_bsg__l160\n"); );
    // Body
    vlSelf->test_bsg__DOT__actual_data_lo = (0xfff3ffffU 
                                             & vlSelf->test_bsg__DOT__actual_data_lo);
}

VL_ATTR_COLD void Vtest_bsg___024root___settle__TOP__25__PROF__test_bsg__l160(Vtest_bsg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_bsg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bsg___024root___settle__TOP__25__PROF__test_bsg__l160\n"); );
    // Body
    vlSelf->test_bsg__DOT__actual_data_lo = (0xffcfffffU 
                                             & vlSelf->test_bsg__DOT__actual_data_lo);
}

VL_ATTR_COLD void Vtest_bsg___024root___settle__TOP__26__PROF__test_bsg__l160(Vtest_bsg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_bsg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bsg___024root___settle__TOP__26__PROF__test_bsg__l160\n"); );
    // Body
    vlSelf->test_bsg__DOT__actual_data_lo = (0xff3fffffU 
                                             & vlSelf->test_bsg__DOT__actual_data_lo);
}

VL_ATTR_COLD void Vtest_bsg___024root___settle__TOP__27__PROF__test_bsg__l160(Vtest_bsg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_bsg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bsg___024root___settle__TOP__27__PROF__test_bsg__l160\n"); );
    // Body
    vlSelf->test_bsg__DOT__actual_data_lo = (0xfcffffffU 
                                             & vlSelf->test_bsg__DOT__actual_data_lo);
}

VL_ATTR_COLD void Vtest_bsg___024root___settle__TOP__28__PROF__test_bsg__l160(Vtest_bsg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_bsg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bsg___024root___settle__TOP__28__PROF__test_bsg__l160\n"); );
    // Body
    vlSelf->test_bsg__DOT__actual_data_lo = (0xf3ffffffU 
                                             & vlSelf->test_bsg__DOT__actual_data_lo);
}

VL_ATTR_COLD void Vtest_bsg___024root___settle__TOP__29__PROF__test_bsg__l160(Vtest_bsg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_bsg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bsg___024root___settle__TOP__29__PROF__test_bsg__l160\n"); );
    // Body
    vlSelf->test_bsg__DOT__actual_data_lo = (0xcfffffffU 
                                             & vlSelf->test_bsg__DOT__actual_data_lo);
}

VL_ATTR_COLD void Vtest_bsg___024root___settle__TOP__30__PROF__test_bsg__l160(Vtest_bsg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_bsg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bsg___024root___settle__TOP__30__PROF__test_bsg__l160\n"); );
    // Body
    vlSelf->test_bsg__DOT__actual_data_lo = (0x3fffffffU 
                                             & vlSelf->test_bsg__DOT__actual_data_lo);
}

VL_ATTR_COLD void Vtest_bsg___024root___initial__TOP__1__PROF__bsg_mem_1rw_sync_mask_write_bit__l61(Vtest_bsg___024root* vlSelf);
VL_ATTR_COLD void Vtest_bsg___024root___initial__TOP__2__PROF__bsg_mem_1rw_sync_mask_write_bit__l61(Vtest_bsg___024root* vlSelf);
VL_ATTR_COLD void Vtest_bsg___024root___initial__TOP__3__PROF__bsg_mem_1rw_sync_mask_write_bit__l61(Vtest_bsg___024root* vlSelf);
VL_ATTR_COLD void Vtest_bsg___024root___initial__TOP__4__PROF__bsg_mem_1rw_sync_mask_write_bit__l61(Vtest_bsg___024root* vlSelf);
VL_ATTR_COLD void Vtest_bsg___024root___initial__TOP__5__PROF__bsg_mem_1rw_sync_mask_write_bit__l61(Vtest_bsg___024root* vlSelf);

VL_ATTR_COLD void Vtest_bsg___024root___eval_initial(Vtest_bsg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_bsg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bsg___024root___eval_initial\n"); );
    // Body
    Vtest_bsg___024root___initial__TOP__0__PROF__test_bsg__l31(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vtest_bsg___024root___initial__TOP__1__PROF__bsg_mem_1rw_sync_mask_write_bit__l61(vlSelf);
    Vtest_bsg___024root___initial__TOP__2__PROF__bsg_mem_1rw_sync_mask_write_bit__l61(vlSelf);
    Vtest_bsg___024root___initial__TOP__3__PROF__bsg_mem_1rw_sync_mask_write_bit__l61(vlSelf);
    Vtest_bsg___024root___initial__TOP__4__PROF__bsg_mem_1rw_sync_mask_write_bit__l61(vlSelf);
    Vtest_bsg___024root___initial__TOP__5__PROF__bsg_mem_1rw_sync_mask_write_bit__l61(vlSelf);
    Vtest_bsg___024root___initial__TOP__6__PROF__test_bsg__l105(vlSelf);
    Vtest_bsg___024root___initial__TOP__7__PROF__test_bsg__l107(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__test_bsg__DOT__reset = vlSelf->test_bsg__DOT__reset;
}

void Vtest_bsg___024root___combo__TOP__0__PROF__bsg_mem_1rw_sync_mask_write_bit_segmented__l52(Vtest_bsg___024root* vlSelf);
void Vtest_bsg___024root___combo__TOP__1__PROF__bsg_mem_1rw_sync_mask_write_bit_segmented__l52(Vtest_bsg___024root* vlSelf);
void Vtest_bsg___024root___combo__TOP__2__PROF__bsg_mem_1rw_sync_mask_write_bit_segmented__l52(Vtest_bsg___024root* vlSelf);
void Vtest_bsg___024root___combo__TOP__3__PROF__bsg_mem_1rw_sync_mask_write_bit_segmented__l52(Vtest_bsg___024root* vlSelf);
void Vtest_bsg___024root___combo__TOP__4__PROF__bsg_mem_1rw_sync_mask_write_bit_segmented__l52(Vtest_bsg___024root* vlSelf);
void Vtest_bsg___024root___combo__TOP__5__PROF__bsg_mem_1rw_sync_mask_write_bit_segmented__l52(Vtest_bsg___024root* vlSelf);
void Vtest_bsg___024root___combo__TOP__6__PROF__bsg_mem_1rw_sync_mask_write_bit_segmented__l52(Vtest_bsg___024root* vlSelf);
void Vtest_bsg___024root___combo__TOP__7__PROF__bsg_mem_1rw_sync_mask_write_bit_segmented__l52(Vtest_bsg___024root* vlSelf);
void Vtest_bsg___024root___combo__TOP__8__PROF__bsg_mem_1rw_sync_mask_write_bit_segmented__l52(Vtest_bsg___024root* vlSelf);
void Vtest_bsg___024root___combo__TOP__25__PROF__test_bsg__l130(Vtest_bsg___024root* vlSelf);
void Vtest_bsg___024root___combo__TOP__26__PROF__test_bsg__l130(Vtest_bsg___024root* vlSelf);
void Vtest_bsg___024root___sequent__TOP__26__PROF__bsg_nonsynth_reset_gen__l45(Vtest_bsg___024root* vlSelf);
void Vtest_bsg___024root___sequent__TOP__27__PROF__bsg_nonsynth_reset_gen__l46(Vtest_bsg___024root* vlSelf);
void Vtest_bsg___024root___sequent__TOP__28__PROF__bsg_nonsynth_reset_gen__l55(Vtest_bsg___024root* vlSelf);

VL_ATTR_COLD void Vtest_bsg___024root___eval_settle(Vtest_bsg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_bsg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bsg___024root___eval_settle\n"); );
    // Body
    Vtest_bsg___024root___combo__TOP__0__PROF__bsg_mem_1rw_sync_mask_write_bit_segmented__l52(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vtest_bsg___024root___combo__TOP__1__PROF__bsg_mem_1rw_sync_mask_write_bit_segmented__l52(vlSelf);
    Vtest_bsg___024root___combo__TOP__2__PROF__bsg_mem_1rw_sync_mask_write_bit_segmented__l52(vlSelf);
    Vtest_bsg___024root___combo__TOP__3__PROF__bsg_mem_1rw_sync_mask_write_bit_segmented__l52(vlSelf);
    Vtest_bsg___024root___combo__TOP__4__PROF__bsg_mem_1rw_sync_mask_write_bit_segmented__l52(vlSelf);
    Vtest_bsg___024root___combo__TOP__5__PROF__bsg_mem_1rw_sync_mask_write_bit_segmented__l52(vlSelf);
    Vtest_bsg___024root___combo__TOP__6__PROF__bsg_mem_1rw_sync_mask_write_bit_segmented__l52(vlSelf);
    Vtest_bsg___024root___combo__TOP__7__PROF__bsg_mem_1rw_sync_mask_write_bit_segmented__l52(vlSelf);
    Vtest_bsg___024root___combo__TOP__8__PROF__bsg_mem_1rw_sync_mask_write_bit_segmented__l52(vlSelf);
    Vtest_bsg___024root___settle__TOP__9__PROF__test_bsg__l102(vlSelf);
    Vtest_bsg___024root___combo__TOP__25__PROF__test_bsg__l130(vlSelf);
    Vtest_bsg___024root___combo__TOP__26__PROF__test_bsg__l130(vlSelf);
    Vtest_bsg___024root___sequent__TOP__26__PROF__bsg_nonsynth_reset_gen__l45(vlSelf);
    Vtest_bsg___024root___sequent__TOP__27__PROF__bsg_nonsynth_reset_gen__l46(vlSelf);
    Vtest_bsg___024root___sequent__TOP__28__PROF__bsg_nonsynth_reset_gen__l55(vlSelf);
    Vtest_bsg___024root___settle__TOP__15__PROF__test_bsg__l160(vlSelf);
    Vtest_bsg___024root___settle__TOP__16__PROF__test_bsg__l160(vlSelf);
    Vtest_bsg___024root___settle__TOP__17__PROF__test_bsg__l160(vlSelf);
    Vtest_bsg___024root___settle__TOP__18__PROF__test_bsg__l160(vlSelf);
    Vtest_bsg___024root___settle__TOP__19__PROF__test_bsg__l160(vlSelf);
    Vtest_bsg___024root___settle__TOP__20__PROF__test_bsg__l160(vlSelf);
    Vtest_bsg___024root___settle__TOP__21__PROF__test_bsg__l160(vlSelf);
    Vtest_bsg___024root___settle__TOP__22__PROF__test_bsg__l160(vlSelf);
    Vtest_bsg___024root___settle__TOP__23__PROF__test_bsg__l160(vlSelf);
    Vtest_bsg___024root___settle__TOP__24__PROF__test_bsg__l160(vlSelf);
    Vtest_bsg___024root___settle__TOP__25__PROF__test_bsg__l160(vlSelf);
    Vtest_bsg___024root___settle__TOP__26__PROF__test_bsg__l160(vlSelf);
    Vtest_bsg___024root___settle__TOP__27__PROF__test_bsg__l160(vlSelf);
    Vtest_bsg___024root___settle__TOP__28__PROF__test_bsg__l160(vlSelf);
    Vtest_bsg___024root___settle__TOP__29__PROF__test_bsg__l160(vlSelf);
    Vtest_bsg___024root___settle__TOP__30__PROF__test_bsg__l160(vlSelf);
}

VL_ATTR_COLD void Vtest_bsg___024root___final(Vtest_bsg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_bsg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bsg___024root___final\n"); );
    // Body
    Vtest_bsg___024root___final_TOP(vlSelf);
}

VL_ATTR_COLD void Vtest_bsg___024root___ctor_var_reset(Vtest_bsg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_bsg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bsg___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->v_i = VL_RAND_RESET_I(4);
    vlSelf->w_i = VL_RAND_RESET_I(1);
    vlSelf->test_bsg__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->test_bsg__DOT__test_input_addr = VL_RAND_RESET_I(1);
    vlSelf->test_bsg__DOT__expected_data = VL_RAND_RESET_I(32);
    vlSelf->test_bsg__DOT____Vcellout__random_data_gen__data_o = VL_RAND_RESET_I(32);
    vlSelf->test_bsg__DOT__f = 0;
    vlSelf->test_bsg__DOT__read_en = VL_RAND_RESET_I(4);
    vlSelf->test_bsg__DOT__read_en_r = VL_RAND_RESET_I(4);
    vlSelf->test_bsg__DOT__count = VL_RAND_RESET_I(2);
    vlSelf->test_bsg__DOT__actual_data_lo = VL_RAND_RESET_I(32);
    vlSelf->test_bsg__DOT__reset_gen__DOT__ctr_lo_r = 0;
    vlSelf->test_bsg__DOT__reset_gen__DOT__ctr_hi_r = 0;
    vlSelf->test_bsg__DOT__reset_gen__DOT__phase_lo_r = 0;
    vlSelf->test_bsg__DOT__reset_gen__DOT__phase_hi_r = 0;
    vlSelf->test_bsg__DOT__DUT__DOT__w_mask_lo = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__test_bsg__DOT__count = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__test_bsg__DOT__reset_gen__DOT__ctr_lo_r = 0;
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
