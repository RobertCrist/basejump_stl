// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtest_bsg__Syms.h"


VL_ATTR_COLD void Vtest_bsg___024root__trace_init_sub__TOP__0(Vtest_bsg___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_bsg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bsg___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+19,"clk", false,-1);
    tracep->declBus(c+20,"v_i", false,-1, 3,0);
    tracep->declBit(c+21,"w_i", false,-1);
    tracep->pushNamePrefix("test_bsg ");
    tracep->declBus(c+28,"width_p", false,-1, 31,0);
    tracep->declBus(c+29,"els_p", false,-1, 31,0);
    tracep->declBus(c+30,"seed_p", false,-1, 31,0);
    tracep->declBus(c+31,"num_segments_p", false,-1, 31,0);
    tracep->declBus(c+29,"latch_last_read_p", false,-1, 31,0);
    tracep->declBus(c+32,"reset_cycles_lo_p", false,-1, 31,0);
    tracep->declBus(c+33,"reset_cycles_hi_p", false,-1, 31,0);
    tracep->declBus(c+34,"segment_width_lp", false,-1, 31,0);
    tracep->declBus(c+32,"lg_els_lp", false,-1, 31,0);
    tracep->declBit(c+19,"clk", false,-1);
    tracep->declBus(c+20,"v_i", false,-1, 3,0);
    tracep->declBit(c+21,"w_i", false,-1);
    tracep->declBit(c+14,"reset", false,-1);
    tracep->declBus(c+35,"w_mask_i", false,-1, 31,0);
    tracep->declBus(c+6,"test_input_data", false,-1, 31,0);
    tracep->declBus(c+36,"actual_data", false,-1, 31,0);
    tracep->declBus(c+7,"test_input_addr", false,-1, 0,0);
    tracep->declBus(c+1,"expected_data", false,-1, 31,0);
    tracep->declBus(c+2,"f", false,-1, 31,0);
    tracep->declBus(c+3,"read_en", false,-1, 3,0);
    tracep->declBus(c+8,"read_en_r", false,-1, 3,0);
    tracep->declBus(c+9,"count", false,-1, 1,0);
    tracep->declBus(c+4,"actual_data_lo", false,-1, 31,0);
    tracep->pushNamePrefix("DUT ");
    tracep->declBus(c+28,"width_p", false,-1, 31,0);
    tracep->declBus(c+29,"els_p", false,-1, 31,0);
    tracep->declBus(c+29,"latch_last_read_p", false,-1, 31,0);
    tracep->declBus(c+31,"num_segments_p", false,-1, 31,0);
    tracep->declBus(c+34,"segment_width_lp", false,-1, 31,0);
    tracep->declBus(c+32,"lg_els_lp", false,-1, 31,0);
    tracep->declBit(c+19,"clk_i", false,-1);
    tracep->declBit(c+14,"reset_i", false,-1);
    tracep->declBus(c+20,"v_i", false,-1, 3,0);
    tracep->declBit(c+21,"w_i", false,-1);
    tracep->declBus(c+37,"w_mask_i", false,-1, 31,0);
    tracep->declBus(c+6,"data_i", false,-1, 31,0);
    tracep->declBus(c+7,"addr_i", false,-1, 0,0);
    tracep->declBus(c+36,"data_o", false,-1, 31,0);
    tracep->declBus(c+5,"w_mask_lo", false,-1, 31,0);
    tracep->declBus(c+36,"data_lo", false,-1, 31,0);
    tracep->pushNamePrefix("bank ");
    tracep->declBus(c+28,"width_p", false,-1, 31,0);
    tracep->declBus(c+29,"els_p", false,-1, 31,0);
    tracep->declBus(c+38,"latch_last_read_p", false,-1, 0,0);
    tracep->declBus(c+29,"enable_clock_gating_p", false,-1, 31,0);
    tracep->declBus(c+32,"addr_width_lp", false,-1, 31,0);
    tracep->declBit(c+19,"clk_i", false,-1);
    tracep->declBit(c+14,"reset_i", false,-1);
    tracep->declBus(c+6,"data_i", false,-1, 31,0);
    tracep->declBus(c+7,"addr_i", false,-1, 0,0);
    tracep->declBit(c+22,"v_i", false,-1);
    tracep->declBus(c+5,"w_mask_i", false,-1, 31,0);
    tracep->declBit(c+21,"w_i", false,-1);
    tracep->declBus(c+36,"data_o", false,-1, 31,0);
    tracep->declBit(c+19,"clk_lo", false,-1);
    tracep->pushNamePrefix("synth ");
    tracep->declBus(c+28,"width_p", false,-1, 31,0);
    tracep->declBus(c+29,"els_p", false,-1, 31,0);
    tracep->declBus(c+38,"latch_last_read_p", false,-1, 0,0);
    tracep->declBus(c+32,"addr_width_lp", false,-1, 31,0);
    tracep->declBit(c+19,"clk_i", false,-1);
    tracep->declBit(c+14,"reset_i", false,-1);
    tracep->declBus(c+6,"data_i", false,-1, 31,0);
    tracep->declBus(c+7,"addr_i", false,-1, 0,0);
    tracep->declBit(c+22,"v_i", false,-1);
    tracep->declBus(c+5,"w_mask_i", false,-1, 31,0);
    tracep->declBit(c+21,"w_i", false,-1);
    tracep->declBus(c+36,"data_o", false,-1, 31,0);
    tracep->declBit(c+14,"unused", false,-1);
    tracep->pushNamePrefix("z ");
    tracep->declBit(c+23,"unused0", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk1[0] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[1] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[2] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk1[3] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bank[0] ");
    tracep->declBus(c+34,"width_p", false,-1, 31,0);
    tracep->declBus(c+29,"els_p", false,-1, 31,0);
    tracep->declBus(c+29,"latch_last_read_p", false,-1, 31,0);
    tracep->declBus(c+29,"enable_clock_gating_p", false,-1, 31,0);
    tracep->declBus(c+32,"addr_width_lp", false,-1, 31,0);
    tracep->declBit(c+19,"clk_i", false,-1);
    tracep->declBit(c+14,"reset_i", false,-1);
    tracep->declBus(c+10,"data_i", false,-1, 7,0);
    tracep->declBus(c+7,"addr_i", false,-1, 0,0);
    tracep->declBit(c+24,"v_i", false,-1);
    tracep->declBus(c+39,"w_mask_i", false,-1, 7,0);
    tracep->declBit(c+21,"w_i", false,-1);
    tracep->declBus(c+40,"data_o", false,-1, 7,0);
    tracep->declBit(c+19,"clk_lo", false,-1);
    tracep->pushNamePrefix("synth ");
    tracep->declBus(c+34,"width_p", false,-1, 31,0);
    tracep->declBus(c+29,"els_p", false,-1, 31,0);
    tracep->declBus(c+29,"latch_last_read_p", false,-1, 31,0);
    tracep->declBus(c+32,"addr_width_lp", false,-1, 31,0);
    tracep->declBit(c+19,"clk_i", false,-1);
    tracep->declBit(c+14,"reset_i", false,-1);
    tracep->declBus(c+10,"data_i", false,-1, 7,0);
    tracep->declBus(c+7,"addr_i", false,-1, 0,0);
    tracep->declBit(c+24,"v_i", false,-1);
    tracep->declBus(c+39,"w_mask_i", false,-1, 7,0);
    tracep->declBit(c+21,"w_i", false,-1);
    tracep->declBus(c+40,"data_o", false,-1, 7,0);
    tracep->declBit(c+14,"unused", false,-1);
    tracep->pushNamePrefix("z ");
    tracep->declBit(c+41,"unused0", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bank[1] ");
    tracep->declBus(c+34,"width_p", false,-1, 31,0);
    tracep->declBus(c+29,"els_p", false,-1, 31,0);
    tracep->declBus(c+29,"latch_last_read_p", false,-1, 31,0);
    tracep->declBus(c+29,"enable_clock_gating_p", false,-1, 31,0);
    tracep->declBus(c+32,"addr_width_lp", false,-1, 31,0);
    tracep->declBit(c+19,"clk_i", false,-1);
    tracep->declBit(c+14,"reset_i", false,-1);
    tracep->declBus(c+11,"data_i", false,-1, 7,0);
    tracep->declBus(c+7,"addr_i", false,-1, 0,0);
    tracep->declBit(c+25,"v_i", false,-1);
    tracep->declBus(c+42,"w_mask_i", false,-1, 7,0);
    tracep->declBit(c+21,"w_i", false,-1);
    tracep->declBus(c+40,"data_o", false,-1, 7,0);
    tracep->declBit(c+19,"clk_lo", false,-1);
    tracep->pushNamePrefix("synth ");
    tracep->declBus(c+34,"width_p", false,-1, 31,0);
    tracep->declBus(c+29,"els_p", false,-1, 31,0);
    tracep->declBus(c+29,"latch_last_read_p", false,-1, 31,0);
    tracep->declBus(c+32,"addr_width_lp", false,-1, 31,0);
    tracep->declBit(c+19,"clk_i", false,-1);
    tracep->declBit(c+14,"reset_i", false,-1);
    tracep->declBus(c+11,"data_i", false,-1, 7,0);
    tracep->declBus(c+7,"addr_i", false,-1, 0,0);
    tracep->declBit(c+25,"v_i", false,-1);
    tracep->declBus(c+42,"w_mask_i", false,-1, 7,0);
    tracep->declBit(c+21,"w_i", false,-1);
    tracep->declBus(c+40,"data_o", false,-1, 7,0);
    tracep->declBit(c+14,"unused", false,-1);
    tracep->pushNamePrefix("z ");
    tracep->declBit(c+41,"unused0", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bank[2] ");
    tracep->declBus(c+34,"width_p", false,-1, 31,0);
    tracep->declBus(c+29,"els_p", false,-1, 31,0);
    tracep->declBus(c+29,"latch_last_read_p", false,-1, 31,0);
    tracep->declBus(c+29,"enable_clock_gating_p", false,-1, 31,0);
    tracep->declBus(c+32,"addr_width_lp", false,-1, 31,0);
    tracep->declBit(c+19,"clk_i", false,-1);
    tracep->declBit(c+14,"reset_i", false,-1);
    tracep->declBus(c+12,"data_i", false,-1, 7,0);
    tracep->declBus(c+7,"addr_i", false,-1, 0,0);
    tracep->declBit(c+26,"v_i", false,-1);
    tracep->declBus(c+43,"w_mask_i", false,-1, 7,0);
    tracep->declBit(c+21,"w_i", false,-1);
    tracep->declBus(c+40,"data_o", false,-1, 7,0);
    tracep->declBit(c+19,"clk_lo", false,-1);
    tracep->pushNamePrefix("synth ");
    tracep->declBus(c+34,"width_p", false,-1, 31,0);
    tracep->declBus(c+29,"els_p", false,-1, 31,0);
    tracep->declBus(c+29,"latch_last_read_p", false,-1, 31,0);
    tracep->declBus(c+32,"addr_width_lp", false,-1, 31,0);
    tracep->declBit(c+19,"clk_i", false,-1);
    tracep->declBit(c+14,"reset_i", false,-1);
    tracep->declBus(c+12,"data_i", false,-1, 7,0);
    tracep->declBus(c+7,"addr_i", false,-1, 0,0);
    tracep->declBit(c+26,"v_i", false,-1);
    tracep->declBus(c+43,"w_mask_i", false,-1, 7,0);
    tracep->declBit(c+21,"w_i", false,-1);
    tracep->declBus(c+40,"data_o", false,-1, 7,0);
    tracep->declBit(c+14,"unused", false,-1);
    tracep->pushNamePrefix("z ");
    tracep->declBit(c+41,"unused0", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bank[3] ");
    tracep->declBus(c+34,"width_p", false,-1, 31,0);
    tracep->declBus(c+29,"els_p", false,-1, 31,0);
    tracep->declBus(c+29,"latch_last_read_p", false,-1, 31,0);
    tracep->declBus(c+29,"enable_clock_gating_p", false,-1, 31,0);
    tracep->declBus(c+32,"addr_width_lp", false,-1, 31,0);
    tracep->declBit(c+19,"clk_i", false,-1);
    tracep->declBit(c+14,"reset_i", false,-1);
    tracep->declBus(c+13,"data_i", false,-1, 7,0);
    tracep->declBus(c+7,"addr_i", false,-1, 0,0);
    tracep->declBit(c+27,"v_i", false,-1);
    tracep->declBus(c+44,"w_mask_i", false,-1, 7,0);
    tracep->declBit(c+21,"w_i", false,-1);
    tracep->declBus(c+40,"data_o", false,-1, 7,0);
    tracep->declBit(c+19,"clk_lo", false,-1);
    tracep->pushNamePrefix("synth ");
    tracep->declBus(c+34,"width_p", false,-1, 31,0);
    tracep->declBus(c+29,"els_p", false,-1, 31,0);
    tracep->declBus(c+29,"latch_last_read_p", false,-1, 31,0);
    tracep->declBus(c+32,"addr_width_lp", false,-1, 31,0);
    tracep->declBit(c+19,"clk_i", false,-1);
    tracep->declBit(c+14,"reset_i", false,-1);
    tracep->declBus(c+13,"data_i", false,-1, 7,0);
    tracep->declBus(c+7,"addr_i", false,-1, 0,0);
    tracep->declBit(c+27,"v_i", false,-1);
    tracep->declBus(c+44,"w_mask_i", false,-1, 7,0);
    tracep->declBit(c+21,"w_i", false,-1);
    tracep->declBus(c+40,"data_o", false,-1, 7,0);
    tracep->declBit(c+14,"unused", false,-1);
    tracep->pushNamePrefix("z ");
    tracep->declBit(c+41,"unused0", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("genblk2[0] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk2[1] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk2[2] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("genblk2[3] ");
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("random_addr_gen ");
    tracep->declBus(c+32,"width_p", false,-1, 31,0);
    tracep->declBus(c+30,"seed_p", false,-1, 31,0);
    tracep->declBit(c+19,"clk_i", false,-1);
    tracep->declBit(c+14,"reset_i", false,-1);
    tracep->declBit(c+45,"yumi_i", false,-1);
    tracep->declBus(c+7,"data_o", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("random_data_gen ");
    tracep->declBus(c+28,"width_p", false,-1, 31,0);
    tracep->declBus(c+30,"seed_p", false,-1, 31,0);
    tracep->declBit(c+19,"clk_i", false,-1);
    tracep->declBit(c+14,"reset_i", false,-1);
    tracep->declBit(c+45,"yumi_i", false,-1);
    tracep->declBus(c+6,"data_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("reset_gen ");
    tracep->declBus(c+32,"num_clocks_p", false,-1, 31,0);
    tracep->declBus(c+32,"reset_cycles_lo_p", false,-1, 31,0);
    tracep->declBus(c+33,"reset_cycles_hi_p", false,-1, 31,0);
    tracep->declBus(c+19,"clk_i", false,-1, 0,0);
    tracep->declBit(c+14,"async_reset_o", false,-1);
    tracep->declBus(c+15,"ctr_lo_r", false,-1, 0,0);
    tracep->declBus(c+16,"ctr_hi_r", false,-1, 3,0);
    tracep->declBus(c+17,"phase_lo_r", false,-1, 0,0);
    tracep->declBus(c+18,"phase_hi_r", false,-1, 0,0);
    tracep->declBit(c+17,"in_phase_1", false,-1);
    tracep->declBit(c+18,"in_phase_2", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtest_bsg___024root__trace_init_top(Vtest_bsg___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_bsg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bsg___024root__trace_init_top\n"); );
    // Body
    Vtest_bsg___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtest_bsg___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vtest_bsg___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vtest_bsg___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtest_bsg___024root__trace_register(Vtest_bsg___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_bsg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bsg___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtest_bsg___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtest_bsg___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtest_bsg___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtest_bsg___024root__trace_full_sub_0(Vtest_bsg___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtest_bsg___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bsg___024root__trace_full_top_0\n"); );
    // Init
    Vtest_bsg___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtest_bsg___024root*>(voidSelf);
    Vtest_bsg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtest_bsg___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void Vtest_bsg___024root__trace_full_sub_0(Vtest_bsg___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest_bsg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtest_bsg___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullIData(oldp+1,(vlSelf->test_bsg__DOT__expected_data),32);
    tracep->fullIData(oldp+2,(vlSelf->test_bsg__DOT__f),32);
    tracep->fullCData(oldp+3,(vlSelf->test_bsg__DOT__read_en),4);
    tracep->fullIData(oldp+4,(vlSelf->test_bsg__DOT__actual_data_lo),32);
    tracep->fullIData(oldp+5,(vlSelf->test_bsg__DOT__DUT__DOT__w_mask_lo),32);
    tracep->fullIData(oldp+6,(vlSelf->test_bsg__DOT____Vcellout__random_data_gen__data_o),32);
    tracep->fullBit(oldp+7,(vlSelf->test_bsg__DOT__test_input_addr));
    tracep->fullCData(oldp+8,(vlSelf->test_bsg__DOT__read_en_r),4);
    tracep->fullCData(oldp+9,(vlSelf->test_bsg__DOT__count),2);
    tracep->fullCData(oldp+10,((0xffU & vlSelf->test_bsg__DOT____Vcellout__random_data_gen__data_o)),8);
    tracep->fullCData(oldp+11,((0xffU & (vlSelf->test_bsg__DOT____Vcellout__random_data_gen__data_o 
                                         >> 8U))),8);
    tracep->fullCData(oldp+12,((0xffU & (vlSelf->test_bsg__DOT____Vcellout__random_data_gen__data_o 
                                         >> 0x10U))),8);
    tracep->fullCData(oldp+13,((vlSelf->test_bsg__DOT____Vcellout__random_data_gen__data_o 
                                >> 0x18U)),8);
    tracep->fullBit(oldp+14,(vlSelf->test_bsg__DOT__reset));
    tracep->fullBit(oldp+15,(vlSelf->test_bsg__DOT__reset_gen__DOT__ctr_lo_r));
    tracep->fullCData(oldp+16,(vlSelf->test_bsg__DOT__reset_gen__DOT__ctr_hi_r),4);
    tracep->fullBit(oldp+17,(vlSelf->test_bsg__DOT__reset_gen__DOT__ctr_lo_r));
    tracep->fullBit(oldp+18,((0xaU == (IData)(vlSelf->test_bsg__DOT__reset_gen__DOT__ctr_hi_r))));
    tracep->fullBit(oldp+19,(vlSelf->clk));
    tracep->fullCData(oldp+20,(vlSelf->v_i),4);
    tracep->fullBit(oldp+21,(vlSelf->w_i));
    tracep->fullBit(oldp+22,((0U != (IData)(vlSelf->v_i))));
    tracep->fullBit(oldp+23,(((IData)(vlSelf->clk) 
                              & ((0xffffffffU == vlSelf->test_bsg__DOT____Vcellout__random_data_gen__data_o) 
                                 & ((IData)(vlSelf->test_bsg__DOT__test_input_addr) 
                                    & ((0U != (IData)(vlSelf->v_i)) 
                                       & ((0xffffffffU 
                                           == vlSelf->test_bsg__DOT__DUT__DOT__w_mask_lo) 
                                          & (IData)(vlSelf->w_i))))))));
    tracep->fullBit(oldp+24,((1U & (IData)(vlSelf->v_i))));
    tracep->fullBit(oldp+25,((1U & ((IData)(vlSelf->v_i) 
                                    >> 1U))));
    tracep->fullBit(oldp+26,((1U & ((IData)(vlSelf->v_i) 
                                    >> 2U))));
    tracep->fullBit(oldp+27,((1U & ((IData)(vlSelf->v_i) 
                                    >> 3U))));
    tracep->fullIData(oldp+28,(0x20U),32);
    tracep->fullIData(oldp+29,(0U),32);
    tracep->fullIData(oldp+30,(0x14U),32);
    tracep->fullIData(oldp+31,(4U),32);
    tracep->fullIData(oldp+32,(1U),32);
    tracep->fullIData(oldp+33,(0xaU),32);
    tracep->fullIData(oldp+34,(8U),32);
    tracep->fullIData(oldp+35,(0xabcdef11U),32);
    tracep->fullIData(oldp+36,(0U),32);
    tracep->fullIData(oldp+37,(0xabcdef11U),32);
    tracep->fullBit(oldp+38,(0U));
    tracep->fullCData(oldp+39,(0x11U),8);
    tracep->fullCData(oldp+40,(0U),8);
    tracep->fullBit(oldp+41,(0U));
    tracep->fullCData(oldp+42,(0xefU),8);
    tracep->fullCData(oldp+43,(0xcdU),8);
    tracep->fullCData(oldp+44,(0xabU),8);
    tracep->fullBit(oldp+45,(1U));
}
