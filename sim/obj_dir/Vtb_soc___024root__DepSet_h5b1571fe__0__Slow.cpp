// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_soc.h for the primary calling header

#include "Vtb_soc__pch.h"
#include "Vtb_soc___024root.h"

VL_ATTR_COLD void Vtb_soc___024root___eval_static__TOP(Vtb_soc___024root* vlSelf);

VL_ATTR_COLD void Vtb_soc___024root___eval_static(Vtb_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root___eval_static\n"); );
    // Body
    Vtb_soc___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vtb_soc___024root___eval_static__TOP(Vtb_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->tb_soc__DOT__clk = 0U;
    vlSelf->tb_soc__DOT__resetn = 0U;
}

VL_ATTR_COLD void Vtb_soc___024root___eval_final(Vtb_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_soc___024root___dump_triggers__stl(Vtb_soc___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_soc___024root___eval_phase__stl(Vtb_soc___024root* vlSelf);

VL_ATTR_COLD void Vtb_soc___024root___eval_settle(Vtb_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtb_soc___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb_soc.v", 16, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_soc___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_soc___024root___dump_triggers__stl(Vtb_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_soc___024root___stl_sequent__TOP__0(Vtb_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__alu_eq;
    tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__alu_eq = 0;
    CData/*0:0*/ tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__alu_ltu;
    tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__alu_ltu = 0;
    CData/*0:0*/ tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__alu_lts;
    tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__alu_lts = 0;
    CData/*0:0*/ tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu;
    tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu = 0;
    CData/*0:0*/ tb_soc__DOT__u_tpu__DOT__feeding;
    tb_soc__DOT__u_tpu__DOT__feeding = 0;
    CData/*3:0*/ tb_soc__DOT__u_tpu__DOT__kk;
    tb_soc__DOT__u_tpu__DOT__kk = 0;
    VlWide<4>/*127:0*/ tb_soc__DOT__u_tpu__DOT__wrow;
    VL_ZERO_W(128, tb_soc__DOT__u_tpu__DOT__wrow);
    CData/*3:0*/ tb_soc__DOT__u_tpu__DOT__base;
    tb_soc__DOT__u_tpu__DOT__base = 0;
    IData/*20:0*/ tb_soc__DOT__u_tpu__DOT__u_post__DOT__v_abs;
    tb_soc__DOT__u_tpu__DOT__u_post__DOT__v_abs = 0;
    IData/*20:0*/ tb_soc__DOT__u_tpu__DOT__u_post__DOT__v_mag;
    tb_soc__DOT__u_tpu__DOT__u_post__DOT__v_mag = 0;
    IData/*20:0*/ tb_soc__DOT__u_tpu__DOT__u_post__DOT__v_bias;
    tb_soc__DOT__u_tpu__DOT__u_post__DOT__v_bias = 0;
    // Body
    vlSelf->tb_soc__DOT__u_tpu__DOT__f_sel = (1U & vlSelf->tb_soc__DOT__u_tpu__DOT__f_cnt);
    vlSelf->tb_soc__DOT__u_tpu__DOT__d_pix = (7U & 
                                              ((IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__d_i) 
                                               - (IData)(1U)));
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__pcpi_int_ready 
        = (1U & (((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__active) 
                  >> 1U) | (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__pcpi_div_ready)));
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpuregs_rs1 
        = ((0U != (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoded_rs1))
            ? vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpuregs
           [vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoded_rs1]
            : 0U);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpuregs_rs2 
        = ((0U != (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoded_rs2))
            ? vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpuregs
           [vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoded_rs2]
            : 0U);
    vlSelf->tb_soc__DOT__t_awready = (1U & ((~ (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__aw_got)) 
                                            & (~ (IData)(vlSelf->tb_soc__DOT__t_bvalid))));
    vlSelf->tb_soc__DOT__t_wready = (1U & ((~ (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__w_got)) 
                                           & (~ (IData)(vlSelf->tb_soc__DOT__t_bvalid))));
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__start 
        = ((~ (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait_q)) 
           & (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__pcpi_div_wait));
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__pcpi_int_wr = 0U;
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpuregs_write = 0U;
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_la_write 
        = ((IData)(vlSelf->tb_soc__DOT__resetn) & (
                                                   (~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_state)))) 
                                                   & (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_wdata)));
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__next_pc 
        = (((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_branch) 
            & (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_store))
            ? (0xfffffffeU & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_out)
            : vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_next_pc);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh 
        = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_rdcycle) 
           | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_rdcycleh) 
              | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_rdinstr) 
                 | (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_rdinstrh))));
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__pcpi_int_rd = 0U;
    if ((2U & (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__active))) {
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__pcpi_int_wr 
            = (1U & ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__active) 
                     >> 1U));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__pcpi_int_rd 
            = (IData)(((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__shift_out)
                        ? VL_SHIFTR_QQI(64,64,32, vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rd, 0x20U)
                        : vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rd));
    } else if (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__pcpi_div_ready) {
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__pcpi_int_wr 
            = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__pcpi_div_wr;
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__pcpi_int_rd 
            = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__pcpi_div_rd;
    }
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_la_read 
        = ((IData)(vlSelf->tb_soc__DOT__resetn) & (
                                                   (~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_state)))) 
                                                   & ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_rinst) 
                                                      | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_prefetch) 
                                                         | (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_rdata)))));
    vlSelf->tb_soc__DOT__rready = ((~ (IData)((0U != (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_wstrb)))) 
                                   & (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_valid));
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpuregs_wrdata = 0U;
    if ((0x40U == (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpu_state))) {
        if (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_branch) {
            vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpuregs_write = 1U;
            vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpuregs_wrdata 
                = (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_pc 
                   + ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_compr)
                       ? 2U : 4U));
        } else if (((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_store) 
                    & (~ (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_branch)))) {
            vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpuregs_write = 1U;
            vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpuregs_wrdata 
                = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_stalu)
                    ? vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__alu_out_q
                    : vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_out);
        }
    }
    if ((2U >= (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__dr))) {
        tb_soc__DOT__u_tpu__DOT__wrow[0U] = vlSelf->tb_soc__DOT__u_tpu__DOT__bank
            [(1U & vlSelf->tb_soc__DOT__u_tpu__DOT__tile_cnt)]
            [vlSelf->tb_soc__DOT__u_tpu__DOT__dr][0U];
        tb_soc__DOT__u_tpu__DOT__wrow[1U] = vlSelf->tb_soc__DOT__u_tpu__DOT__bank
            [(1U & vlSelf->tb_soc__DOT__u_tpu__DOT__tile_cnt)]
            [vlSelf->tb_soc__DOT__u_tpu__DOT__dr][1U];
        tb_soc__DOT__u_tpu__DOT__wrow[2U] = vlSelf->tb_soc__DOT__u_tpu__DOT__bank
            [(1U & vlSelf->tb_soc__DOT__u_tpu__DOT__tile_cnt)]
            [vlSelf->tb_soc__DOT__u_tpu__DOT__dr][2U];
        tb_soc__DOT__u_tpu__DOT__wrow[3U] = vlSelf->tb_soc__DOT__u_tpu__DOT__bank
            [(1U & vlSelf->tb_soc__DOT__u_tpu__DOT__tile_cnt)]
            [vlSelf->tb_soc__DOT__u_tpu__DOT__dr][3U];
    } else {
        tb_soc__DOT__u_tpu__DOT__wrow[0U] = 0U;
        tb_soc__DOT__u_tpu__DOT__wrow[1U] = 0U;
        tb_soc__DOT__u_tpu__DOT__wrow[2U] = 0U;
        tb_soc__DOT__u_tpu__DOT__wrow[3U] = 0U;
    }
    tb_soc__DOT__u_tpu__DOT__u_post__DOT__v_abs = (0x1fffffU 
                                                   & ((0xfffffU 
                                                       & ((0x80000U 
                                                           & vlSelf->tb_soc__DOT__u_tpu__DOT__cs_r)
                                                           ? 
                                                          ((IData)(1U) 
                                                           + 
                                                           (~ vlSelf->tb_soc__DOT__u_tpu__DOT__cs_r))
                                                           : vlSelf->tb_soc__DOT__u_tpu__DOT__cs_r)) 
                                                      >> (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__post_shift)));
    tb_soc__DOT__u_tpu__DOT__u_post__DOT__v_bias = 
        (0x1fffffU & ((IData)(0x80U) + (((0x100000U 
                                          & (vlSelf->tb_soc__DOT__u_tpu__DOT__cs_r 
                                             << 1U)) 
                                         | vlSelf->tb_soc__DOT__u_tpu__DOT__cs_r) 
                                        >> (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__post_shift))));
    tb_soc__DOT__u_tpu__DOT__base = (0xfU & (((2U >= (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__dr))
                                               ? vlSelf->tb_soc__DOT__u_tpu__DOT__boff
                                              [(1U 
                                                & vlSelf->tb_soc__DOT__u_tpu__DOT__tile_cnt)]
                                              [vlSelf->tb_soc__DOT__u_tpu__DOT__dr]
                                               : 0U) 
                                             + (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__dc)));
    tb_soc__DOT__u_tpu__DOT__u_post__DOT__v_mag = (0x1fffffU 
                                                   & ((0x1fffffU 
                                                       & ((0xfffffU 
                                                           & ((0x80000U 
                                                               & vlSelf->tb_soc__DOT__u_tpu__DOT__c0_r)
                                                               ? 
                                                              ((IData)(1U) 
                                                               + 
                                                               (~ vlSelf->tb_soc__DOT__u_tpu__DOT__c0_r))
                                                               : vlSelf->tb_soc__DOT__u_tpu__DOT__c0_r)) 
                                                          + 
                                                          (0xfffffU 
                                                           & ((0x80000U 
                                                               & vlSelf->tb_soc__DOT__u_tpu__DOT__c1_r)
                                                               ? 
                                                              ((IData)(1U) 
                                                               + 
                                                               (~ vlSelf->tb_soc__DOT__u_tpu__DOT__c1_r))
                                                               : vlSelf->tb_soc__DOT__u_tpu__DOT__c1_r)))) 
                                                      >> (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__post_shift)));
    vlSelf->tb_soc__DOT__u_tpu__DOT__reg_rdata = ((0x200U 
                                                   & vlSelf->tb_soc__DOT__u_tpu__DOT__raddr_r)
                                                   ? 
                                                  ((8U 
                                                    >= 
                                                    (0xfU 
                                                     & (vlSelf->tb_soc__DOT__u_tpu__DOT__raddr_r 
                                                        >> 2U)))
                                                    ? 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & (((8U 
                                                                      >= 
                                                                      (0xfU 
                                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__raddr_r 
                                                                          >> 2U)))
                                                                      ? 
                                                                     vlSelf->tb_soc__DOT__u_tpu__DOT__ker
                                                                     [
                                                                     (7U 
                                                                      & (vlSelf->tb_soc__DOT__u_tpu__DOT__raddr_r 
                                                                         >> 6U))]
                                                                     [
                                                                     (0xfU 
                                                                      & (vlSelf->tb_soc__DOT__u_tpu__DOT__raddr_r 
                                                                         >> 2U))]
                                                                      : 0U) 
                                                                    >> 7U)))) 
                                                     << 8U) 
                                                    | ((8U 
                                                        >= 
                                                        (0xfU 
                                                         & (vlSelf->tb_soc__DOT__u_tpu__DOT__raddr_r 
                                                            >> 2U)))
                                                        ? 
                                                       vlSelf->tb_soc__DOT__u_tpu__DOT__ker
                                                       [
                                                       (7U 
                                                        & (vlSelf->tb_soc__DOT__u_tpu__DOT__raddr_r 
                                                           >> 6U))]
                                                       [
                                                       (0xfU 
                                                        & (vlSelf->tb_soc__DOT__u_tpu__DOT__raddr_r 
                                                           >> 2U))]
                                                        : 0U))
                                                    : 0U)
                                                   : 
                                                  ((0x10U 
                                                    & vlSelf->tb_soc__DOT__u_tpu__DOT__raddr_r)
                                                    ? 
                                                   ((8U 
                                                     & vlSelf->tb_soc__DOT__u_tpu__DOT__raddr_r)
                                                     ? 
                                                    ((4U 
                                                      & vlSelf->tb_soc__DOT__u_tpu__DOT__raddr_r)
                                                      ? 0U
                                                      : 0x53545055U)
                                                     : 
                                                    ((4U 
                                                      & vlSelf->tb_soc__DOT__u_tpu__DOT__raddr_r)
                                                      ? vlSelf->tb_soc__DOT__u_tpu__DOT__cycles
                                                      : 
                                                     (((IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__post_colsel) 
                                                       << 6U) 
                                                      | (((IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__post_shift) 
                                                          << 2U) 
                                                         | (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__post_mode)))))
                                                    : 
                                                   ((8U 
                                                     & vlSelf->tb_soc__DOT__u_tpu__DOT__raddr_r)
                                                     ? 
                                                    ((4U 
                                                      & vlSelf->tb_soc__DOT__u_tpu__DOT__raddr_r)
                                                      ? (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__img_h)
                                                      : (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__img_w))
                                                     : 
                                                    ((4U 
                                                      & vlSelf->tb_soc__DOT__u_tpu__DOT__raddr_r)
                                                      ? 
                                                     (((IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__done) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__busy))
                                                      : 0U))));
    vlSelf->tb_soc__DOT__rdata = ((IData)(vlSelf->tb_soc__DOT__t_rvalid)
                                   ? vlSelf->tb_soc__DOT__t_rdata
                                   : vlSelf->tb_soc__DOT__b_rdata);
    if ((0U == (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_wordsize))) {
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_la_wdata 
            = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op2;
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_la_wstrb = 0xfU;
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_word 
            = vlSelf->tb_soc__DOT__rdata;
    } else if ((1U == (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_wordsize))) {
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_la_wdata 
            = ((vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op2 
                << 0x10U) | (0xffffU & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op2));
        if ((2U & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1)) {
            vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_la_wstrb = 0xcU;
            if ((2U & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1)) {
                vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_word 
                    = (vlSelf->tb_soc__DOT__rdata >> 0x10U);
            }
        } else {
            vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_la_wstrb = 3U;
            vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_word 
                = (0xffffU & vlSelf->tb_soc__DOT__rdata);
        }
    } else if ((2U == (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_wordsize))) {
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_la_wdata 
            = ((vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op2 
                << 0x18U) | ((0xff0000U & (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op2 
                                           << 0x10U)) 
                             | ((0xff00U & (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op2 
                                            << 8U)) 
                                | (0xffU & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op2))));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_la_wstrb 
            = (0xfU & ((IData)(1U) << (3U & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1)));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_word 
            = ((2U & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1)
                ? ((1U & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1)
                    ? (vlSelf->tb_soc__DOT__rdata >> 0x18U)
                    : (0xffU & (vlSelf->tb_soc__DOT__rdata 
                                >> 0x10U))) : ((1U 
                                                & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1)
                                                ? (0xffU 
                                                   & (vlSelf->tb_soc__DOT__rdata 
                                                      >> 8U))
                                                : (0xffU 
                                                   & vlSelf->tb_soc__DOT__rdata)));
    }
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_ready 
        = (((IData)(vlSelf->tb_soc__DOT__bb_valid) 
            | (IData)(vlSelf->tb_soc__DOT__t_bvalid)) 
           | ((IData)(vlSelf->tb_soc__DOT__rb_valid) 
              | (IData)(vlSelf->tb_soc__DOT__t_rvalid)));
    vlSelf->tb_soc__DOT__u_tpu__DOT__wr_commit = ((IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__aw_got) 
                                                  & (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__w_got));
    tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__alu_eq 
        = (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1 
           == vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op2);
    tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__alu_lts 
        = VL_LTS_III(32, vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1, vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op2);
    tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__alu_ltu 
        = (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1 
           < vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op2);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_insn_valid 
        = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__pcpi_valid) 
           & (IData)((0x2000033U == (0xfe00007fU & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__pcpi_insn))));
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_trap 
        = (1U & (~ ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_lui) 
                    | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_auipc) 
                       | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_jal) 
                          | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_jalr) 
                             | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_beq) 
                                | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_bne) 
                                   | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_blt) 
                                      | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_bge) 
                                         | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_bltu) 
                                            | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_bgeu) 
                                               | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_lb) 
                                                  | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_lh) 
                                                     | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_lw) 
                                                        | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_lbu) 
                                                           | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_lhu) 
                                                              | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_sb) 
                                                                 | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_sh) 
                                                                    | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_sw) 
                                                                       | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_addi) 
                                                                          | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_slti) 
                                                                             | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_sltiu) 
                                                                                | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_xori) 
                                                                                | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_ori) 
                                                                                | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_andi) 
                                                                                | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_slli) 
                                                                                | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_srli) 
                                                                                | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_srai) 
                                                                                | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_add) 
                                                                                | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_sub) 
                                                                                | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_sll) 
                                                                                | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_slt) 
                                                                                | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_sltu) 
                                                                                | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_xor) 
                                                                                | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_srl) 
                                                                                | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_sra) 
                                                                                | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_or) 
                                                                                | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_and) 
                                                                                | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_rdcycle) 
                                                                                | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_rdcycleh) 
                                                                                | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_rdinstr) 
                                                                                | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_rdinstrh) 
                                                                                | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_fence) 
                                                                                | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_getq) 
                                                                                | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_setq) 
                                                                                | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_retirq) 
                                                                                | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_maskirq) 
                                                                                | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_timer) 
                                                                                | (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_waitirq))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->tb_soc__DOT__bready = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_valid) 
                                   & (0U != (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_wstrb)));
    vlSelf->tb_soc__DOT__u_tpu__DOT__acc_flat[0U] = (IData)(
                                                            (((QData)((IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc)) 
                                                              << 0x28U) 
                                                             | (((QData)((IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc)) 
                                                                 << 0x14U) 
                                                                | (QData)((IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc)))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__acc_flat[1U] = 
        ((vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc 
          << 0x1cU) | (IData)(((((QData)((IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc)) 
                                 << 0x28U) | (((QData)((IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc)) 
                                               << 0x14U) 
                                              | (QData)((IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc)))) 
                               >> 0x20U)));
    vlSelf->tb_soc__DOT__u_tpu__DOT__acc_flat[2U] = 
        ((vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc 
          << 0x10U) | (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc 
                       >> 4U));
    vlSelf->tb_soc__DOT__u_tpu__DOT__acc_flat[3U] = 
        ((vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc 
          << 0x18U) | ((vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc 
                        << 4U) | (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc 
                                  >> 0x10U)));
    vlSelf->tb_soc__DOT__u_tpu__DOT__acc_flat[4U] = 
        ((vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc 
          << 0xcU) | (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc 
                      >> 8U));
    vlSelf->tb_soc__DOT__u_tpu__DOT__acc_flat[5U] = 
        ((vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc 
          << 0x14U) | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc);
    vlSelf->tb_soc__DOT__u_tpu__DOT__acc_flat[6U] = 
        ((vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc 
          << 0x1cU) | ((vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc 
                        << 8U) | (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc 
                                  >> 0xcU)));
    vlSelf->tb_soc__DOT__u_tpu__DOT__acc_flat[7U] = 
        ((vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc 
          << 0x10U) | (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc 
                       >> 4U));
    vlSelf->tb_soc__DOT__u_tpu__DOT__acc_flat[8U] = 
        ((vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc 
          << 0x18U) | ((vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc 
                        << 4U) | (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc 
                                  >> 0x10U)));
    vlSelf->tb_soc__DOT__u_tpu__DOT__acc_flat[9U] = 
        ((vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc 
          << 0xcU) | (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc 
                      >> 8U));
    vlSelf->tb_soc__DOT__u_tpu__DOT__acc_flat[0xaU] 
        = ((vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc 
            << 0x14U) | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc);
    vlSelf->tb_soc__DOT__u_tpu__DOT__acc_flat[0xbU] 
        = ((vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc 
            << 0x1cU) | ((vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc 
                          << 8U) | (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc 
                                    >> 0xcU)));
    vlSelf->tb_soc__DOT__u_tpu__DOT__acc_flat[0xcU] 
        = ((vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc 
            << 0x10U) | (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc 
                         >> 4U));
    vlSelf->tb_soc__DOT__u_tpu__DOT__acc_flat[0xdU] 
        = ((vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc 
            << 0x18U) | ((vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc 
                          << 4U) | (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc 
                                    >> 0x10U)));
    vlSelf->tb_soc__DOT__u_tpu__DOT__acc_flat[0xeU] 
        = ((vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc 
            << 0xcU) | (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc 
                        >> 8U));
    vlSelf->tb_soc__DOT__u_tpu__DOT__acc_flat[0xfU] 
        = ((vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc 
            << 0x14U) | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc);
    vlSelf->tb_soc__DOT__u_tpu__DOT__acc_flat[0x10U] 
        = ((vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc 
            << 0x1cU) | ((vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc 
                          << 8U) | (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc 
                                    >> 0xcU)));
    vlSelf->tb_soc__DOT__u_tpu__DOT__acc_flat[0x11U] 
        = ((vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc 
            << 0x10U) | (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc 
                         >> 4U));
    vlSelf->tb_soc__DOT__u_tpu__DOT__acc_flat[0x12U] 
        = ((vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc 
            << 0x18U) | ((vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc 
                          << 4U) | (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc 
                                    >> 0x10U)));
    vlSelf->tb_soc__DOT__u_tpu__DOT__acc_flat[0x13U] 
        = ((vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc 
            << 0xcU) | (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc 
                        >> 8U));
    vlSelf->tb_soc__DOT__u_tpu__DOT__acc_flat[0x14U] 
        = ((vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc 
            << 0x14U) | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc);
    vlSelf->tb_soc__DOT__u_tpu__DOT__acc_flat[0x15U] 
        = ((vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc 
            << 0x1cU) | ((vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc 
                          << 8U) | (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc 
                                    >> 0xcU)));
    vlSelf->tb_soc__DOT__u_tpu__DOT__acc_flat[0x16U] 
        = ((vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc 
            << 0x10U) | (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc 
                         >> 4U));
    vlSelf->tb_soc__DOT__u_tpu__DOT__acc_flat[0x17U] 
        = ((vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc 
            << 0x18U) | ((vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc 
                          << 4U) | (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc 
                                    >> 0x10U)));
    vlSelf->tb_soc__DOT__u_tpu__DOT__acc_flat[0x18U] 
        = ((vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc 
            << 0xcU) | (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc 
                        >> 8U));
    vlSelf->tb_soc__DOT__u_tpu__DOT__acc_flat[0x19U] 
        = ((vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc 
            << 0x14U) | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc);
    vlSelf->tb_soc__DOT__u_tpu__DOT__acc_flat[0x1aU] 
        = ((vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc 
            << 0x1cU) | ((vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc 
                          << 8U) | (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc 
                                    >> 0xcU)));
    vlSelf->tb_soc__DOT__u_tpu__DOT__acc_flat[0x1bU] 
        = ((vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc 
            << 0x10U) | (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc 
                         >> 4U));
    vlSelf->tb_soc__DOT__u_tpu__DOT__acc_flat[0x1cU] 
        = ((vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc 
            << 0x18U) | ((vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc 
                          << 4U) | (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc 
                                    >> 0x10U)));
    vlSelf->tb_soc__DOT__u_tpu__DOT__acc_flat[0x1dU] 
        = ((vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc 
            << 0xcU) | (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc 
                        >> 8U));
    vlSelf->tb_soc__DOT__u_tpu__DOT__acc_flat[0x1eU] 
        = ((vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc 
            << 0x14U) | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc);
    vlSelf->tb_soc__DOT__u_tpu__DOT__acc_flat[0x1fU] 
        = ((vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc 
            << 0x1cU) | ((vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc 
                          << 8U) | (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc 
                                    >> 0xcU)));
    vlSelf->tb_soc__DOT__u_tpu__DOT__acc_flat[0x20U] 
        = ((vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc 
            << 0x10U) | (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc 
                         >> 4U));
    vlSelf->tb_soc__DOT__u_tpu__DOT__acc_flat[0x21U] 
        = ((vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc 
            << 0x18U) | ((vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc 
                          << 4U) | (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc 
                                    >> 0x10U)));
    vlSelf->tb_soc__DOT__u_tpu__DOT__acc_flat[0x22U] 
        = ((vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc 
            << 0xcU) | (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc 
                        >> 8U));
    vlSelf->tb_soc__DOT__u_tpu__DOT__acc_flat[0x23U] 
        = ((vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc 
            << 0x14U) | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc);
    vlSelf->tb_soc__DOT__u_tpu__DOT__acc_flat[0x24U] 
        = ((vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc 
            << 0x1cU) | ((vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc 
                          << 8U) | (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc 
                                    >> 0xcU)));
    vlSelf->tb_soc__DOT__u_tpu__DOT__acc_flat[0x25U] 
        = ((vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc 
            << 0x10U) | (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc 
                         >> 4U));
    vlSelf->tb_soc__DOT__u_tpu__DOT__acc_flat[0x26U] 
        = ((vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc 
            << 0x18U) | ((vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc 
                          << 4U) | (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc 
                                    >> 0x10U)));
    vlSelf->tb_soc__DOT__u_tpu__DOT__acc_flat[0x27U] 
        = ((vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc 
            << 0xcU) | (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc 
                        >> 8U));
    tb_soc__DOT__u_tpu__DOT__kk = (0xfU & ((IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__dr) 
                                           + (((IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__dr) 
                                               << 1U) 
                                              + (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__dc))));
    tb_soc__DOT__u_tpu__DOT__feeding = ((3U == (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__state)) 
                                        & (9U > (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__t_cnt)));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[1U][0U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[0U][1U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[1U][1U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[0U][2U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[1U][2U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[0U][3U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[1U][3U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[0U][4U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[1U][4U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[0U][5U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[1U][5U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[0U][6U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[1U][6U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[0U][7U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[1U][7U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[0U][8U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[2U][0U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[1U][1U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[2U][1U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[1U][2U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[2U][2U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[1U][3U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[2U][3U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[1U][4U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[2U][4U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[1U][5U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[2U][5U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[1U][6U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[2U][6U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[1U][7U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[2U][7U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[1U][8U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[3U][0U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[2U][1U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[3U][1U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[2U][2U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[3U][2U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[2U][3U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[3U][3U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[2U][4U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[3U][4U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[2U][5U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[3U][5U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[2U][6U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[3U][6U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[2U][7U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[3U][7U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[2U][8U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[4U][0U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[3U][1U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[4U][1U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[3U][2U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[4U][2U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[3U][3U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[4U][3U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[3U][4U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[4U][4U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[3U][5U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[4U][5U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[3U][6U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[4U][6U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[3U][7U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[4U][7U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[3U][8U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[5U][0U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[4U][1U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[5U][1U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[4U][2U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[5U][2U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[4U][3U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[5U][3U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[4U][4U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[5U][4U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[4U][5U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[5U][5U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[4U][6U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[5U][6U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[4U][7U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[5U][7U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[4U][8U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[6U][0U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[5U][1U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[6U][1U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[5U][2U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[6U][2U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[5U][3U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[6U][3U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[5U][4U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[6U][4U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[5U][5U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[6U][5U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[5U][6U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[6U][6U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[5U][7U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[6U][7U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[5U][8U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[7U][0U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[6U][1U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[7U][1U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[6U][2U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[7U][2U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[6U][3U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[7U][3U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[6U][4U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[7U][4U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[6U][5U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[7U][5U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[6U][6U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[7U][6U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[6U][7U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[7U][7U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[6U][8U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[8U][0U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[7U][1U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[8U][1U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[7U][2U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[8U][2U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[7U][3U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[8U][3U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[7U][4U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[8U][4U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[7U][5U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[8U][5U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[7U][6U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[8U][6U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[7U][7U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[8U][7U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[7U][8U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__a_skew[0U] 
        = (0x1ffU & vlSelf->tb_soc__DOT__u_tpu__DOT__a_flat_r[0U]);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__a_skew[1U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__1__KET____DOT__g_dly__DOT__dly
        [0U];
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__a_skew[2U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__2__KET____DOT__g_dly__DOT__dly
        [1U];
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__a_skew[3U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__3__KET____DOT__g_dly__DOT__dly
        [2U];
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__a_skew[4U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__4__KET____DOT__g_dly__DOT__dly
        [3U];
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__a_skew[5U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly
        [4U];
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__a_skew[6U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly
        [5U];
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__a_skew[7U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly
        [6U];
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__b_skew[0U] 
        = (0xffU & (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__b_flat_r));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__b_skew[1U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__1__KET____DOT__g_dly__DOT__dly
        [0U];
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__b_skew[2U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__2__KET____DOT__g_dly__DOT__dly
        [1U];
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__b_skew[3U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__3__KET____DOT__g_dly__DOT__dly
        [2U];
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__b_skew[4U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__4__KET____DOT__g_dly__DOT__dly
        [3U];
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__b_skew[5U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly
        [4U];
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__b_skew[6U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly
        [5U];
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__b_skew[7U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly
        [6U];
    vlSelf->tb_soc__DOT__arvalid = ((~ (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__axi_adapter__DOT__ack_arvalid)) 
                                    & (IData)(vlSelf->tb_soc__DOT__rready));
    vlSelf->tb_soc__DOT__u_tpu__DOT__px = (0xffU & 
                                           ((0U == (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__post_mode))
                                             ? ((0xffU 
                                                 < tb_soc__DOT__u_tpu__DOT__u_post__DOT__v_abs)
                                                 ? 0xffU
                                                 : tb_soc__DOT__u_tpu__DOT__u_post__DOT__v_abs)
                                             : ((1U 
                                                 == (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__post_mode))
                                                 ? 
                                                ((0xffU 
                                                  < tb_soc__DOT__u_tpu__DOT__u_post__DOT__v_mag)
                                                  ? 0xffU
                                                  : tb_soc__DOT__u_tpu__DOT__u_post__DOT__v_mag)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__post_mode))
                                                  ? 
                                                 (VL_GTS_III(21, 0U, tb_soc__DOT__u_tpu__DOT__u_post__DOT__v_bias)
                                                   ? 0U
                                                   : 
                                                  (VL_LTS_III(21, 0xffU, tb_soc__DOT__u_tpu__DOT__u_post__DOT__v_bias)
                                                    ? 0xffU
                                                    : tb_soc__DOT__u_tpu__DOT__u_post__DOT__v_bias))
                                                  : 0U))));
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_xfer 
        = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_ready) 
           & (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_valid));
    vlSelf->tb_soc__DOT__t_arready = ((~ (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__wr_commit)) 
                                      & (0U == (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__r_state)));
    vlSelf->tb_soc__DOT__u_tpu__DOT__wr_ibuf = ((IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__wr_commit) 
                                                & (0x10000U 
                                                   == 
                                                   (0x30000U 
                                                    & vlSelf->tb_soc__DOT__u_tpu__DOT__awaddr_r)));
    vlSelf->tb_soc__DOT__u_tpu__DOT__wr_regs = ((IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__wr_commit) 
                                                & (0U 
                                                   == 
                                                   (0x30000U 
                                                    & vlSelf->tb_soc__DOT__u_tpu__DOT__awaddr_r)));
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__alu_out_0 = 0U;
    if (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_beq) {
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__alu_out_0 
            = tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__alu_eq;
    } else if (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_bne) {
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__alu_out_0 
            = (1U & (~ (IData)(tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__alu_eq)));
    } else if (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_bge) {
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__alu_out_0 
            = (1U & (~ (IData)(tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__alu_lts)));
    } else if (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_bgeu) {
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__alu_out_0 
            = (1U & (~ (IData)(tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__alu_ltu)));
    } else if (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_slti_blt_slt) {
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__alu_out_0 
            = tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__alu_lts;
    } else if (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_sltiu_bltu_sltu) {
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__alu_out_0 
            = tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__alu_ltu;
    }
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__alu_out = 0U;
    if (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_lui_auipc_jal_jalr_addi_add_sub) {
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__alu_out 
            = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_sub)
                ? (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1 
                   - vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op2)
                : (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1 
                   + vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op2));
    } else if (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_compare) {
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__alu_out 
            = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__alu_out_0;
    } else if (((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_xori) 
                | (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_xor))) {
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__alu_out 
            = (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1 
               ^ vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op2);
    } else if (((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_ori) 
                | (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_or))) {
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__alu_out 
            = (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1 
               | vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op2);
    } else if (((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_andi) 
                | (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_and))) {
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__alu_out 
            = (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1 
               & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op2);
    } else if (((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_sll) 
                | (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_slli))) {
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__alu_out 
            = (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1 
               << (0x1fU & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op2));
    } else if (((((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_srl) 
                  | (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_srli)) 
                 | (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_sra)) 
                | (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_srai))) {
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__alu_out 
            = (IData)((0x1ffffffffULL & VL_SHIFTRS_QQI(33,33,5, 
                                                       (((QData)((IData)(
                                                                         (((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_sra) 
                                                                           | (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_srai)) 
                                                                          & (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1 
                                                                             >> 0x1fU)))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1))), 
                                                       (0x1fU 
                                                        & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op2))));
    }
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mul = 0U;
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh = 0U;
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu = 0U;
    tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu = 0U;
    if (((IData)(vlSelf->tb_soc__DOT__resetn) & (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_insn_valid))) {
        if ((0U == (7U & (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__pcpi_insn 
                          >> 0xcU)))) {
            vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mul = 1U;
        }
        if ((0U != (7U & (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__pcpi_insn 
                          >> 0xcU)))) {
            if ((1U == (7U & (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__pcpi_insn 
                              >> 0xcU)))) {
                vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh = 1U;
            }
            if ((1U != (7U & (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__pcpi_insn 
                              >> 0xcU)))) {
                if ((2U == (7U & (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__pcpi_insn 
                                  >> 0xcU)))) {
                    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu = 1U;
                }
                if ((2U != (7U & (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__pcpi_insn 
                                  >> 0xcU)))) {
                    if ((3U == (7U & (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__pcpi_insn 
                                      >> 0xcU)))) {
                        tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu = 1U;
                    }
                }
            }
        }
    }
    vlSelf->tb_soc__DOT__wvalid = ((~ (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__axi_adapter__DOT__ack_wvalid)) 
                                   & (IData)(vlSelf->tb_soc__DOT__bready));
    vlSelf->tb_soc__DOT__awvalid = ((~ (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__axi_adapter__DOT__ack_awvalid)) 
                                    & (IData)(vlSelf->tb_soc__DOT__bready));
    vlSelf->tb_soc__DOT__u_tpu__DOT__a_flat[0U] = (IData)(
                                                          (((QData)((IData)(
                                                                            ((IData)(tb_soc__DOT__u_tpu__DOT__feeding)
                                                                              ? 
                                                                             (0xffU 
                                                                              & (((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(6U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U)))
                                                                                 ? 0U
                                                                                 : 
                                                                                (tb_soc__DOT__u_tpu__DOT__wrow[
                                                                                (((IData)(7U) 
                                                                                + 
                                                                                (0x7fU 
                                                                                & VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(6U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U))) 
                                                                                >> 5U)] 
                                                                                << 
                                                                                ((IData)(0x20U) 
                                                                                - 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(6U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U))))) 
                                                                                | (tb_soc__DOT__u_tpu__DOT__wrow[
                                                                                (3U 
                                                                                & (VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(6U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U) 
                                                                                >> 5U))] 
                                                                                >> 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(6U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U)))))
                                                                              : 0U))) 
                                                            << 0x36U) 
                                                           | (((QData)((IData)(
                                                                               ((IData)(tb_soc__DOT__u_tpu__DOT__feeding)
                                                                                 ? 
                                                                                (0xffU 
                                                                                & (((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(5U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U)))
                                                                                 ? 0U
                                                                                 : 
                                                                                (tb_soc__DOT__u_tpu__DOT__wrow[
                                                                                (((IData)(7U) 
                                                                                + 
                                                                                (0x7fU 
                                                                                & VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(5U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U))) 
                                                                                >> 5U)] 
                                                                                << 
                                                                                ((IData)(0x20U) 
                                                                                - 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(5U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U))))) 
                                                                                | (tb_soc__DOT__u_tpu__DOT__wrow[
                                                                                (3U 
                                                                                & (VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(5U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U) 
                                                                                >> 5U))] 
                                                                                >> 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(5U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U)))))
                                                                                 : 0U))) 
                                                               << 0x2dU) 
                                                              | (((QData)((IData)(
                                                                                ((IData)(tb_soc__DOT__u_tpu__DOT__feeding)
                                                                                 ? 
                                                                                (0xffU 
                                                                                & (((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(4U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U)))
                                                                                 ? 0U
                                                                                 : 
                                                                                (tb_soc__DOT__u_tpu__DOT__wrow[
                                                                                (((IData)(7U) 
                                                                                + 
                                                                                (0x7fU 
                                                                                & VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(4U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U))) 
                                                                                >> 5U)] 
                                                                                << 
                                                                                ((IData)(0x20U) 
                                                                                - 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(4U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U))))) 
                                                                                | (tb_soc__DOT__u_tpu__DOT__wrow[
                                                                                (3U 
                                                                                & (VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(4U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U) 
                                                                                >> 5U))] 
                                                                                >> 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(4U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U)))))
                                                                                 : 0U))) 
                                                                  << 0x24U) 
                                                                 | (((QData)((IData)(
                                                                                ((IData)(tb_soc__DOT__u_tpu__DOT__feeding)
                                                                                 ? 
                                                                                (0xffU 
                                                                                & (((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(3U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U)))
                                                                                 ? 0U
                                                                                 : 
                                                                                (tb_soc__DOT__u_tpu__DOT__wrow[
                                                                                (((IData)(7U) 
                                                                                + 
                                                                                (0x7fU 
                                                                                & VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(3U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U))) 
                                                                                >> 5U)] 
                                                                                << 
                                                                                ((IData)(0x20U) 
                                                                                - 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(3U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U))))) 
                                                                                | (tb_soc__DOT__u_tpu__DOT__wrow[
                                                                                (3U 
                                                                                & (VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(3U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U) 
                                                                                >> 5U))] 
                                                                                >> 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(3U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U)))))
                                                                                 : 0U))) 
                                                                     << 0x1bU) 
                                                                    | (QData)((IData)(
                                                                                ((((IData)(tb_soc__DOT__u_tpu__DOT__feeding)
                                                                                 ? 
                                                                                (0xffU 
                                                                                & (((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(2U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U)))
                                                                                 ? 0U
                                                                                 : 
                                                                                (tb_soc__DOT__u_tpu__DOT__wrow[
                                                                                (((IData)(7U) 
                                                                                + 
                                                                                (0x7fU 
                                                                                & VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(2U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U))) 
                                                                                >> 5U)] 
                                                                                << 
                                                                                ((IData)(0x20U) 
                                                                                - 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(2U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U))))) 
                                                                                | (tb_soc__DOT__u_tpu__DOT__wrow[
                                                                                (3U 
                                                                                & (VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(2U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U) 
                                                                                >> 5U))] 
                                                                                >> 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(2U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U)))))
                                                                                 : 0U) 
                                                                                << 0x12U) 
                                                                                | ((((IData)(tb_soc__DOT__u_tpu__DOT__feeding)
                                                                                 ? 
                                                                                (0xffU 
                                                                                & (((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U)))
                                                                                 ? 0U
                                                                                 : 
                                                                                (tb_soc__DOT__u_tpu__DOT__wrow[
                                                                                (((IData)(7U) 
                                                                                + 
                                                                                (0x7fU 
                                                                                & VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U))) 
                                                                                >> 5U)] 
                                                                                << 
                                                                                ((IData)(0x20U) 
                                                                                - 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U))))) 
                                                                                | (tb_soc__DOT__u_tpu__DOT__wrow[
                                                                                (3U 
                                                                                & (VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U) 
                                                                                >> 5U))] 
                                                                                >> 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U)))))
                                                                                 : 0U) 
                                                                                << 9U) 
                                                                                | ((IData)(tb_soc__DOT__u_tpu__DOT__feeding)
                                                                                 ? 
                                                                                (0xffU 
                                                                                & (((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(7,7,32, (IData)(tb_soc__DOT__u_tpu__DOT__base), 3U)))
                                                                                 ? 0U
                                                                                 : 
                                                                                (tb_soc__DOT__u_tpu__DOT__wrow[
                                                                                (((IData)(7U) 
                                                                                + 
                                                                                (0x7fU 
                                                                                & VL_SHIFTL_III(7,7,32, (IData)(tb_soc__DOT__u_tpu__DOT__base), 3U))) 
                                                                                >> 5U)] 
                                                                                << 
                                                                                ((IData)(0x20U) 
                                                                                - 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(7,7,32, (IData)(tb_soc__DOT__u_tpu__DOT__base), 3U))))) 
                                                                                | (tb_soc__DOT__u_tpu__DOT__wrow[
                                                                                (3U 
                                                                                & (VL_SHIFTL_III(7,7,32, (IData)(tb_soc__DOT__u_tpu__DOT__base), 3U) 
                                                                                >> 5U))] 
                                                                                >> 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(7,7,32, (IData)(tb_soc__DOT__u_tpu__DOT__base), 3U)))))
                                                                                 : 0U))))))))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__a_flat[1U] = (
                                                   (((IData)(tb_soc__DOT__u_tpu__DOT__feeding)
                                                      ? 
                                                     (0xffU 
                                                      & (((0U 
                                                           == 
                                                           (0x1fU 
                                                            & VL_SHIFTL_III(7,7,32, 
                                                                            (0x1fU 
                                                                             & ((IData)(7U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U)))
                                                           ? 0U
                                                           : 
                                                          (tb_soc__DOT__u_tpu__DOT__wrow[
                                                           (((IData)(7U) 
                                                             + 
                                                             (0x7fU 
                                                              & VL_SHIFTL_III(7,7,32, 
                                                                              (0x1fU 
                                                                               & ((IData)(7U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U))) 
                                                            >> 5U)] 
                                                           << 
                                                           ((IData)(0x20U) 
                                                            - 
                                                            (0x1fU 
                                                             & VL_SHIFTL_III(7,7,32, 
                                                                             (0x1fU 
                                                                              & ((IData)(7U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U))))) 
                                                         | (tb_soc__DOT__u_tpu__DOT__wrow[
                                                            (3U 
                                                             & (VL_SHIFTL_III(7,7,32, 
                                                                              (0x1fU 
                                                                               & ((IData)(7U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U) 
                                                                >> 5U))] 
                                                            >> 
                                                            (0x1fU 
                                                             & VL_SHIFTL_III(7,7,32, 
                                                                             (0x1fU 
                                                                              & ((IData)(7U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U)))))
                                                      : 0U) 
                                                    << 0x1fU) 
                                                   | (IData)(
                                                             ((((QData)((IData)(
                                                                                ((IData)(tb_soc__DOT__u_tpu__DOT__feeding)
                                                                                 ? 
                                                                                (0xffU 
                                                                                & (((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(6U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U)))
                                                                                 ? 0U
                                                                                 : 
                                                                                (tb_soc__DOT__u_tpu__DOT__wrow[
                                                                                (((IData)(7U) 
                                                                                + 
                                                                                (0x7fU 
                                                                                & VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(6U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U))) 
                                                                                >> 5U)] 
                                                                                << 
                                                                                ((IData)(0x20U) 
                                                                                - 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(6U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U))))) 
                                                                                | (tb_soc__DOT__u_tpu__DOT__wrow[
                                                                                (3U 
                                                                                & (VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(6U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U) 
                                                                                >> 5U))] 
                                                                                >> 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(6U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U)))))
                                                                                 : 0U))) 
                                                                << 0x36U) 
                                                               | (((QData)((IData)(
                                                                                ((IData)(tb_soc__DOT__u_tpu__DOT__feeding)
                                                                                 ? 
                                                                                (0xffU 
                                                                                & (((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(5U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U)))
                                                                                 ? 0U
                                                                                 : 
                                                                                (tb_soc__DOT__u_tpu__DOT__wrow[
                                                                                (((IData)(7U) 
                                                                                + 
                                                                                (0x7fU 
                                                                                & VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(5U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U))) 
                                                                                >> 5U)] 
                                                                                << 
                                                                                ((IData)(0x20U) 
                                                                                - 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(5U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U))))) 
                                                                                | (tb_soc__DOT__u_tpu__DOT__wrow[
                                                                                (3U 
                                                                                & (VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(5U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U) 
                                                                                >> 5U))] 
                                                                                >> 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(5U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U)))))
                                                                                 : 0U))) 
                                                                   << 0x2dU) 
                                                                  | (((QData)((IData)(
                                                                                ((IData)(tb_soc__DOT__u_tpu__DOT__feeding)
                                                                                 ? 
                                                                                (0xffU 
                                                                                & (((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(4U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U)))
                                                                                 ? 0U
                                                                                 : 
                                                                                (tb_soc__DOT__u_tpu__DOT__wrow[
                                                                                (((IData)(7U) 
                                                                                + 
                                                                                (0x7fU 
                                                                                & VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(4U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U))) 
                                                                                >> 5U)] 
                                                                                << 
                                                                                ((IData)(0x20U) 
                                                                                - 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(4U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U))))) 
                                                                                | (tb_soc__DOT__u_tpu__DOT__wrow[
                                                                                (3U 
                                                                                & (VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(4U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U) 
                                                                                >> 5U))] 
                                                                                >> 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(4U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U)))))
                                                                                 : 0U))) 
                                                                      << 0x24U) 
                                                                     | (((QData)((IData)(
                                                                                ((IData)(tb_soc__DOT__u_tpu__DOT__feeding)
                                                                                 ? 
                                                                                (0xffU 
                                                                                & (((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(3U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U)))
                                                                                 ? 0U
                                                                                 : 
                                                                                (tb_soc__DOT__u_tpu__DOT__wrow[
                                                                                (((IData)(7U) 
                                                                                + 
                                                                                (0x7fU 
                                                                                & VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(3U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U))) 
                                                                                >> 5U)] 
                                                                                << 
                                                                                ((IData)(0x20U) 
                                                                                - 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(3U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U))))) 
                                                                                | (tb_soc__DOT__u_tpu__DOT__wrow[
                                                                                (3U 
                                                                                & (VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(3U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U) 
                                                                                >> 5U))] 
                                                                                >> 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(3U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U)))))
                                                                                 : 0U))) 
                                                                         << 0x1bU) 
                                                                        | (QData)((IData)(
                                                                                ((((IData)(tb_soc__DOT__u_tpu__DOT__feeding)
                                                                                 ? 
                                                                                (0xffU 
                                                                                & (((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(2U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U)))
                                                                                 ? 0U
                                                                                 : 
                                                                                (tb_soc__DOT__u_tpu__DOT__wrow[
                                                                                (((IData)(7U) 
                                                                                + 
                                                                                (0x7fU 
                                                                                & VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(2U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U))) 
                                                                                >> 5U)] 
                                                                                << 
                                                                                ((IData)(0x20U) 
                                                                                - 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(2U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U))))) 
                                                                                | (tb_soc__DOT__u_tpu__DOT__wrow[
                                                                                (3U 
                                                                                & (VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(2U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U) 
                                                                                >> 5U))] 
                                                                                >> 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(2U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U)))))
                                                                                 : 0U) 
                                                                                << 0x12U) 
                                                                                | ((((IData)(tb_soc__DOT__u_tpu__DOT__feeding)
                                                                                 ? 
                                                                                (0xffU 
                                                                                & (((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U)))
                                                                                 ? 0U
                                                                                 : 
                                                                                (tb_soc__DOT__u_tpu__DOT__wrow[
                                                                                (((IData)(7U) 
                                                                                + 
                                                                                (0x7fU 
                                                                                & VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U))) 
                                                                                >> 5U)] 
                                                                                << 
                                                                                ((IData)(0x20U) 
                                                                                - 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U))))) 
                                                                                | (tb_soc__DOT__u_tpu__DOT__wrow[
                                                                                (3U 
                                                                                & (VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U) 
                                                                                >> 5U))] 
                                                                                >> 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(7,7,32, 
                                                                                (0x1fU 
                                                                                & ((IData)(1U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U)))))
                                                                                 : 0U) 
                                                                                << 9U) 
                                                                                | ((IData)(tb_soc__DOT__u_tpu__DOT__feeding)
                                                                                 ? 
                                                                                (0xffU 
                                                                                & (((0U 
                                                                                == 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(7,7,32, (IData)(tb_soc__DOT__u_tpu__DOT__base), 3U)))
                                                                                 ? 0U
                                                                                 : 
                                                                                (tb_soc__DOT__u_tpu__DOT__wrow[
                                                                                (((IData)(7U) 
                                                                                + 
                                                                                (0x7fU 
                                                                                & VL_SHIFTL_III(7,7,32, (IData)(tb_soc__DOT__u_tpu__DOT__base), 3U))) 
                                                                                >> 5U)] 
                                                                                << 
                                                                                ((IData)(0x20U) 
                                                                                - 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(7,7,32, (IData)(tb_soc__DOT__u_tpu__DOT__base), 3U))))) 
                                                                                | (tb_soc__DOT__u_tpu__DOT__wrow[
                                                                                (3U 
                                                                                & (VL_SHIFTL_III(7,7,32, (IData)(tb_soc__DOT__u_tpu__DOT__base), 3U) 
                                                                                >> 5U))] 
                                                                                >> 
                                                                                (0x1fU 
                                                                                & VL_SHIFTL_III(7,7,32, (IData)(tb_soc__DOT__u_tpu__DOT__base), 3U)))))
                                                                                 : 0U))))))))) 
                                                              >> 0x20U)));
    vlSelf->tb_soc__DOT__u_tpu__DOT__a_flat[2U] = (
                                                   ((IData)(tb_soc__DOT__u_tpu__DOT__feeding)
                                                     ? 
                                                    (0xffU 
                                                     & (((0U 
                                                          == 
                                                          (0x1fU 
                                                           & VL_SHIFTL_III(7,7,32, 
                                                                           (0x1fU 
                                                                            & ((IData)(7U) 
                                                                               + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U)))
                                                          ? 0U
                                                          : 
                                                         (tb_soc__DOT__u_tpu__DOT__wrow[
                                                          (((IData)(7U) 
                                                            + 
                                                            (0x7fU 
                                                             & VL_SHIFTL_III(7,7,32, 
                                                                             (0x1fU 
                                                                              & ((IData)(7U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U))) 
                                                           >> 5U)] 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & VL_SHIFTL_III(7,7,32, 
                                                                            (0x1fU 
                                                                             & ((IData)(7U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U))))) 
                                                        | (tb_soc__DOT__u_tpu__DOT__wrow[
                                                           (3U 
                                                            & (VL_SHIFTL_III(7,7,32, 
                                                                             (0x1fU 
                                                                              & ((IData)(7U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & VL_SHIFTL_III(7,7,32, 
                                                                            (0x1fU 
                                                                             & ((IData)(7U) 
                                                                                + (IData)(tb_soc__DOT__u_tpu__DOT__base))), 3U)))))
                                                     : 0U) 
                                                   >> 1U);
    vlSelf->tb_soc__DOT__u_tpu__DOT__b_flat = ((0xffffffffffffff00ULL 
                                                & vlSelf->tb_soc__DOT__u_tpu__DOT__b_flat) 
                                               | (IData)((IData)(
                                                                 ((IData)(tb_soc__DOT__u_tpu__DOT__feeding)
                                                                   ? 
                                                                  ((8U 
                                                                    >= (IData)(tb_soc__DOT__u_tpu__DOT__kk))
                                                                    ? 
                                                                   vlSelf->tb_soc__DOT__u_tpu__DOT__ker
                                                                   [0U]
                                                                   [tb_soc__DOT__u_tpu__DOT__kk]
                                                                    : 0U)
                                                                   : 0U))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__b_flat = ((0xffffffffffff00ffULL 
                                                & vlSelf->tb_soc__DOT__u_tpu__DOT__b_flat) 
                                               | ((QData)((IData)(
                                                                  ((IData)(tb_soc__DOT__u_tpu__DOT__feeding)
                                                                    ? 
                                                                   ((8U 
                                                                     >= (IData)(tb_soc__DOT__u_tpu__DOT__kk))
                                                                     ? 
                                                                    vlSelf->tb_soc__DOT__u_tpu__DOT__ker
                                                                    [1U]
                                                                    [tb_soc__DOT__u_tpu__DOT__kk]
                                                                     : 0U)
                                                                    : 0U))) 
                                                  << 8U));
    vlSelf->tb_soc__DOT__u_tpu__DOT__b_flat = ((0xffffffffff00ffffULL 
                                                & vlSelf->tb_soc__DOT__u_tpu__DOT__b_flat) 
                                               | ((QData)((IData)(
                                                                  ((IData)(tb_soc__DOT__u_tpu__DOT__feeding)
                                                                    ? 
                                                                   ((8U 
                                                                     >= (IData)(tb_soc__DOT__u_tpu__DOT__kk))
                                                                     ? 
                                                                    vlSelf->tb_soc__DOT__u_tpu__DOT__ker
                                                                    [2U]
                                                                    [tb_soc__DOT__u_tpu__DOT__kk]
                                                                     : 0U)
                                                                    : 0U))) 
                                                  << 0x10U));
    vlSelf->tb_soc__DOT__u_tpu__DOT__b_flat = ((0xffffffff00ffffffULL 
                                                & vlSelf->tb_soc__DOT__u_tpu__DOT__b_flat) 
                                               | ((QData)((IData)(
                                                                  ((IData)(tb_soc__DOT__u_tpu__DOT__feeding)
                                                                    ? 
                                                                   ((8U 
                                                                     >= (IData)(tb_soc__DOT__u_tpu__DOT__kk))
                                                                     ? 
                                                                    vlSelf->tb_soc__DOT__u_tpu__DOT__ker
                                                                    [3U]
                                                                    [tb_soc__DOT__u_tpu__DOT__kk]
                                                                     : 0U)
                                                                    : 0U))) 
                                                  << 0x18U));
    vlSelf->tb_soc__DOT__u_tpu__DOT__b_flat = ((0xffffff00ffffffffULL 
                                                & vlSelf->tb_soc__DOT__u_tpu__DOT__b_flat) 
                                               | ((QData)((IData)(
                                                                  ((IData)(tb_soc__DOT__u_tpu__DOT__feeding)
                                                                    ? 
                                                                   ((8U 
                                                                     >= (IData)(tb_soc__DOT__u_tpu__DOT__kk))
                                                                     ? 
                                                                    vlSelf->tb_soc__DOT__u_tpu__DOT__ker
                                                                    [4U]
                                                                    [tb_soc__DOT__u_tpu__DOT__kk]
                                                                     : 0U)
                                                                    : 0U))) 
                                                  << 0x20U));
    vlSelf->tb_soc__DOT__u_tpu__DOT__b_flat = ((0xffff00ffffffffffULL 
                                                & vlSelf->tb_soc__DOT__u_tpu__DOT__b_flat) 
                                               | ((QData)((IData)(
                                                                  ((IData)(tb_soc__DOT__u_tpu__DOT__feeding)
                                                                    ? 
                                                                   ((8U 
                                                                     >= (IData)(tb_soc__DOT__u_tpu__DOT__kk))
                                                                     ? 
                                                                    vlSelf->tb_soc__DOT__u_tpu__DOT__ker
                                                                    [5U]
                                                                    [tb_soc__DOT__u_tpu__DOT__kk]
                                                                     : 0U)
                                                                    : 0U))) 
                                                  << 0x28U));
    vlSelf->tb_soc__DOT__u_tpu__DOT__b_flat = ((0xff00ffffffffffffULL 
                                                & vlSelf->tb_soc__DOT__u_tpu__DOT__b_flat) 
                                               | ((QData)((IData)(
                                                                  ((IData)(tb_soc__DOT__u_tpu__DOT__feeding)
                                                                    ? 
                                                                   ((8U 
                                                                     >= (IData)(tb_soc__DOT__u_tpu__DOT__kk))
                                                                     ? 
                                                                    vlSelf->tb_soc__DOT__u_tpu__DOT__ker
                                                                    [6U]
                                                                    [tb_soc__DOT__u_tpu__DOT__kk]
                                                                     : 0U)
                                                                    : 0U))) 
                                                  << 0x30U));
    vlSelf->tb_soc__DOT__u_tpu__DOT__b_flat = ((0xffffffffffffffULL 
                                                & vlSelf->tb_soc__DOT__u_tpu__DOT__b_flat) 
                                               | ((QData)((IData)(
                                                                  ((IData)(tb_soc__DOT__u_tpu__DOT__feeding)
                                                                    ? 
                                                                   ((8U 
                                                                     >= (IData)(tb_soc__DOT__u_tpu__DOT__kk))
                                                                     ? 
                                                                    vlSelf->tb_soc__DOT__u_tpu__DOT__ker
                                                                    [7U]
                                                                    [tb_soc__DOT__u_tpu__DOT__kk]
                                                                     : 0U)
                                                                    : 0U))) 
                                                  << 0x38U));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[0U][0U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__a_skew
        [0U];
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[1U][0U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__a_skew
        [1U];
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[2U][0U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__a_skew
        [2U];
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[3U][0U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__a_skew
        [3U];
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[4U][0U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__a_skew
        [4U];
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[5U][0U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__a_skew
        [5U];
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[6U][0U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__a_skew
        [6U];
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[7U][0U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__a_skew
        [7U];
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[0U][0U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__b_skew
        [0U];
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[0U][1U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__b_skew
        [1U];
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[0U][2U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__b_skew
        [2U];
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[0U][3U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__b_skew
        [3U];
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[0U][4U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__b_skew
        [4U];
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[0U][5U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__b_skew
        [5U];
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[0U][6U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__b_skew
        [6U];
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[0U][7U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__b_skew
        [7U];
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_latched 
        = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_xfer)
            ? vlSelf->tb_soc__DOT__rdata : vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_done 
        = ((IData)(vlSelf->tb_soc__DOT__resetn) & (
                                                   ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_xfer) 
                                                    & ((0U 
                                                        != (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_state)) 
                                                       & ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_rinst) 
                                                          | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_rdata) 
                                                             | (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_wdata))))) 
                                                   | ((3U 
                                                       == (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_state)) 
                                                      & (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_rinst))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__ibuf_a_addr = 
        (0x3fffU & ((IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__wr_ibuf)
                     ? (vlSelf->tb_soc__DOT__u_tpu__DOT__awaddr_r 
                        >> 2U) : (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_addr 
                                  >> 2U)));
    vlSelf->tb_soc__DOT__u_tpu__DOT__start_pulse = 
        ((IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__wr_regs) 
         & (IData)((((0U == (0x21cU & vlSelf->tb_soc__DOT__u_tpu__DOT__awaddr_r)) 
                     & (~ (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__busy))) 
                    & vlSelf->tb_soc__DOT__u_tpu__DOT__wdata_r)));
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh 
        = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh) 
           | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu) 
              | (IData)(tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu)));
    vlSelf->tb_soc__DOT____Vcellinp__u_tpu__s_axi_wvalid 
        = ((IData)(vlSelf->tb_soc__DOT__wvalid) & (0x44U 
                                                   == 
                                                   (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_addr 
                                                    >> 0x18U)));
    vlSelf->tb_soc__DOT____Vcellinp__u_tpu__s_axi_awvalid 
        = ((IData)(vlSelf->tb_soc__DOT__awvalid) & 
           (0x44U == (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_addr 
                      >> 0x18U)));
    vlSelf->tb_soc__DOT__b_wready = ((0U == (IData)(vlSelf->tb_soc__DOT__wr_st)) 
                                     & ((IData)(vlSelf->tb_soc__DOT__awvalid) 
                                        & ((0x44U != 
                                            (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_addr 
                                             >> 0x18U)) 
                                           & (IData)(vlSelf->tb_soc__DOT__wvalid))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [0U]
                                                                [0U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [0U]
                                                            [0U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [0U]
                                                                [1U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [0U]
                                                            [1U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [0U]
                                                                [2U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [0U]
                                                            [2U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [0U]
                                                                [3U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [0U]
                                                            [3U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [0U]
                                                                [4U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [0U]
                                                            [4U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [0U]
                                                                [5U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [0U]
                                                            [5U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [0U]
                                                                [6U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [0U]
                                                            [6U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [0U]
                                                                [7U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [0U]
                                                            [7U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [1U]
                                                                [0U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [1U]
                                                            [0U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [1U]
                                                                [1U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [1U]
                                                            [1U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [1U]
                                                                [2U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [1U]
                                                            [2U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [1U]
                                                                [3U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [1U]
                                                            [3U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [1U]
                                                                [4U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [1U]
                                                            [4U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [1U]
                                                                [5U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [1U]
                                                            [5U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [1U]
                                                                [6U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [1U]
                                                            [6U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [1U]
                                                                [7U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [1U]
                                                            [7U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [2U]
                                                                [0U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [2U]
                                                            [0U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [2U]
                                                                [1U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [2U]
                                                            [1U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [2U]
                                                                [2U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [2U]
                                                            [2U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [2U]
                                                                [3U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [2U]
                                                            [3U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [2U]
                                                                [4U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [2U]
                                                            [4U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [2U]
                                                                [5U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [2U]
                                                            [5U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [2U]
                                                                [6U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [2U]
                                                            [6U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [2U]
                                                                [7U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [2U]
                                                            [7U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [3U]
                                                                [0U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [3U]
                                                            [0U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [3U]
                                                                [1U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [3U]
                                                            [1U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [3U]
                                                                [2U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [3U]
                                                            [2U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [3U]
                                                                [3U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [3U]
                                                            [3U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [3U]
                                                                [4U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [3U]
                                                            [4U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [3U]
                                                                [5U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [3U]
                                                            [5U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [3U]
                                                                [6U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [3U]
                                                            [6U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [3U]
                                                                [7U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [3U]
                                                            [7U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [4U]
                                                                [0U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [4U]
                                                            [0U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [4U]
                                                                [1U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [4U]
                                                            [1U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [4U]
                                                                [2U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [4U]
                                                            [2U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [4U]
                                                                [3U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [4U]
                                                            [3U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [4U]
                                                                [4U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [4U]
                                                            [4U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [4U]
                                                                [5U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [4U]
                                                            [5U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [4U]
                                                                [6U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [4U]
                                                            [6U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [4U]
                                                                [7U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [4U]
                                                            [7U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [5U]
                                                                [0U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [5U]
                                                            [0U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [5U]
                                                                [1U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [5U]
                                                            [1U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [5U]
                                                                [2U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [5U]
                                                            [2U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [5U]
                                                                [3U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [5U]
                                                            [3U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [5U]
                                                                [4U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [5U]
                                                            [4U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [5U]
                                                                [5U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [5U]
                                                            [5U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [5U]
                                                                [6U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [5U]
                                                            [6U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [5U]
                                                                [7U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [5U]
                                                            [7U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [6U]
                                                                [0U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [6U]
                                                            [0U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [6U]
                                                                [1U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [6U]
                                                            [1U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [6U]
                                                                [2U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [6U]
                                                            [2U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [6U]
                                                                [3U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [6U]
                                                            [3U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [6U]
                                                                [4U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [6U]
                                                            [4U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [6U]
                                                                [5U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [6U]
                                                            [5U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [6U]
                                                                [6U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [6U]
                                                            [6U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [6U]
                                                                [7U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [6U]
                                                            [7U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [7U]
                                                                [0U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [7U]
                                                            [0U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [7U]
                                                                [1U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [7U]
                                                            [1U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [7U]
                                                                [2U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [7U]
                                                            [2U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [7U]
                                                                [3U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [7U]
                                                            [3U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [7U]
                                                                [4U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [7U]
                                                            [4U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [7U]
                                                                [5U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [7U]
                                                            [5U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [7U]
                                                                [6U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [7U]
                                                            [6U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__prod 
        = (0x1ffffU & VL_MULS_III(17, (0x1ffffU & VL_EXTENDS_II(17,9, 
                                                                vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
                                                                [7U]
                                                                [7U])), 
                                  (0x1ffffU & VL_EXTENDS_II(17,8, 
                                                            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
                                                            [7U]
                                                            [7U]))));
    vlSelf->tb_soc__DOT__u_tpu__DOT__arr_clear = (1U 
                                                  & ((5U 
                                                      == (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__state)) 
                                                     | ((~ (IData)(vlSelf->tb_soc__DOT__resetn)) 
                                                        | (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__start_pulse))));
    vlSelf->tb_soc__DOT__b_aw_fire = ((IData)(vlSelf->tb_soc__DOT__awvalid) 
                                      & ((0x44U != 
                                          (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_addr 
                                           >> 0x18U)) 
                                         & (IData)(vlSelf->tb_soc__DOT__b_wready)));
    vlSelf->tb_soc__DOT__b_arready = ((~ (IData)(vlSelf->tb_soc__DOT__b_aw_fire)) 
                                      & (0U == (IData)(vlSelf->tb_soc__DOT__rd_st)));
}

VL_ATTR_COLD void Vtb_soc___024root___eval_stl(Vtb_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_soc___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_soc___024root___eval_triggers__stl(Vtb_soc___024root* vlSelf);

VL_ATTR_COLD bool Vtb_soc___024root___eval_phase__stl(Vtb_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_soc___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_soc___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_soc___024root___dump_triggers__act(Vtb_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_soc.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_soc___024root___dump_triggers__nba(Vtb_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_soc.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_soc___024root___ctor_var_reset(Vtb_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_soc__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__resetn = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__awvalid = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__wvalid = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__bready = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__arvalid = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__rready = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__rdata = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__trap = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__t_awready = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__t_wready = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__t_bvalid = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__t_arready = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__t_rvalid = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__t_rdata = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__b_wready = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__b_arready = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__b_rdata = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT____Vcellinp__u_tpu__s_axi_wvalid = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT____Vcellinp__u_tpu__s_axi_awvalid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 65536; ++__Vi0) {
        vlSelf->tb_soc__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_soc__DOT__bb_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__rb_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__wr_st = VL_RAND_RESET_I(2);
    vlSelf->tb_soc__DOT__rd_st = VL_RAND_RESET_I(3);
    vlSelf->tb_soc__DOT__raddr_l = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__sim_ptr = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__b_aw_fire = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__dump_and_finish__Vstatic__i = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__dump_and_finish__Vstatic__f1 = 0;
    vlSelf->tb_soc__DOT__dump_and_finish__Vstatic__f2 = 0;
    vlSelf->tb_soc__DOT__dump_and_finish__Vstatic__w = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__pcpi_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__pcpi_insn = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_addr = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_wdata = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_wstrb = VL_RAND_RESET_I(4);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__axi_adapter__DOT__ack_awvalid = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__axi_adapter__DOT__ack_arvalid = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__axi_adapter__DOT__ack_wvalid = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__axi_adapter__DOT__xfer_done = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_la_read = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_la_write = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_la_wdata = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_la_wstrb = VL_RAND_RESET_I(4);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__count_cycle = VL_RAND_RESET_Q(64);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__count_instr = VL_RAND_RESET_Q(64);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_pc = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_next_pc = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1 = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op2 = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_out = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_sh = VL_RAND_RESET_I(5);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__timer = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpuregs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__pcpi_div_wr = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__pcpi_div_rd = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__pcpi_div_wait = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__pcpi_div_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__pcpi_int_wr = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__pcpi_int_rd = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__pcpi_int_ready = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_state = VL_RAND_RESET_I(2);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_wordsize = VL_RAND_RESET_I(2);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_word = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_prefetch = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_rinst = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_rdata = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_wdata = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_xfer = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_latched = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_done = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_lui = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_auipc = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_jal = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_jalr = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_beq = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_bne = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_blt = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_bge = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_bltu = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_bgeu = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_lb = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_lh = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_lw = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_lbu = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_lhu = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_sb = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_sh = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_sw = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_addi = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_slti = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_sltiu = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_xori = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_ori = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_andi = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_slli = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_srli = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_srai = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_add = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_sub = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_sll = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_slt = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_sltu = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_xor = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_srl = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_sra = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_or = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_and = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_rdcycle = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_rdcycleh = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_rdinstr = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_rdinstrh = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_ecall_ebreak = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_fence = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_getq = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_setq = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_retirq = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_maskirq = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_waitirq = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_timer = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_trap = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoded_rd = VL_RAND_RESET_I(5);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoded_rs1 = VL_RAND_RESET_I(5);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoded_rs2 = VL_RAND_RESET_I(5);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoded_imm = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoded_imm_j = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoder_trigger = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoder_pseudo_trigger = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__compressed_instr = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_lui_auipc_jal = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_slli_srli_srai = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_sb_sh_sw = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_lui_auipc_jal_jalr_addi_add_sub = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_slti_blt_slt = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_sltiu_bltu_sltu = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_lbu_lhu_lw = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_alu_reg_imm = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_alu_reg_reg = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_compare = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpu_state = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_store = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_stalu = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_branch = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_compr = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_is_lu = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_is_lh = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_is_lb = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_rd = VL_RAND_RESET_I(5);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__current_pc = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__pcpi_timeout_counter = VL_RAND_RESET_I(4);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__pcpi_timeout = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__do_waitirq = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__alu_out = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__alu_out_q = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__alu_out_0 = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpuregs_write = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpuregs_wrdata = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpuregs_rs1 = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpuregs_rs2 = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mul = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__shift_out = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__active = VL_RAND_RESET_I(4);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rs1 = VL_RAND_RESET_Q(33);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rs2 = VL_RAND_RESET_Q(33);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rd = VL_RAND_RESET_Q(64);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_insn_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_div = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_remu = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait_q = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__dividend = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__divisor = VL_RAND_RESET_Q(63);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__running = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__outsign = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_tpu__DOT__img_w = VL_RAND_RESET_I(10);
    vlSelf->tb_soc__DOT__u_tpu__DOT__img_h = VL_RAND_RESET_I(10);
    vlSelf->tb_soc__DOT__u_tpu__DOT__post_mode = VL_RAND_RESET_I(2);
    vlSelf->tb_soc__DOT__u_tpu__DOT__post_shift = VL_RAND_RESET_I(4);
    vlSelf->tb_soc__DOT__u_tpu__DOT__post_colsel = VL_RAND_RESET_I(3);
    vlSelf->tb_soc__DOT__u_tpu__DOT__busy = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_tpu__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_tpu__DOT__cycles = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 9; ++__Vi1) {
            vlSelf->tb_soc__DOT__u_tpu__DOT__ker[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    vlSelf->tb_soc__DOT__u_tpu__DOT__aw_got = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_tpu__DOT__w_got = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_tpu__DOT__awaddr_r = VL_RAND_RESET_I(18);
    vlSelf->tb_soc__DOT__u_tpu__DOT__wdata_r = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__u_tpu__DOT__wstrb_r = VL_RAND_RESET_I(4);
    vlSelf->tb_soc__DOT__u_tpu__DOT__wr_commit = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_tpu__DOT__wr_regs = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_tpu__DOT__wr_ibuf = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_tpu__DOT__start_pulse = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_tpu__DOT__r_state = VL_RAND_RESET_I(2);
    vlSelf->tb_soc__DOT__u_tpu__DOT__raddr_r = VL_RAND_RESET_I(18);
    vlSelf->tb_soc__DOT__u_tpu__DOT__reg_rdata = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__ibuf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_soc__DOT__u_tpu__DOT__ibuf_a_q = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__u_tpu__DOT__ibuf_b_q = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__u_tpu__DOT__ibuf_a_addr = VL_RAND_RESET_I(14);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__obuf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_soc__DOT__u_tpu__DOT__obuf_a_q = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__u_tpu__DOT__obuf_we = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_tpu__DOT__obuf_waddr = VL_RAND_RESET_I(14);
    vlSelf->tb_soc__DOT__u_tpu__DOT__obuf_wdata = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__u_tpu__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->tb_soc__DOT__u_tpu__DOT__out_rows = VL_RAND_RESET_I(10);
    vlSelf->tb_soc__DOT__u_tpu__DOT__tiles_row = VL_RAND_RESET_I(7);
    vlSelf->tb_soc__DOT__u_tpu__DOT__ntiles = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__tile_cnt = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__f_cnt = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__f_run = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_tpu__DOT__fetch_go = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_tpu__DOT__fi = VL_RAND_RESET_I(4);
    vlSelf->tb_soc__DOT__u_tpu__DOT__cap_r = VL_RAND_RESET_I(2);
    vlSelf->tb_soc__DOT__u_tpu__DOT__cap_w = VL_RAND_RESET_I(2);
    vlSelf->tb_soc__DOT__u_tpu__DOT__cap_v = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_tpu__DOT__f_rb0 = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__f_rb1 = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__f_rb2 = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__f_tilex = VL_RAND_RESET_I(7);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            VL_RAND_RESET_W(128, vlSelf->tb_soc__DOT__u_tpu__DOT__bank[__Vi0][__Vi1]);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->tb_soc__DOT__u_tpu__DOT__boff[__Vi0][__Vi1] = VL_RAND_RESET_I(2);
        }
    }
    vlSelf->tb_soc__DOT__u_tpu__DOT__f_sel = VL_RAND_RESET_I(1);
    vlSelf->tb_soc__DOT__u_tpu__DOT__t_cnt = VL_RAND_RESET_I(5);
    vlSelf->tb_soc__DOT__u_tpu__DOT__dr = VL_RAND_RESET_I(2);
    vlSelf->tb_soc__DOT__u_tpu__DOT__dc = VL_RAND_RESET_I(2);
    vlSelf->tb_soc__DOT__u_tpu__DOT__d_i = VL_RAND_RESET_I(4);
    vlSelf->tb_soc__DOT__u_tpu__DOT__out_wa = VL_RAND_RESET_I(14);
    vlSelf->tb_soc__DOT__u_tpu__DOT__word_r = VL_RAND_RESET_I(24);
    VL_RAND_RESET_W(72, vlSelf->tb_soc__DOT__u_tpu__DOT__a_flat);
    vlSelf->tb_soc__DOT__u_tpu__DOT__b_flat = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(1280, vlSelf->tb_soc__DOT__u_tpu__DOT__acc_flat);
    vlSelf->tb_soc__DOT__u_tpu__DOT__arr_clear = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(72, vlSelf->tb_soc__DOT__u_tpu__DOT__a_flat_r);
    vlSelf->tb_soc__DOT__u_tpu__DOT__b_flat_r = VL_RAND_RESET_Q(64);
    vlSelf->tb_soc__DOT__u_tpu__DOT__c0_r = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__c1_r = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__cs_r = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__d_pix = VL_RAND_RESET_I(3);
    vlSelf->tb_soc__DOT__u_tpu__DOT__px = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT____Vlvbound_hbfea1c97__0 = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT____Vlvbound_h9d130896__0 = VL_RAND_RESET_I(32);
    vlSelf->tb_soc__DOT__u_tpu__DOT____Vlvbound_h2689cd83__0 = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__a_skew[__Vi0] = VL_RAND_RESET_I(9);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__b_skew[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 9; ++__Vi1) {
            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[__Vi0][__Vi1] = VL_RAND_RESET_I(9);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__1__KET____DOT__g_dly__DOT__dly[__Vi0] = VL_RAND_RESET_I(9);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__2__KET____DOT__g_dly__DOT__dly[__Vi0] = VL_RAND_RESET_I(9);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__3__KET____DOT__g_dly__DOT__dly[__Vi0] = VL_RAND_RESET_I(9);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__4__KET____DOT__g_dly__DOT__dly[__Vi0] = VL_RAND_RESET_I(9);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly[__Vi0] = VL_RAND_RESET_I(9);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly[__Vi0] = VL_RAND_RESET_I(9);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly[__Vi0] = VL_RAND_RESET_I(9);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__1__KET____DOT__g_dly__DOT__dly[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__2__KET____DOT__g_dly__DOT__dly[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__3__KET____DOT__g_dly__DOT__dly[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__4__KET____DOT__g_dly__DOT__dly[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc = VL_RAND_RESET_I(20);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_hef02eede__1 = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h45a418e9__1 = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h263d9ac9__1 = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h3e5db997__1 = VL_RAND_RESET_I(9);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_ha4328a29__1 = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h18adc700__1 = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h56a04835__1 = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h7a8acaf2__1 = VL_RAND_RESET_I(8);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__prod = VL_RAND_RESET_I(17);
    vlSelf->__Vtrigprevexpr___TOP__tb_soc__DOT__clk__0 = VL_RAND_RESET_I(1);
}
