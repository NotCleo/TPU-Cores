// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_soc.h for the primary calling header

#include "Vtb_soc__pch.h"
#include "Vtb_soc___024root.h"

VlCoroutine Vtb_soc___024root___eval_initial__TOP__Vtiming__0(Vtb_soc___024root* vlSelf);
VlCoroutine Vtb_soc___024root___eval_initial__TOP__Vtiming__1(Vtb_soc___024root* vlSelf);
VlCoroutine Vtb_soc___024root___eval_initial__TOP__Vtiming__2(Vtb_soc___024root* vlSelf);

void Vtb_soc___024root___eval_initial(Vtb_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root___eval_initial\n"); );
    // Body
    Vtb_soc___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_soc___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_soc___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_soc__DOT__clk__0 
        = vlSelf->tb_soc__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vtb_soc___024root___eval_initial__TOP__Vtiming__0(Vtb_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    VlWide<7>/*223:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x5f73696dU;
    __Vtemp_1[2U] = 0x77617265U;
    __Vtemp_1[3U] = 0x6669726dU;
    __Vtemp_1[4U] = 0x696c642fU;
    __Vtemp_1[5U] = 0x772f6275U;
    __Vtemp_1[6U] = 0x2e2e2f66U;
    VL_READMEM_N(true, 32, 65536, 0, VL_CVT_PACK_STR_NW(7, __Vtemp_1)
                 ,  &(vlSelf->tb_soc__DOT__ram), 0, ~0ULL);
    co_await vlSelf->__VtrigSched_h46ccec15__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_soc.clk)", 
                                                       "tb_soc.v", 
                                                       166);
    co_await vlSelf->__VtrigSched_h46ccec15__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_soc.clk)", 
                                                       "tb_soc.v", 
                                                       166);
    co_await vlSelf->__VtrigSched_h46ccec15__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_soc.clk)", 
                                                       "tb_soc.v", 
                                                       166);
    co_await vlSelf->__VtrigSched_h46ccec15__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_soc.clk)", 
                                                       "tb_soc.v", 
                                                       166);
    co_await vlSelf->__VtrigSched_h46ccec15__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_soc.clk)", 
                                                       "tb_soc.v", 
                                                       166);
    co_await vlSelf->__VtrigSched_h46ccec15__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_soc.clk)", 
                                                       "tb_soc.v", 
                                                       166);
    co_await vlSelf->__VtrigSched_h46ccec15__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_soc.clk)", 
                                                       "tb_soc.v", 
                                                       166);
    co_await vlSelf->__VtrigSched_h46ccec15__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_soc.clk)", 
                                                       "tb_soc.v", 
                                                       166);
    co_await vlSelf->__VtrigSched_h46ccec15__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_soc.clk)", 
                                                       "tb_soc.v", 
                                                       166);
    co_await vlSelf->__VtrigSched_h46ccec15__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_soc.clk)", 
                                                       "tb_soc.v", 
                                                       166);
    co_await vlSelf->__VtrigSched_h46ccec15__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_soc.clk)", 
                                                       "tb_soc.v", 
                                                       166);
    co_await vlSelf->__VtrigSched_h46ccec15__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_soc.clk)", 
                                                       "tb_soc.v", 
                                                       166);
    co_await vlSelf->__VtrigSched_h46ccec15__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_soc.clk)", 
                                                       "tb_soc.v", 
                                                       166);
    co_await vlSelf->__VtrigSched_h46ccec15__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_soc.clk)", 
                                                       "tb_soc.v", 
                                                       166);
    co_await vlSelf->__VtrigSched_h46ccec15__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_soc.clk)", 
                                                       "tb_soc.v", 
                                                       166);
    co_await vlSelf->__VtrigSched_h46ccec15__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_soc.clk)", 
                                                       "tb_soc.v", 
                                                       166);
    co_await vlSelf->__VtrigSched_h46ccec15__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_soc.clk)", 
                                                       "tb_soc.v", 
                                                       166);
    co_await vlSelf->__VtrigSched_h46ccec15__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_soc.clk)", 
                                                       "tb_soc.v", 
                                                       166);
    co_await vlSelf->__VtrigSched_h46ccec15__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_soc.clk)", 
                                                       "tb_soc.v", 
                                                       166);
    co_await vlSelf->__VtrigSched_h46ccec15__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_soc.clk)", 
                                                       "tb_soc.v", 
                                                       166);
    vlSelf->tb_soc__DOT__resetn = 1U;
}

VL_INLINE_OPT VlCoroutine Vtb_soc___024root___eval_initial__TOP__Vtiming__1(Vtb_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0xe8d4a51000ULL, 
                                       nullptr, "tb_soc.v", 
                                       171);
    VL_WRITEF("\n[tb_soc] TIMEOUT\n");
    VL_FINISH_MT("tb_soc.v", 173, "");
}

VL_INLINE_OPT VlCoroutine Vtb_soc___024root___eval_initial__TOP__Vtiming__2(Vtb_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "tb_soc.v", 
                                           19);
        vlSelf->tb_soc__DOT__clk = (1U & (~ (IData)(vlSelf->tb_soc__DOT__clk)));
    }
}

VL_INLINE_OPT void Vtb_soc___024root___act_sequent__TOP__0(Vtb_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root___act_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu;
    tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu = 0;
    // Body
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mul = 0U;
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_la_write 
        = ((IData)(vlSelf->tb_soc__DOT__resetn) & (
                                                   (~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_state)))) 
                                                   & (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_wdata)));
    vlSelf->tb_soc__DOT__u_tpu__DOT__arr_clear = (1U 
                                                  & ((5U 
                                                      == (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__state)) 
                                                     | ((~ (IData)(vlSelf->tb_soc__DOT__resetn)) 
                                                        | (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__start_pulse))));
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_la_read 
        = ((IData)(vlSelf->tb_soc__DOT__resetn) & (
                                                   (~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_state)))) 
                                                   & ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_rinst) 
                                                      | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_prefetch) 
                                                         | (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_rdata)))));
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
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh 
        = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh) 
           | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu) 
              | (IData)(tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu)));
}

void Vtb_soc___024root___eval_act(Vtb_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root___eval_act\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_soc___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_soc___024root___nba_sequent__TOP__0(Vtb_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__set_mem_do_rinst;
    tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__set_mem_do_rinst = 0;
    CData/*0:0*/ tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__set_mem_do_rdata;
    tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__set_mem_do_rdata = 0;
    CData/*0:0*/ tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__set_mem_do_wdata;
    tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__set_mem_do_wdata = 0;
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
    SData/*15:0*/ __Vdlyvdim0__tb_soc__DOT__ram__v0;
    __Vdlyvdim0__tb_soc__DOT__ram__v0 = 0;
    CData/*4:0*/ __Vdlyvlsb__tb_soc__DOT__ram__v0;
    __Vdlyvlsb__tb_soc__DOT__ram__v0 = 0;
    CData/*7:0*/ __Vdlyvval__tb_soc__DOT__ram__v0;
    __Vdlyvval__tb_soc__DOT__ram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__ram__v0;
    __Vdlyvset__tb_soc__DOT__ram__v0 = 0;
    SData/*15:0*/ __Vdlyvdim0__tb_soc__DOT__ram__v1;
    __Vdlyvdim0__tb_soc__DOT__ram__v1 = 0;
    CData/*4:0*/ __Vdlyvlsb__tb_soc__DOT__ram__v1;
    __Vdlyvlsb__tb_soc__DOT__ram__v1 = 0;
    CData/*7:0*/ __Vdlyvval__tb_soc__DOT__ram__v1;
    __Vdlyvval__tb_soc__DOT__ram__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__ram__v1;
    __Vdlyvset__tb_soc__DOT__ram__v1 = 0;
    SData/*15:0*/ __Vdlyvdim0__tb_soc__DOT__ram__v2;
    __Vdlyvdim0__tb_soc__DOT__ram__v2 = 0;
    CData/*4:0*/ __Vdlyvlsb__tb_soc__DOT__ram__v2;
    __Vdlyvlsb__tb_soc__DOT__ram__v2 = 0;
    CData/*7:0*/ __Vdlyvval__tb_soc__DOT__ram__v2;
    __Vdlyvval__tb_soc__DOT__ram__v2 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__ram__v2;
    __Vdlyvset__tb_soc__DOT__ram__v2 = 0;
    SData/*15:0*/ __Vdlyvdim0__tb_soc__DOT__ram__v3;
    __Vdlyvdim0__tb_soc__DOT__ram__v3 = 0;
    CData/*4:0*/ __Vdlyvlsb__tb_soc__DOT__ram__v3;
    __Vdlyvlsb__tb_soc__DOT__ram__v3 = 0;
    CData/*7:0*/ __Vdlyvval__tb_soc__DOT__ram__v3;
    __Vdlyvval__tb_soc__DOT__ram__v3 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__ram__v3;
    __Vdlyvset__tb_soc__DOT__ram__v3 = 0;
    IData/*31:0*/ __Vdly__tb_soc__DOT__sim_ptr;
    __Vdly__tb_soc__DOT__sim_ptr = 0;
    CData/*1:0*/ __Vdly__tb_soc__DOT__wr_st;
    __Vdly__tb_soc__DOT__wr_st = 0;
    IData/*31:0*/ __Vdly__tb_soc__DOT__raddr_l;
    __Vdly__tb_soc__DOT__raddr_l = 0;
    CData/*2:0*/ __Vdly__tb_soc__DOT__rd_st;
    __Vdly__tb_soc__DOT__rd_st = 0;
    CData/*1:0*/ __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_state;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_state = 0;
    CData/*4:0*/ __Vdlyvdim0__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpuregs__v0;
    __Vdlyvdim0__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpuregs__v0 = 0;
    IData/*31:0*/ __Vdlyvval__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpuregs__v0;
    __Vdlyvval__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpuregs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpuregs__v0;
    __Vdlyvset__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpuregs__v0 = 0;
    CData/*4:0*/ __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_sh;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_sh = 0;
    IData/*31:0*/ __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_out;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_out = 0;
    QData/*63:0*/ __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__count_cycle;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__count_cycle = 0;
    CData/*0:0*/ __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoder_trigger;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoder_trigger = 0;
    CData/*0:0*/ __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoder_pseudo_trigger;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoder_pseudo_trigger = 0;
    CData/*0:0*/ __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_rinst;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_rinst = 0;
    CData/*1:0*/ __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_wordsize;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_wordsize = 0;
    CData/*0:0*/ __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_is_lu;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_is_lu = 0;
    CData/*0:0*/ __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_is_lh;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_is_lh = 0;
    CData/*0:0*/ __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_is_lb;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_is_lb = 0;
    IData/*31:0*/ __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_pc;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_pc = 0;
    QData/*63:0*/ __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__count_instr;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__count_instr = 0;
    CData/*0:0*/ __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_prefetch;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_prefetch = 0;
    CData/*7:0*/ __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpu_state;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpu_state = 0;
    IData/*31:0*/ __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1 = 0;
    CData/*0:0*/ __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__pcpi_valid;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__pcpi_valid = 0;
    CData/*3:0*/ __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__pcpi_timeout_counter;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__pcpi_timeout_counter = 0;
    CData/*3:0*/ __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__active;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__active = 0;
    CData/*0:0*/ __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_div;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_div = 0;
    CData/*0:0*/ __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu = 0;
    CData/*0:0*/ __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem = 0;
    CData/*0:0*/ __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_remu;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_remu = 0;
    CData/*0:0*/ __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__running;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__running = 0;
    IData/*31:0*/ __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__dividend;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__dividend = 0;
    QData/*62:0*/ __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__divisor;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__divisor = 0;
    IData/*31:0*/ __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient = 0;
    IData/*31:0*/ __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk = 0;
    CData/*0:0*/ __Vdly__tb_soc__DOT__t_bvalid;
    __Vdly__tb_soc__DOT__t_bvalid = 0;
    CData/*2:0*/ __Vdlyvdim0__tb_soc__DOT__u_tpu__DOT__ker__v0;
    __Vdlyvdim0__tb_soc__DOT__u_tpu__DOT__ker__v0 = 0;
    CData/*3:0*/ __Vdlyvdim1__tb_soc__DOT__u_tpu__DOT__ker__v0;
    __Vdlyvdim1__tb_soc__DOT__u_tpu__DOT__ker__v0 = 0;
    CData/*7:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__ker__v0;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__ker__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__ker__v0;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__ker__v0 = 0;
    IData/*17:0*/ __Vdly__tb_soc__DOT__u_tpu__DOT__raddr_r;
    __Vdly__tb_soc__DOT__u_tpu__DOT__raddr_r = 0;
    CData/*1:0*/ __Vdly__tb_soc__DOT__u_tpu__DOT__r_state;
    __Vdly__tb_soc__DOT__u_tpu__DOT__r_state = 0;
    SData/*13:0*/ __Vdlyvdim0__tb_soc__DOT__u_tpu__DOT__ibuf__v0;
    __Vdlyvdim0__tb_soc__DOT__u_tpu__DOT__ibuf__v0 = 0;
    CData/*4:0*/ __Vdlyvlsb__tb_soc__DOT__u_tpu__DOT__ibuf__v0;
    __Vdlyvlsb__tb_soc__DOT__u_tpu__DOT__ibuf__v0 = 0;
    CData/*7:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__ibuf__v0;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__ibuf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__ibuf__v0;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__ibuf__v0 = 0;
    SData/*13:0*/ __Vdlyvdim0__tb_soc__DOT__u_tpu__DOT__ibuf__v1;
    __Vdlyvdim0__tb_soc__DOT__u_tpu__DOT__ibuf__v1 = 0;
    CData/*4:0*/ __Vdlyvlsb__tb_soc__DOT__u_tpu__DOT__ibuf__v1;
    __Vdlyvlsb__tb_soc__DOT__u_tpu__DOT__ibuf__v1 = 0;
    CData/*7:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__ibuf__v1;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__ibuf__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__ibuf__v1;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__ibuf__v1 = 0;
    SData/*13:0*/ __Vdlyvdim0__tb_soc__DOT__u_tpu__DOT__ibuf__v2;
    __Vdlyvdim0__tb_soc__DOT__u_tpu__DOT__ibuf__v2 = 0;
    CData/*4:0*/ __Vdlyvlsb__tb_soc__DOT__u_tpu__DOT__ibuf__v2;
    __Vdlyvlsb__tb_soc__DOT__u_tpu__DOT__ibuf__v2 = 0;
    CData/*7:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__ibuf__v2;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__ibuf__v2 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__ibuf__v2;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__ibuf__v2 = 0;
    SData/*13:0*/ __Vdlyvdim0__tb_soc__DOT__u_tpu__DOT__ibuf__v3;
    __Vdlyvdim0__tb_soc__DOT__u_tpu__DOT__ibuf__v3 = 0;
    CData/*4:0*/ __Vdlyvlsb__tb_soc__DOT__u_tpu__DOT__ibuf__v3;
    __Vdlyvlsb__tb_soc__DOT__u_tpu__DOT__ibuf__v3 = 0;
    CData/*7:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__ibuf__v3;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__ibuf__v3 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__ibuf__v3;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__ibuf__v3 = 0;
    SData/*13:0*/ __Vdlyvdim0__tb_soc__DOT__u_tpu__DOT__obuf__v0;
    __Vdlyvdim0__tb_soc__DOT__u_tpu__DOT__obuf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__obuf__v0;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__obuf__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__obuf__v0;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__obuf__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__tb_soc__DOT__u_tpu__DOT__bank__v0;
    __Vdlyvdim0__tb_soc__DOT__u_tpu__DOT__bank__v0 = 0;
    CData/*1:0*/ __Vdlyvdim1__tb_soc__DOT__u_tpu__DOT__bank__v0;
    __Vdlyvdim1__tb_soc__DOT__u_tpu__DOT__bank__v0 = 0;
    CData/*6:0*/ __Vdlyvlsb__tb_soc__DOT__u_tpu__DOT__bank__v0;
    __Vdlyvlsb__tb_soc__DOT__u_tpu__DOT__bank__v0 = 0;
    IData/*31:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__bank__v0;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__bank__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__bank__v0;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__bank__v0 = 0;
    CData/*3:0*/ __Vdly__tb_soc__DOT__u_tpu__DOT__fi;
    __Vdly__tb_soc__DOT__u_tpu__DOT__fi = 0;
    IData/*19:0*/ __Vdly__tb_soc__DOT__u_tpu__DOT__f_cnt;
    __Vdly__tb_soc__DOT__u_tpu__DOT__f_cnt = 0;
    IData/*16:0*/ __Vdly__tb_soc__DOT__u_tpu__DOT__f_rb0;
    __Vdly__tb_soc__DOT__u_tpu__DOT__f_rb0 = 0;
    IData/*16:0*/ __Vdly__tb_soc__DOT__u_tpu__DOT__f_rb1;
    __Vdly__tb_soc__DOT__u_tpu__DOT__f_rb1 = 0;
    IData/*16:0*/ __Vdly__tb_soc__DOT__u_tpu__DOT__f_rb2;
    __Vdly__tb_soc__DOT__u_tpu__DOT__f_rb2 = 0;
    CData/*6:0*/ __Vdly__tb_soc__DOT__u_tpu__DOT__f_tilex;
    __Vdly__tb_soc__DOT__u_tpu__DOT__f_tilex = 0;
    CData/*0:0*/ __Vdly__tb_soc__DOT__u_tpu__DOT__f_run;
    __Vdly__tb_soc__DOT__u_tpu__DOT__f_run = 0;
    CData/*0:0*/ __Vdlyvdim0__tb_soc__DOT__u_tpu__DOT__boff__v0;
    __Vdlyvdim0__tb_soc__DOT__u_tpu__DOT__boff__v0 = 0;
    CData/*1:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__boff__v0;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__boff__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__boff__v0;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__boff__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__tb_soc__DOT__u_tpu__DOT__boff__v1;
    __Vdlyvdim0__tb_soc__DOT__u_tpu__DOT__boff__v1 = 0;
    CData/*1:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__boff__v1;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__boff__v1 = 0;
    CData/*0:0*/ __Vdlyvdim0__tb_soc__DOT__u_tpu__DOT__boff__v2;
    __Vdlyvdim0__tb_soc__DOT__u_tpu__DOT__boff__v2 = 0;
    CData/*1:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__boff__v2;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__boff__v2 = 0;
    CData/*0:0*/ __Vdly__tb_soc__DOT__u_tpu__DOT__fetch_go;
    __Vdly__tb_soc__DOT__u_tpu__DOT__fetch_go = 0;
    CData/*2:0*/ __Vdly__tb_soc__DOT__u_tpu__DOT__state;
    __Vdly__tb_soc__DOT__u_tpu__DOT__state = 0;
    IData/*19:0*/ __Vdly__tb_soc__DOT__u_tpu__DOT__tile_cnt;
    __Vdly__tb_soc__DOT__u_tpu__DOT__tile_cnt = 0;
    CData/*3:0*/ __Vdly__tb_soc__DOT__u_tpu__DOT__d_i;
    __Vdly__tb_soc__DOT__u_tpu__DOT__d_i = 0;
    CData/*1:0*/ __Vdly__tb_soc__DOT__u_tpu__DOT__dc;
    __Vdly__tb_soc__DOT__u_tpu__DOT__dc = 0;
    CData/*4:0*/ __Vdly__tb_soc__DOT__u_tpu__DOT__t_cnt;
    __Vdly__tb_soc__DOT__u_tpu__DOT__t_cnt = 0;
    SData/*8:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__1__KET____DOT__g_dly__DOT__dly__v0;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__1__KET____DOT__g_dly__DOT__dly__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__2__KET____DOT__g_dly__DOT__dly__v0;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__2__KET____DOT__g_dly__DOT__dly__v0 = 0;
    SData/*8:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__2__KET____DOT__g_dly__DOT__dly__v2;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__2__KET____DOT__g_dly__DOT__dly__v2 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__2__KET____DOT__g_dly__DOT__dly__v2;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__2__KET____DOT__g_dly__DOT__dly__v2 = 0;
    SData/*8:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__2__KET____DOT__g_dly__DOT__dly__v3;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__2__KET____DOT__g_dly__DOT__dly__v3 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__3__KET____DOT__g_dly__DOT__dly__v0;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__3__KET____DOT__g_dly__DOT__dly__v0 = 0;
    SData/*8:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__3__KET____DOT__g_dly__DOT__dly__v3;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__3__KET____DOT__g_dly__DOT__dly__v3 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__3__KET____DOT__g_dly__DOT__dly__v3;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__3__KET____DOT__g_dly__DOT__dly__v3 = 0;
    SData/*8:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__3__KET____DOT__g_dly__DOT__dly__v4;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__3__KET____DOT__g_dly__DOT__dly__v4 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__3__KET____DOT__g_dly__DOT__dly__v4;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__3__KET____DOT__g_dly__DOT__dly__v4 = 0;
    SData/*8:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__3__KET____DOT__g_dly__DOT__dly__v5;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__3__KET____DOT__g_dly__DOT__dly__v5 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__3__KET____DOT__g_dly__DOT__dly__v5;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__3__KET____DOT__g_dly__DOT__dly__v5 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__4__KET____DOT__g_dly__DOT__dly__v0;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__4__KET____DOT__g_dly__DOT__dly__v0 = 0;
    SData/*8:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__4__KET____DOT__g_dly__DOT__dly__v4;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__4__KET____DOT__g_dly__DOT__dly__v4 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__4__KET____DOT__g_dly__DOT__dly__v4;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__4__KET____DOT__g_dly__DOT__dly__v4 = 0;
    SData/*8:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__4__KET____DOT__g_dly__DOT__dly__v5;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__4__KET____DOT__g_dly__DOT__dly__v5 = 0;
    SData/*8:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__4__KET____DOT__g_dly__DOT__dly__v6;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__4__KET____DOT__g_dly__DOT__dly__v6 = 0;
    SData/*8:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__4__KET____DOT__g_dly__DOT__dly__v7;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__4__KET____DOT__g_dly__DOT__dly__v7 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly__v0;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly__v0 = 0;
    SData/*8:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly__v5;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly__v5 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly__v5;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly__v5 = 0;
    SData/*8:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly__v6;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly__v6 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly__v6;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly__v6 = 0;
    SData/*8:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly__v7;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly__v7 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly__v7;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly__v7 = 0;
    SData/*8:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly__v8;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly__v8 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly__v8;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly__v8 = 0;
    SData/*8:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly__v9;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly__v9 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly__v9;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly__v9 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v0;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v0 = 0;
    SData/*8:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v6;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v6 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v6;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v6 = 0;
    SData/*8:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v7;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v7 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v7;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v7 = 0;
    SData/*8:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v8;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v8 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v8;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v8 = 0;
    SData/*8:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v9;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v9 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v9;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v9 = 0;
    SData/*8:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v10;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v10 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v10;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v10 = 0;
    SData/*8:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v11;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v11 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v11;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v11 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v0;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v0 = 0;
    SData/*8:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v7;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v7 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v7;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v7 = 0;
    SData/*8:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v8;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v8 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v8;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v8 = 0;
    SData/*8:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v9;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v9 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v9;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v9 = 0;
    SData/*8:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v10;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v10 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v10;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v10 = 0;
    SData/*8:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v11;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v11 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v11;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v11 = 0;
    SData/*8:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v12;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v12 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v12;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v12 = 0;
    SData/*8:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v13;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v13 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v13;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v13 = 0;
    CData/*7:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__1__KET____DOT__g_dly__DOT__dly__v0;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__1__KET____DOT__g_dly__DOT__dly__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__2__KET____DOT__g_dly__DOT__dly__v0;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__2__KET____DOT__g_dly__DOT__dly__v0 = 0;
    CData/*7:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__2__KET____DOT__g_dly__DOT__dly__v2;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__2__KET____DOT__g_dly__DOT__dly__v2 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__2__KET____DOT__g_dly__DOT__dly__v2;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__2__KET____DOT__g_dly__DOT__dly__v2 = 0;
    CData/*7:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__2__KET____DOT__g_dly__DOT__dly__v3;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__2__KET____DOT__g_dly__DOT__dly__v3 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__3__KET____DOT__g_dly__DOT__dly__v0;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__3__KET____DOT__g_dly__DOT__dly__v0 = 0;
    CData/*7:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__3__KET____DOT__g_dly__DOT__dly__v3;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__3__KET____DOT__g_dly__DOT__dly__v3 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__3__KET____DOT__g_dly__DOT__dly__v3;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__3__KET____DOT__g_dly__DOT__dly__v3 = 0;
    CData/*7:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__3__KET____DOT__g_dly__DOT__dly__v4;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__3__KET____DOT__g_dly__DOT__dly__v4 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__3__KET____DOT__g_dly__DOT__dly__v4;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__3__KET____DOT__g_dly__DOT__dly__v4 = 0;
    CData/*7:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__3__KET____DOT__g_dly__DOT__dly__v5;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__3__KET____DOT__g_dly__DOT__dly__v5 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__3__KET____DOT__g_dly__DOT__dly__v5;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__3__KET____DOT__g_dly__DOT__dly__v5 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__4__KET____DOT__g_dly__DOT__dly__v0;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__4__KET____DOT__g_dly__DOT__dly__v0 = 0;
    CData/*7:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__4__KET____DOT__g_dly__DOT__dly__v4;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__4__KET____DOT__g_dly__DOT__dly__v4 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__4__KET____DOT__g_dly__DOT__dly__v4;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__4__KET____DOT__g_dly__DOT__dly__v4 = 0;
    CData/*7:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__4__KET____DOT__g_dly__DOT__dly__v5;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__4__KET____DOT__g_dly__DOT__dly__v5 = 0;
    CData/*7:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__4__KET____DOT__g_dly__DOT__dly__v6;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__4__KET____DOT__g_dly__DOT__dly__v6 = 0;
    CData/*7:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__4__KET____DOT__g_dly__DOT__dly__v7;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__4__KET____DOT__g_dly__DOT__dly__v7 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly__v0;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly__v0 = 0;
    CData/*7:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly__v5;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly__v5 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly__v5;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly__v5 = 0;
    CData/*7:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly__v6;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly__v6 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly__v6;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly__v6 = 0;
    CData/*7:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly__v7;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly__v7 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly__v7;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly__v7 = 0;
    CData/*7:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly__v8;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly__v8 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly__v8;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly__v8 = 0;
    CData/*7:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly__v9;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly__v9 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly__v9;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly__v9 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v0;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v0 = 0;
    CData/*7:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v6;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v6 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v6;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v6 = 0;
    CData/*7:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v7;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v7 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v7;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v7 = 0;
    CData/*7:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v8;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v8 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v8;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v8 = 0;
    CData/*7:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v9;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v9 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v9;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v9 = 0;
    CData/*7:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v10;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v10 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v10;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v10 = 0;
    CData/*7:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v11;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v11 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v11;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v11 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v0;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v0 = 0;
    CData/*7:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v7;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v7 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v7;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v7 = 0;
    CData/*7:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v8;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v8 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v8;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v8 = 0;
    CData/*7:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v9;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v9 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v9;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v9 = 0;
    CData/*7:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v10;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v10 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v10;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v10 = 0;
    CData/*7:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v11;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v11 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v11;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v11 = 0;
    CData/*7:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v12;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v12 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v12;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v12 = 0;
    CData/*7:0*/ __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v13;
    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v13 = 0;
    CData/*0:0*/ __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v13;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v13 = 0;
    VlWide<4>/*127:0*/ __Vtemp_65;
    VlWide<4>/*127:0*/ __Vtemp_67;
    // Body
    __Vdly__tb_soc__DOT__t_bvalid = vlSelf->tb_soc__DOT__t_bvalid;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__pcpi_timeout_counter 
        = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__pcpi_timeout_counter;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__2__KET____DOT__g_dly__DOT__dly__v0 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__2__KET____DOT__g_dly__DOT__dly__v2 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__2__KET____DOT__g_dly__DOT__dly__v0 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__2__KET____DOT__g_dly__DOT__dly__v2 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__4__KET____DOT__g_dly__DOT__dly__v0 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__4__KET____DOT__g_dly__DOT__dly__v4 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__4__KET____DOT__g_dly__DOT__dly__v0 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__4__KET____DOT__g_dly__DOT__dly__v4 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__3__KET____DOT__g_dly__DOT__dly__v0 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__3__KET____DOT__g_dly__DOT__dly__v3 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__3__KET____DOT__g_dly__DOT__dly__v4 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__3__KET____DOT__g_dly__DOT__dly__v5 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__3__KET____DOT__g_dly__DOT__dly__v0 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__3__KET____DOT__g_dly__DOT__dly__v3 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__3__KET____DOT__g_dly__DOT__dly__v4 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__3__KET____DOT__g_dly__DOT__dly__v5 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly__v0 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly__v5 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly__v6 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly__v7 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly__v8 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly__v9 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly__v0 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly__v5 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly__v6 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly__v7 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly__v8 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly__v9 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v0 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v6 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v7 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v8 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v9 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v10 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v11 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v0 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v6 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v7 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v8 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v9 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v10 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v11 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v0 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v7 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v8 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v9 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v10 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v11 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v12 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v13 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v0 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v7 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v8 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v9 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v10 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v11 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v12 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v13 = 0U;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__count_instr 
        = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__count_instr;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_is_lb 
        = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_is_lb;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_is_lh 
        = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_is_lh;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_is_lu 
        = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_is_lu;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoder_pseudo_trigger 
        = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoder_pseudo_trigger;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__count_cycle 
        = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__count_cycle;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_sh 
        = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_sh;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoder_trigger 
        = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoder_trigger;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_prefetch 
        = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_prefetch;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_pc 
        = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_pc;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_wordsize 
        = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_wordsize;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_rinst 
        = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_rinst;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_out 
        = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_out;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpu_state 
        = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpu_state;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__pcpi_valid 
        = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__pcpi_valid;
    if (VL_UNLIKELY(((IData)(vlSelf->tb_soc__DOT__resetn) 
                     & (IData)(vlSelf->tb_soc__DOT__trap)))) {
        VL_WRITEF("\n[tb_soc] CPU TRAP at cycle %0# -- firmware crashed\n",
                  64,VL_DIV_QQQ(64, (QData)(VL_TIME_UNITED_Q(1000)), 0xaULL));
        VL_FINISH_MT("tb_soc.v", 161, "");
    }
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1 
        = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1;
    __Vdlyvset__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpuregs__v0 = 0U;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_state 
        = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_state;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__active 
        = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__active;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk 
        = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient 
        = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__divisor 
        = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__divisor;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__dividend 
        = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__dividend;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__running 
        = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__running;
    __Vdly__tb_soc__DOT__u_tpu__DOT__r_state = vlSelf->tb_soc__DOT__u_tpu__DOT__r_state;
    __Vdly__tb_soc__DOT__u_tpu__DOT__raddr_r = vlSelf->tb_soc__DOT__u_tpu__DOT__raddr_r;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__ibuf__v0 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__ibuf__v1 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__ibuf__v2 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__ibuf__v3 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__ker__v0 = 0U;
    __Vdly__tb_soc__DOT__u_tpu__DOT__f_run = vlSelf->tb_soc__DOT__u_tpu__DOT__f_run;
    __Vdly__tb_soc__DOT__u_tpu__DOT__f_tilex = vlSelf->tb_soc__DOT__u_tpu__DOT__f_tilex;
    __Vdly__tb_soc__DOT__u_tpu__DOT__f_rb2 = vlSelf->tb_soc__DOT__u_tpu__DOT__f_rb2;
    __Vdly__tb_soc__DOT__u_tpu__DOT__f_rb1 = vlSelf->tb_soc__DOT__u_tpu__DOT__f_rb1;
    __Vdly__tb_soc__DOT__u_tpu__DOT__f_rb0 = vlSelf->tb_soc__DOT__u_tpu__DOT__f_rb0;
    __Vdly__tb_soc__DOT__u_tpu__DOT__fi = vlSelf->tb_soc__DOT__u_tpu__DOT__fi;
    __Vdly__tb_soc__DOT__u_tpu__DOT__f_cnt = vlSelf->tb_soc__DOT__u_tpu__DOT__f_cnt;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__bank__v0 = 0U;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__boff__v0 = 0U;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_remu 
        = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_remu;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem 
        = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu 
        = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_div 
        = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_div;
    __Vdly__tb_soc__DOT__raddr_l = vlSelf->tb_soc__DOT__raddr_l;
    __Vdly__tb_soc__DOT__sim_ptr = vlSelf->tb_soc__DOT__sim_ptr;
    __Vdly__tb_soc__DOT__rd_st = vlSelf->tb_soc__DOT__rd_st;
    __Vdly__tb_soc__DOT__wr_st = vlSelf->tb_soc__DOT__wr_st;
    __Vdlyvset__tb_soc__DOT__ram__v0 = 0U;
    __Vdlyvset__tb_soc__DOT__ram__v1 = 0U;
    __Vdlyvset__tb_soc__DOT__ram__v2 = 0U;
    __Vdlyvset__tb_soc__DOT__ram__v3 = 0U;
    __Vdly__tb_soc__DOT__u_tpu__DOT__fetch_go = vlSelf->tb_soc__DOT__u_tpu__DOT__fetch_go;
    __Vdly__tb_soc__DOT__u_tpu__DOT__d_i = vlSelf->tb_soc__DOT__u_tpu__DOT__d_i;
    __Vdly__tb_soc__DOT__u_tpu__DOT__tile_cnt = vlSelf->tb_soc__DOT__u_tpu__DOT__tile_cnt;
    __Vdly__tb_soc__DOT__u_tpu__DOT__t_cnt = vlSelf->tb_soc__DOT__u_tpu__DOT__t_cnt;
    __Vdly__tb_soc__DOT__u_tpu__DOT__state = vlSelf->tb_soc__DOT__u_tpu__DOT__state;
    __Vdly__tb_soc__DOT__u_tpu__DOT__dc = vlSelf->tb_soc__DOT__u_tpu__DOT__dc;
    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__obuf__v0 = 0U;
    if ((((IData)(vlSelf->tb_soc__DOT__resetn) & (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpuregs_write)) 
         & (0U != (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_rd)))) {
        __Vdlyvval__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpuregs__v0 
            = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpuregs_wrdata;
        __Vdlyvset__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpuregs__v0 = 1U;
        __Vdlyvdim0__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpuregs__v0 
            = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_rd;
    }
    if (vlSelf->tb_soc__DOT__resetn) {
        if (vlSelf->tb_soc__DOT__u_tpu__DOT__wr_commit) {
            __Vdly__tb_soc__DOT__t_bvalid = 1U;
        } else if (((IData)(vlSelf->tb_soc__DOT__t_bvalid) 
                    & (IData)(vlSelf->tb_soc__DOT__bready))) {
            __Vdly__tb_soc__DOT__t_bvalid = 0U;
        }
        if (vlSelf->tb_soc__DOT__u_tpu__DOT__wr_regs) {
            if ((0x200U & vlSelf->tb_soc__DOT__u_tpu__DOT__awaddr_r)) {
                if ((8U >= (0xfU & (vlSelf->tb_soc__DOT__u_tpu__DOT__awaddr_r 
                                    >> 2U)))) {
                    vlSelf->tb_soc__DOT__u_tpu__DOT____Vlvbound_hbfea1c97__0 
                        = (0xffU & vlSelf->tb_soc__DOT__u_tpu__DOT__wdata_r);
                    if ((8U >= (0xfU & (vlSelf->tb_soc__DOT__u_tpu__DOT__awaddr_r 
                                        >> 2U)))) {
                        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__ker__v0 
                            = vlSelf->tb_soc__DOT__u_tpu__DOT____Vlvbound_hbfea1c97__0;
                        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__ker__v0 = 1U;
                        __Vdlyvdim1__tb_soc__DOT__u_tpu__DOT__ker__v0 
                            = (0xfU & (vlSelf->tb_soc__DOT__u_tpu__DOT__awaddr_r 
                                       >> 2U));
                        __Vdlyvdim0__tb_soc__DOT__u_tpu__DOT__ker__v0 
                            = (7U & (vlSelf->tb_soc__DOT__u_tpu__DOT__awaddr_r 
                                     >> 6U));
                    }
                }
            }
        }
        if (vlSelf->tb_soc__DOT__u_tpu__DOT__f_run) {
            if (vlSelf->tb_soc__DOT__u_tpu__DOT__cap_v) {
                vlSelf->tb_soc__DOT__u_tpu__DOT____Vlvbound_h9d130896__0 
                    = vlSelf->tb_soc__DOT__u_tpu__DOT__ibuf_b_q;
                if ((2U >= (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__cap_r))) {
                    __Vdlyvval__tb_soc__DOT__u_tpu__DOT__bank__v0 
                        = vlSelf->tb_soc__DOT__u_tpu__DOT____Vlvbound_h9d130896__0;
                    __Vdlyvset__tb_soc__DOT__u_tpu__DOT__bank__v0 = 1U;
                    __Vdlyvlsb__tb_soc__DOT__u_tpu__DOT__bank__v0 
                        = (0x7fU & VL_SHIFTL_III(7,32,32, (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__cap_w), 5U));
                    __Vdlyvdim1__tb_soc__DOT__u_tpu__DOT__bank__v0 
                        = vlSelf->tb_soc__DOT__u_tpu__DOT__cap_r;
                    __Vdlyvdim0__tb_soc__DOT__u_tpu__DOT__bank__v0 
                        = vlSelf->tb_soc__DOT__u_tpu__DOT__f_sel;
                }
            }
            vlSelf->tb_soc__DOT__u_tpu__DOT__cap_v 
                = (0xcU > (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__fi));
            vlSelf->tb_soc__DOT__u_tpu__DOT__cap_r 
                = (3U & ((IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__fi) 
                         >> 2U));
            vlSelf->tb_soc__DOT__u_tpu__DOT__cap_w 
                = (3U & (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__fi));
            __Vdly__tb_soc__DOT__u_tpu__DOT__fi = (0xfU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__fi)));
            if ((0xcU == (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__fi))) {
                __Vdly__tb_soc__DOT__u_tpu__DOT__f_cnt 
                    = (0xfffffU & ((IData)(1U) + vlSelf->tb_soc__DOT__u_tpu__DOT__f_cnt));
                if (((IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__f_tilex) 
                     == (0x7fU & ((IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__tiles_row) 
                                  - (IData)(1U))))) {
                    __Vdly__tb_soc__DOT__u_tpu__DOT__f_rb0 
                        = (0x1ffffU & ((IData)(0xaU) 
                                       + vlSelf->tb_soc__DOT__u_tpu__DOT__f_rb0));
                    __Vdly__tb_soc__DOT__u_tpu__DOT__f_rb1 
                        = (0x1ffffU & ((IData)(0xaU) 
                                       + vlSelf->tb_soc__DOT__u_tpu__DOT__f_rb1));
                    __Vdly__tb_soc__DOT__u_tpu__DOT__f_rb2 
                        = (0x1ffffU & ((IData)(0xaU) 
                                       + vlSelf->tb_soc__DOT__u_tpu__DOT__f_rb2));
                    __Vdly__tb_soc__DOT__u_tpu__DOT__f_tilex = 0U;
                } else {
                    __Vdly__tb_soc__DOT__u_tpu__DOT__f_tilex 
                        = (0x7fU & ((IData)(1U) + (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__f_tilex)));
                    __Vdly__tb_soc__DOT__u_tpu__DOT__f_rb0 
                        = (0x1ffffU & ((IData)(8U) 
                                       + vlSelf->tb_soc__DOT__u_tpu__DOT__f_rb0));
                    __Vdly__tb_soc__DOT__u_tpu__DOT__f_rb1 
                        = (0x1ffffU & ((IData)(8U) 
                                       + vlSelf->tb_soc__DOT__u_tpu__DOT__f_rb1));
                    __Vdly__tb_soc__DOT__u_tpu__DOT__f_rb2 
                        = (0x1ffffU & ((IData)(8U) 
                                       + vlSelf->tb_soc__DOT__u_tpu__DOT__f_rb2));
                }
                __Vdly__tb_soc__DOT__u_tpu__DOT__f_run = 0U;
            }
        } else {
            vlSelf->tb_soc__DOT__u_tpu__DOT__cap_v = 0U;
            if (vlSelf->tb_soc__DOT__u_tpu__DOT__fetch_go) {
                __Vdly__tb_soc__DOT__u_tpu__DOT__f_run = 1U;
                __Vdly__tb_soc__DOT__u_tpu__DOT__fi = 0U;
                __Vdlyvval__tb_soc__DOT__u_tpu__DOT__boff__v0 
                    = (3U & vlSelf->tb_soc__DOT__u_tpu__DOT__f_rb0);
                __Vdlyvset__tb_soc__DOT__u_tpu__DOT__boff__v0 = 1U;
                __Vdlyvdim0__tb_soc__DOT__u_tpu__DOT__boff__v0 
                    = vlSelf->tb_soc__DOT__u_tpu__DOT__f_sel;
                __Vdlyvval__tb_soc__DOT__u_tpu__DOT__boff__v1 
                    = (3U & vlSelf->tb_soc__DOT__u_tpu__DOT__f_rb1);
                __Vdlyvdim0__tb_soc__DOT__u_tpu__DOT__boff__v1 
                    = vlSelf->tb_soc__DOT__u_tpu__DOT__f_sel;
                __Vdlyvval__tb_soc__DOT__u_tpu__DOT__boff__v2 
                    = (3U & vlSelf->tb_soc__DOT__u_tpu__DOT__f_rb2);
                __Vdlyvdim0__tb_soc__DOT__u_tpu__DOT__boff__v2 
                    = vlSelf->tb_soc__DOT__u_tpu__DOT__f_sel;
            }
        }
    } else {
        __Vdly__tb_soc__DOT__t_bvalid = 0U;
        __Vdly__tb_soc__DOT__u_tpu__DOT__f_run = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__cap_v = 0U;
    }
    if (vlSelf->tb_soc__DOT__u_tpu__DOT__start_pulse) {
        __Vdly__tb_soc__DOT__u_tpu__DOT__f_rb0 = 0U;
        __Vdly__tb_soc__DOT__u_tpu__DOT__f_rb1 = vlSelf->tb_soc__DOT__u_tpu__DOT__img_w;
        __Vdly__tb_soc__DOT__u_tpu__DOT__f_rb2 = ((IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__img_w) 
                                                  << 1U);
        __Vdly__tb_soc__DOT__u_tpu__DOT__f_tilex = 0U;
        __Vdly__tb_soc__DOT__u_tpu__DOT__f_cnt = 0U;
    }
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_remu = 0U;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem = 0U;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu = 0U;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_div = 0U;
    if (((((IData)(vlSelf->tb_soc__DOT__resetn) & (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__pcpi_valid)) 
          & (~ (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__pcpi_div_ready))) 
         & (0x2000033U == (0xfe00007fU & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__pcpi_insn)))) {
        if ((4U != (7U & (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__pcpi_insn 
                          >> 0xcU)))) {
            if ((5U != (7U & (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__pcpi_insn 
                              >> 0xcU)))) {
                if ((6U != (7U & (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__pcpi_insn 
                                  >> 0xcU)))) {
                    if ((7U == (7U & (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__pcpi_insn 
                                      >> 0xcU)))) {
                        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_remu = 1U;
                    }
                }
                if ((6U == (7U & (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__pcpi_insn 
                                  >> 0xcU)))) {
                    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem = 1U;
                }
            }
            if ((5U == (7U & (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__pcpi_insn 
                              >> 0xcU)))) {
                __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu = 1U;
            }
        }
        if ((4U == (7U & (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__pcpi_insn 
                          >> 0xcU)))) {
            __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_div = 1U;
        }
    }
    if (vlSelf->tb_soc__DOT__u_tpu__DOT__obuf_we) {
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__obuf__v0 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__obuf_wdata;
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__obuf__v0 = 1U;
        __Vdlyvdim0__tb_soc__DOT__u_tpu__DOT__obuf__v0 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__obuf_waddr;
    }
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__shift_out 
        = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh;
    vlSelf->tb_soc__DOT__u_tpu__DOT__c1_r = ((0x4ffU 
                                              >= (0x7ffU 
                                                  & ((IData)(0x14U) 
                                                     * 
                                                     ((IData)(1U) 
                                                      + 
                                                      (0x38U 
                                                       & ((IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__d_i) 
                                                          << 3U))))))
                                              ? (0xfffffU 
                                                 & (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x14U) 
                                                          * 
                                                          ((IData)(1U) 
                                                           + 
                                                           (0x38U 
                                                            & ((IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__d_i) 
                                                               << 3U))))))
                                                      ? 0U
                                                      : 
                                                     (vlSelf->tb_soc__DOT__u_tpu__DOT__acc_flat[
                                                      (((IData)(0x13U) 
                                                        + 
                                                        (0x7ffU 
                                                         & ((IData)(0x14U) 
                                                            * 
                                                            ((IData)(1U) 
                                                             + 
                                                             (0x38U 
                                                              & ((IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__d_i) 
                                                                 << 3U)))))) 
                                                       >> 5U)] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(0x14U) 
                                                           * 
                                                           ((IData)(1U) 
                                                            + 
                                                            (0x38U 
                                                             & ((IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__d_i) 
                                                                << 3U)))))))) 
                                                    | (vlSelf->tb_soc__DOT__u_tpu__DOT__acc_flat[
                                                       (0x3fU 
                                                        & (((IData)(0x14U) 
                                                            * 
                                                            ((IData)(1U) 
                                                             + 
                                                             (0x38U 
                                                              & ((IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__d_i) 
                                                                 << 3U)))) 
                                                           >> 5U))] 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(0x14U) 
                                                           * 
                                                           ((IData)(1U) 
                                                            + 
                                                            (0x38U 
                                                             & ((IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__d_i) 
                                                                << 3U))))))))
                                              : 0U);
    vlSelf->tb_soc__DOT__u_tpu__DOT__c0_r = ((0x4ffU 
                                              >= (0x7ffU 
                                                  & ((IData)(0x14U) 
                                                     * 
                                                     (0x38U 
                                                      & ((IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__d_i) 
                                                         << 3U)))))
                                              ? (0xfffffU 
                                                 & (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x14U) 
                                                          * 
                                                          (0x38U 
                                                           & ((IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__d_i) 
                                                              << 3U)))))
                                                      ? 0U
                                                      : 
                                                     (vlSelf->tb_soc__DOT__u_tpu__DOT__acc_flat[
                                                      (((IData)(0x13U) 
                                                        + 
                                                        (0x7ffU 
                                                         & ((IData)(0x14U) 
                                                            * 
                                                            (0x38U 
                                                             & ((IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__d_i) 
                                                                << 3U))))) 
                                                       >> 5U)] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(0x14U) 
                                                           * 
                                                           (0x38U 
                                                            & ((IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__d_i) 
                                                               << 3U))))))) 
                                                    | (vlSelf->tb_soc__DOT__u_tpu__DOT__acc_flat[
                                                       (0x3fU 
                                                        & (((IData)(0x14U) 
                                                            * 
                                                            (0x38U 
                                                             & ((IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__d_i) 
                                                                << 3U))) 
                                                           >> 5U))] 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(0x14U) 
                                                           * 
                                                           (0x38U 
                                                            & ((IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__d_i) 
                                                               << 3U)))))))
                                              : 0U);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait_q 
        = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__pcpi_div_wait) 
           & (IData)(vlSelf->tb_soc__DOT__resetn));
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rd 
        = VL_MULS_QQQ(64, VL_EXTENDS_QQ(64,33, vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rs1), 
                      VL_EXTENDS_QQ(64,33, vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rs2));
    vlSelf->tb_soc__DOT__u_tpu__DOT__cs_r = ((0x4ffU 
                                              >= (0x7ffU 
                                                  & ((IData)(0x14U) 
                                                     * 
                                                     ((0x38U 
                                                       & ((IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__d_i) 
                                                          << 3U)) 
                                                      + (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__post_colsel)))))
                                              ? (0xfffffU 
                                                 & (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x14U) 
                                                          * 
                                                          ((0x38U 
                                                            & ((IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__d_i) 
                                                               << 3U)) 
                                                           + (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__post_colsel)))))
                                                      ? 0U
                                                      : 
                                                     (vlSelf->tb_soc__DOT__u_tpu__DOT__acc_flat[
                                                      (((IData)(0x13U) 
                                                        + 
                                                        (0x7ffU 
                                                         & ((IData)(0x14U) 
                                                            * 
                                                            ((0x38U 
                                                              & ((IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__d_i) 
                                                                 << 3U)) 
                                                             + (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__post_colsel))))) 
                                                       >> 5U)] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(0x14U) 
                                                           * 
                                                           ((0x38U 
                                                             & ((IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__d_i) 
                                                                << 3U)) 
                                                            + (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__post_colsel))))))) 
                                                    | (vlSelf->tb_soc__DOT__u_tpu__DOT__acc_flat[
                                                       (0x3fU 
                                                        & (((IData)(0x14U) 
                                                            * 
                                                            ((0x38U 
                                                              & ((IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__d_i) 
                                                                 << 3U)) 
                                                             + (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__post_colsel))) 
                                                           >> 5U))] 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(0x14U) 
                                                           * 
                                                           ((0x38U 
                                                             & ((IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__d_i) 
                                                                << 3U)) 
                                                            + (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__post_colsel)))))))
                                              : 0U);
    if (vlSelf->tb_soc__DOT__u_tpu__DOT__arr_clear) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc = 0U;
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__1__KET____DOT__g_dly__DOT__dly__v0 = 0U;
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__1__KET____DOT__g_dly__DOT__dly__v0 = 0U;
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__2__KET____DOT__g_dly__DOT__dly__v0 = 1U;
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__2__KET____DOT__g_dly__DOT__dly__v0 = 1U;
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__4__KET____DOT__g_dly__DOT__dly__v0 = 1U;
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__4__KET____DOT__g_dly__DOT__dly__v0 = 1U;
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__3__KET____DOT__g_dly__DOT__dly__v0 = 1U;
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__3__KET____DOT__g_dly__DOT__dly__v0 = 1U;
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly__v0 = 1U;
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly__v0 = 1U;
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v0 = 1U;
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v0 = 1U;
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v0 = 1U;
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v0 = 1U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out = 0U;
    } else {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__DOT__prod)));
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc 
            = (0xfffffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__acc 
                           + ((0xe0000U & ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__prod 
                                                          >> 0x10U)))) 
                                           << 0x11U)) 
                              | vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__DOT__prod)));
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__1__KET____DOT__g_dly__DOT__dly__v0 
            = (0x1ffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__a_flat_r[0U] 
                         >> 9U));
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__1__KET____DOT__g_dly__DOT__dly__v0 
            = (0xffU & (IData)((vlSelf->tb_soc__DOT__u_tpu__DOT__b_flat_r 
                                >> 8U)));
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__2__KET____DOT__g_dly__DOT__dly__v2 
            = (0x1ffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__a_flat_r[0U] 
                         >> 0x12U));
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__2__KET____DOT__g_dly__DOT__dly__v2 = 1U;
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__2__KET____DOT__g_dly__DOT__dly__v3 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__2__KET____DOT__g_dly__DOT__dly
            [0U];
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__2__KET____DOT__g_dly__DOT__dly__v2 
            = (0xffU & (IData)((vlSelf->tb_soc__DOT__u_tpu__DOT__b_flat_r 
                                >> 0x10U)));
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__2__KET____DOT__g_dly__DOT__dly__v2 = 1U;
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__2__KET____DOT__g_dly__DOT__dly__v3 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__2__KET____DOT__g_dly__DOT__dly
            [0U];
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__4__KET____DOT__g_dly__DOT__dly__v4 
            = (0x1ffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__a_flat_r[1U] 
                         >> 4U));
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__4__KET____DOT__g_dly__DOT__dly__v4 = 1U;
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__4__KET____DOT__g_dly__DOT__dly__v5 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__4__KET____DOT__g_dly__DOT__dly
            [0U];
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__4__KET____DOT__g_dly__DOT__dly__v6 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__4__KET____DOT__g_dly__DOT__dly
            [1U];
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__4__KET____DOT__g_dly__DOT__dly__v7 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__4__KET____DOT__g_dly__DOT__dly
            [2U];
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__4__KET____DOT__g_dly__DOT__dly__v4 
            = (0xffU & (IData)((vlSelf->tb_soc__DOT__u_tpu__DOT__b_flat_r 
                                >> 0x20U)));
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__4__KET____DOT__g_dly__DOT__dly__v4 = 1U;
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__4__KET____DOT__g_dly__DOT__dly__v5 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__4__KET____DOT__g_dly__DOT__dly
            [0U];
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__4__KET____DOT__g_dly__DOT__dly__v6 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__4__KET____DOT__g_dly__DOT__dly
            [1U];
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__4__KET____DOT__g_dly__DOT__dly__v7 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__4__KET____DOT__g_dly__DOT__dly
            [2U];
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__3__KET____DOT__g_dly__DOT__dly__v3 
            = (0x1ffU & ((vlSelf->tb_soc__DOT__u_tpu__DOT__a_flat_r[1U] 
                          << 5U) | (vlSelf->tb_soc__DOT__u_tpu__DOT__a_flat_r[0U] 
                                    >> 0x1bU)));
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__3__KET____DOT__g_dly__DOT__dly__v3 = 1U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_hef02eede__1 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__3__KET____DOT__g_dly__DOT__dly
            [0U];
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__3__KET____DOT__g_dly__DOT__dly__v4 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_hef02eede__1;
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__3__KET____DOT__g_dly__DOT__dly__v4 = 1U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_hef02eede__1 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__3__KET____DOT__g_dly__DOT__dly
            [1U];
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__3__KET____DOT__g_dly__DOT__dly__v5 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_hef02eede__1;
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__3__KET____DOT__g_dly__DOT__dly__v5 = 1U;
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__3__KET____DOT__g_dly__DOT__dly__v3 
            = (0xffU & (IData)((vlSelf->tb_soc__DOT__u_tpu__DOT__b_flat_r 
                                >> 0x18U)));
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__3__KET____DOT__g_dly__DOT__dly__v3 = 1U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_ha4328a29__1 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__3__KET____DOT__g_dly__DOT__dly
            [0U];
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__3__KET____DOT__g_dly__DOT__dly__v4 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_ha4328a29__1;
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__3__KET____DOT__g_dly__DOT__dly__v4 = 1U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_ha4328a29__1 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__3__KET____DOT__g_dly__DOT__dly
            [1U];
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__3__KET____DOT__g_dly__DOT__dly__v5 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_ha4328a29__1;
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__3__KET____DOT__g_dly__DOT__dly__v5 = 1U;
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly__v5 
            = (0x1ffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__a_flat_r[1U] 
                         >> 0xdU));
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly__v5 = 1U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h45a418e9__1 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly
            [0U];
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly__v6 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h45a418e9__1;
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly__v6 = 1U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h45a418e9__1 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly
            [1U];
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly__v7 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h45a418e9__1;
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly__v7 = 1U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h45a418e9__1 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly
            [2U];
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly__v8 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h45a418e9__1;
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly__v8 = 1U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h45a418e9__1 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly
            [3U];
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly__v9 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h45a418e9__1;
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly__v9 = 1U;
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly__v5 
            = (0xffU & (IData)((vlSelf->tb_soc__DOT__u_tpu__DOT__b_flat_r 
                                >> 0x28U)));
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly__v5 = 1U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h18adc700__1 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly
            [0U];
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly__v6 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h18adc700__1;
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly__v6 = 1U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h18adc700__1 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly
            [1U];
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly__v7 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h18adc700__1;
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly__v7 = 1U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h18adc700__1 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly
            [2U];
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly__v8 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h18adc700__1;
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly__v8 = 1U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h18adc700__1 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly
            [3U];
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly__v9 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h18adc700__1;
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly__v9 = 1U;
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v6 
            = (0x1ffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__a_flat_r[1U] 
                         >> 0x16U));
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v6 = 1U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h263d9ac9__1 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly
            [0U];
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v7 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h263d9ac9__1;
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v7 = 1U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h263d9ac9__1 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly
            [1U];
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v8 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h263d9ac9__1;
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v8 = 1U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h263d9ac9__1 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly
            [2U];
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v9 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h263d9ac9__1;
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v9 = 1U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h263d9ac9__1 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly
            [3U];
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v10 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h263d9ac9__1;
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v10 = 1U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h263d9ac9__1 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly
            [4U];
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v11 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h263d9ac9__1;
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v11 = 1U;
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v6 
            = (0xffU & (IData)((vlSelf->tb_soc__DOT__u_tpu__DOT__b_flat_r 
                                >> 0x30U)));
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v6 = 1U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h56a04835__1 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly
            [0U];
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v7 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h56a04835__1;
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v7 = 1U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h56a04835__1 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly
            [1U];
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v8 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h56a04835__1;
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v8 = 1U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h56a04835__1 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly
            [2U];
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v9 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h56a04835__1;
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v9 = 1U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h56a04835__1 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly
            [3U];
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v10 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h56a04835__1;
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v10 = 1U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h56a04835__1 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly
            [4U];
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v11 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h56a04835__1;
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v11 = 1U;
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v7 
            = (0x1ffU & ((vlSelf->tb_soc__DOT__u_tpu__DOT__a_flat_r[2U] 
                          << 1U) | (vlSelf->tb_soc__DOT__u_tpu__DOT__a_flat_r[1U] 
                                    >> 0x1fU)));
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v7 = 1U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h3e5db997__1 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly
            [0U];
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v8 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h3e5db997__1;
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v8 = 1U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h3e5db997__1 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly
            [1U];
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v9 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h3e5db997__1;
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v9 = 1U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h3e5db997__1 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly
            [2U];
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v10 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h3e5db997__1;
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v10 = 1U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h3e5db997__1 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly
            [3U];
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v11 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h3e5db997__1;
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v11 = 1U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h3e5db997__1 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly
            [4U];
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v12 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h3e5db997__1;
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v12 = 1U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h3e5db997__1 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly
            [5U];
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v13 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h3e5db997__1;
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v13 = 1U;
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v7 
            = (0xffU & (IData)((vlSelf->tb_soc__DOT__u_tpu__DOT__b_flat_r 
                                >> 0x38U)));
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v7 = 1U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h7a8acaf2__1 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly
            [0U];
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v8 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h7a8acaf2__1;
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v8 = 1U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h7a8acaf2__1 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly
            [1U];
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v9 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h7a8acaf2__1;
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v9 = 1U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h7a8acaf2__1 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly
            [2U];
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v10 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h7a8acaf2__1;
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v10 = 1U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h7a8acaf2__1 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly
            [3U];
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v11 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h7a8acaf2__1;
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v11 = 1U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h7a8acaf2__1 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly
            [4U];
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v12 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h7a8acaf2__1;
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v12 = 1U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h7a8acaf2__1 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly
            [5U];
        __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v13 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vlvbound_h7a8acaf2__1;
        __Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v13 = 1U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [7U][7U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [7U][7U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [7U][6U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [7U][6U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [7U][5U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [7U][5U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [7U][4U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [7U][4U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [7U][3U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [7U][3U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [7U][2U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [7U][2U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [7U][1U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [7U][1U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [7U][0U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [7U][0U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [6U][7U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [6U][7U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [6U][6U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [6U][6U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [6U][5U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [6U][5U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [6U][4U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [6U][4U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [6U][3U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [6U][3U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [6U][2U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [6U][2U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [6U][1U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [6U][1U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [6U][0U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [6U][0U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [5U][7U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [5U][7U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [5U][6U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [5U][6U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [5U][5U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [5U][5U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [5U][4U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [5U][4U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [5U][3U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [5U][3U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [5U][2U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [5U][2U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [5U][1U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [5U][1U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [5U][0U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [5U][0U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [4U][7U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [4U][7U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [4U][6U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [4U][6U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [4U][5U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [4U][5U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [4U][4U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [4U][4U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [4U][3U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [4U][3U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [4U][2U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [4U][2U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [4U][1U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [4U][1U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [4U][0U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [4U][0U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [3U][7U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [3U][7U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [3U][6U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [3U][6U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [3U][5U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [3U][5U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [3U][4U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [3U][4U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [3U][3U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [3U][3U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [3U][2U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [3U][2U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [3U][1U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [3U][1U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [3U][0U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [3U][0U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [2U][7U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [2U][7U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [2U][6U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [2U][6U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [2U][5U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [2U][5U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [2U][4U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [2U][4U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [2U][3U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [2U][3U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [2U][2U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [2U][2U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [2U][1U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [2U][1U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [2U][0U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [2U][0U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [1U][7U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [1U][7U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [1U][6U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [1U][6U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [1U][5U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [1U][5U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [1U][4U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [1U][4U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [1U][3U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [1U][3U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [1U][2U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [1U][2U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [1U][1U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [1U][1U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [1U][0U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [1U][0U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [0U][7U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [0U][7U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [0U][6U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [0U][6U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [0U][5U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [0U][5U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [0U][4U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [0U][4U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [0U][3U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [0U][3U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [0U][2U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [0U][2U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [0U][1U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [0U][1U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v
            [0U][0U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h
            [0U][0U];
    }
    if (vlSelf->tb_soc__DOT__u_tpu__DOT__wr_ibuf) {
        if ((1U & (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__wstrb_r))) {
            __Vdlyvval__tb_soc__DOT__u_tpu__DOT__ibuf__v0 
                = (0xffU & vlSelf->tb_soc__DOT__u_tpu__DOT__wdata_r);
            __Vdlyvset__tb_soc__DOT__u_tpu__DOT__ibuf__v0 = 1U;
            __Vdlyvlsb__tb_soc__DOT__u_tpu__DOT__ibuf__v0 = 0U;
            __Vdlyvdim0__tb_soc__DOT__u_tpu__DOT__ibuf__v0 
                = vlSelf->tb_soc__DOT__u_tpu__DOT__ibuf_a_addr;
        }
        if ((2U & (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__wstrb_r))) {
            __Vdlyvval__tb_soc__DOT__u_tpu__DOT__ibuf__v1 
                = (0xffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__wdata_r 
                            >> 8U));
            __Vdlyvset__tb_soc__DOT__u_tpu__DOT__ibuf__v1 = 1U;
            __Vdlyvlsb__tb_soc__DOT__u_tpu__DOT__ibuf__v1 = 8U;
            __Vdlyvdim0__tb_soc__DOT__u_tpu__DOT__ibuf__v1 
                = vlSelf->tb_soc__DOT__u_tpu__DOT__ibuf_a_addr;
        }
        if ((4U & (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__wstrb_r))) {
            __Vdlyvval__tb_soc__DOT__u_tpu__DOT__ibuf__v2 
                = (0xffU & (vlSelf->tb_soc__DOT__u_tpu__DOT__wdata_r 
                            >> 0x10U));
            __Vdlyvset__tb_soc__DOT__u_tpu__DOT__ibuf__v2 = 1U;
            __Vdlyvlsb__tb_soc__DOT__u_tpu__DOT__ibuf__v2 = 0x10U;
            __Vdlyvdim0__tb_soc__DOT__u_tpu__DOT__ibuf__v2 
                = vlSelf->tb_soc__DOT__u_tpu__DOT__ibuf_a_addr;
        }
        if ((8U & (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__wstrb_r))) {
            __Vdlyvval__tb_soc__DOT__u_tpu__DOT__ibuf__v3 
                = (vlSelf->tb_soc__DOT__u_tpu__DOT__wdata_r 
                   >> 0x18U);
            __Vdlyvset__tb_soc__DOT__u_tpu__DOT__ibuf__v3 = 1U;
            __Vdlyvlsb__tb_soc__DOT__u_tpu__DOT__ibuf__v3 = 0x18U;
            __Vdlyvdim0__tb_soc__DOT__u_tpu__DOT__ibuf__v3 
                = vlSelf->tb_soc__DOT__u_tpu__DOT__ibuf_a_addr;
        }
    }
    if (vlSelf->tb_soc__DOT__resetn) {
        if (((IData)(vlSelf->tb_soc__DOT____Vcellinp__u_tpu__s_axi_awvalid) 
             & (IData)(vlSelf->tb_soc__DOT__t_awready))) {
            vlSelf->tb_soc__DOT__u_tpu__DOT__aw_got = 1U;
        }
        if (((IData)(vlSelf->tb_soc__DOT____Vcellinp__u_tpu__s_axi_wvalid) 
             & (IData)(vlSelf->tb_soc__DOT__t_wready))) {
            vlSelf->tb_soc__DOT__u_tpu__DOT__w_got = 1U;
        }
        if (vlSelf->tb_soc__DOT__u_tpu__DOT__wr_commit) {
            vlSelf->tb_soc__DOT__u_tpu__DOT__aw_got = 0U;
            vlSelf->tb_soc__DOT__u_tpu__DOT__w_got = 0U;
        }
        if (vlSelf->tb_soc__DOT__u_tpu__DOT__wr_regs) {
            if ((1U & (~ (vlSelf->tb_soc__DOT__u_tpu__DOT__awaddr_r 
                          >> 9U)))) {
                if ((2U != (7U & (vlSelf->tb_soc__DOT__u_tpu__DOT__awaddr_r 
                                  >> 2U)))) {
                    if ((3U != (7U & (vlSelf->tb_soc__DOT__u_tpu__DOT__awaddr_r 
                                      >> 2U)))) {
                        if ((4U == (7U & (vlSelf->tb_soc__DOT__u_tpu__DOT__awaddr_r 
                                          >> 2U)))) {
                            vlSelf->tb_soc__DOT__u_tpu__DOT__post_mode 
                                = (3U & vlSelf->tb_soc__DOT__u_tpu__DOT__wdata_r);
                            vlSelf->tb_soc__DOT__u_tpu__DOT__post_shift 
                                = (0xfU & (vlSelf->tb_soc__DOT__u_tpu__DOT__wdata_r 
                                           >> 4U));
                        }
                    }
                }
            }
        }
        if ((0U == (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__r_state))) {
            if ((((IData)(vlSelf->tb_soc__DOT__arvalid) 
                  & (0x44U == (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_addr 
                               >> 0x18U))) & (IData)(vlSelf->tb_soc__DOT__t_arready))) {
                __Vdly__tb_soc__DOT__u_tpu__DOT__raddr_r 
                    = (0x3ffffU & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_addr);
                __Vdly__tb_soc__DOT__u_tpu__DOT__r_state = 1U;
            }
        } else if ((1U == (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__r_state))) {
            vlSelf->tb_soc__DOT__t_rdata = ((0U == 
                                             (3U & 
                                              (vlSelf->tb_soc__DOT__u_tpu__DOT__raddr_r 
                                               >> 0x10U)))
                                             ? vlSelf->tb_soc__DOT__u_tpu__DOT__reg_rdata
                                             : ((1U 
                                                 == 
                                                 (3U 
                                                  & (vlSelf->tb_soc__DOT__u_tpu__DOT__raddr_r 
                                                     >> 0x10U)))
                                                 ? vlSelf->tb_soc__DOT__u_tpu__DOT__ibuf_a_q
                                                 : vlSelf->tb_soc__DOT__u_tpu__DOT__obuf_a_q));
            vlSelf->tb_soc__DOT__t_rvalid = 1U;
            __Vdly__tb_soc__DOT__u_tpu__DOT__r_state = 2U;
        } else if ((2U == (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__r_state))) {
            if (vlSelf->tb_soc__DOT__rready) {
                vlSelf->tb_soc__DOT__t_rvalid = 0U;
                __Vdly__tb_soc__DOT__u_tpu__DOT__r_state = 0U;
            }
        } else {
            __Vdly__tb_soc__DOT__u_tpu__DOT__r_state = 0U;
        }
    } else {
        vlSelf->tb_soc__DOT__u_tpu__DOT__aw_got = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__w_got = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__post_mode = 1U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__post_shift = 0U;
        __Vdly__tb_soc__DOT__u_tpu__DOT__r_state = 0U;
        vlSelf->tb_soc__DOT__t_rvalid = 0U;
    }
    if (((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoder_trigger) 
         & (~ (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoder_pseudo_trigger)))) {
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_setq = 0U;
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_getq = 0U;
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_maskirq = 0U;
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_timer = 0U;
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_fence 
            = ((0xfU == (0x7fU & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q)) 
               & (~ (IData)((0U != (7U & (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q 
                                          >> 0xcU))))));
    }
    if ((1U & (~ (IData)(vlSelf->tb_soc__DOT__resetn)))) {
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_fence = 0U;
    }
    if (((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_done))) {
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoded_rs1 
            = (0x1fU & (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_latched 
                        >> 0xfU));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_waitirq = 0U;
    }
    if (vlSelf->tb_soc__DOT__resetn) {
        if (vlSelf->tb_soc__DOT__b_aw_fire) {
            if ((0U == (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_addr 
                        >> 0x1cU))) {
                if ((1U & (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_wstrb))) {
                    __Vdlyvval__tb_soc__DOT__ram__v0 
                        = (0xffU & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_wdata);
                    __Vdlyvset__tb_soc__DOT__ram__v0 = 1U;
                    __Vdlyvlsb__tb_soc__DOT__ram__v0 = 0U;
                    __Vdlyvdim0__tb_soc__DOT__ram__v0 
                        = (0xffffU & (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_addr 
                                      >> 2U));
                }
                if ((2U & (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_wstrb))) {
                    __Vdlyvval__tb_soc__DOT__ram__v1 
                        = (0xffU & (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_wdata 
                                    >> 8U));
                    __Vdlyvset__tb_soc__DOT__ram__v1 = 1U;
                    __Vdlyvlsb__tb_soc__DOT__ram__v1 = 8U;
                    __Vdlyvdim0__tb_soc__DOT__ram__v1 
                        = (0xffffU & (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_addr 
                                      >> 2U));
                }
                if ((4U & (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_wstrb))) {
                    __Vdlyvval__tb_soc__DOT__ram__v2 
                        = (0xffU & (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_wdata 
                                    >> 0x10U));
                    __Vdlyvset__tb_soc__DOT__ram__v2 = 1U;
                    __Vdlyvlsb__tb_soc__DOT__ram__v2 = 0x10U;
                    __Vdlyvdim0__tb_soc__DOT__ram__v2 
                        = (0xffffU & (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_addr 
                                      >> 2U));
                }
                if ((8U & (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_wstrb))) {
                    __Vdlyvval__tb_soc__DOT__ram__v3 
                        = (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_wdata 
                           >> 0x18U);
                    __Vdlyvset__tb_soc__DOT__ram__v3 = 1U;
                    __Vdlyvlsb__tb_soc__DOT__ram__v3 = 0x18U;
                    __Vdlyvdim0__tb_soc__DOT__ram__v3 
                        = (0xffffU & (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_addr 
                                      >> 2U));
                }
            } else if (VL_UNLIKELY((0x40600004U == vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_addr))) {
                VL_WRITEF("%c",8,(0xffU & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_wdata));
                Verilated::runFlushCallbacks();
            } else if ((0x40700000U == vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_addr)) {
                __Vdly__tb_soc__DOT__sim_ptr = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_wdata;
            } else if (VL_UNLIKELY((0x40700004U == vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_addr))) {
                __Vtemp_65[0U] = 0x2e62696eU;
                __Vtemp_65[1U] = 0x5f6f7574U;
                __Vtemp_65[2U] = 0x5f637075U;
                __Vtemp_65[3U] = 0x736f63U;
                vlSelf->tb_soc__DOT__dump_and_finish__Vstatic__f1 
                    = VL_FOPEN_NN(VL_CVT_PACK_STR_NW(4, __Vtemp_65)
                                  , std::string{"wb"});
                ;
                vlSelf->tb_soc__DOT__dump_and_finish__Vstatic__i = 0U;
                while (VL_GTS_III(32, 0x3840U, vlSelf->tb_soc__DOT__dump_and_finish__Vstatic__i)) {
                    vlSelf->tb_soc__DOT__dump_and_finish__Vstatic__w 
                        = vlSelf->tb_soc__DOT__ram[
                        (0xffffU & ((vlSelf->tb_soc__DOT__sim_ptr 
                                     >> 2U) + vlSelf->tb_soc__DOT__dump_and_finish__Vstatic__i))];
                    VL_FWRITEF(vlSelf->tb_soc__DOT__dump_and_finish__Vstatic__f1,"%c%c%c%c",
                               8,(0xffU & vlSelf->tb_soc__DOT__dump_and_finish__Vstatic__w),
                               8,(0xffU & (vlSelf->tb_soc__DOT__dump_and_finish__Vstatic__w 
                                           >> 8U)),
                               8,(0xffU & (vlSelf->tb_soc__DOT__dump_and_finish__Vstatic__w 
                                           >> 0x10U)),
                               8,(vlSelf->tb_soc__DOT__dump_and_finish__Vstatic__w 
                                  >> 0x18U));
                    vlSelf->tb_soc__DOT__dump_and_finish__Vstatic__i 
                        = ((IData)(1U) + vlSelf->tb_soc__DOT__dump_and_finish__Vstatic__i);
                }
                VL_FCLOSE_I(vlSelf->tb_soc__DOT__dump_and_finish__Vstatic__f1); __Vtemp_67[0U] = 0x2e62696eU;
                __Vtemp_67[1U] = 0x5f6f7574U;
                __Vtemp_67[2U] = 0x5f747075U;
                __Vtemp_67[3U] = 0x736f63U;
                vlSelf->tb_soc__DOT__dump_and_finish__Vstatic__f2 
                    = VL_FOPEN_NN(VL_CVT_PACK_STR_NW(4, __Vtemp_67)
                                  , std::string{"wb"});
                ;
                vlSelf->tb_soc__DOT__dump_and_finish__Vstatic__i = 0U;
                while (VL_GTS_III(32, 0x3840U, vlSelf->tb_soc__DOT__dump_and_finish__Vstatic__i)) {
                    vlSelf->tb_soc__DOT__dump_and_finish__Vstatic__w 
                        = vlSelf->tb_soc__DOT__u_tpu__DOT__obuf
                        [(0x3fffU & vlSelf->tb_soc__DOT__dump_and_finish__Vstatic__i)];
                    VL_FWRITEF(vlSelf->tb_soc__DOT__dump_and_finish__Vstatic__f2,"%c%c%c%c",
                               8,(0xffU & vlSelf->tb_soc__DOT__dump_and_finish__Vstatic__w),
                               8,(0xffU & (vlSelf->tb_soc__DOT__dump_and_finish__Vstatic__w 
                                           >> 8U)),
                               8,(0xffU & (vlSelf->tb_soc__DOT__dump_and_finish__Vstatic__w 
                                           >> 0x10U)),
                               8,(vlSelf->tb_soc__DOT__dump_and_finish__Vstatic__w 
                                  >> 0x18U));
                    vlSelf->tb_soc__DOT__dump_and_finish__Vstatic__i 
                        = ((IData)(1U) + vlSelf->tb_soc__DOT__dump_and_finish__Vstatic__i);
                }
                VL_FCLOSE_I(vlSelf->tb_soc__DOT__dump_and_finish__Vstatic__f2); VL_WRITEF("\n[tb_soc] dumped soc_cpu_out.bin and soc_tpu_out.bin at cycle %0#\n",
                                                                                64,
                                                                                VL_DIV_QQQ(64, (QData)(VL_TIME_UNITED_Q(1000)), 0xaULL));
                VL_FINISH_MT("tb_soc.v", 154, "");
            }
            __Vdly__tb_soc__DOT__wr_st = 1U;
        } else if ((1U == (IData)(vlSelf->tb_soc__DOT__wr_st))) {
            vlSelf->tb_soc__DOT__bb_valid = 1U;
            __Vdly__tb_soc__DOT__wr_st = 2U;
        } else if (((2U == (IData)(vlSelf->tb_soc__DOT__wr_st)) 
                    & (IData)(vlSelf->tb_soc__DOT__bready))) {
            vlSelf->tb_soc__DOT__bb_valid = 0U;
            __Vdly__tb_soc__DOT__wr_st = 0U;
        }
        if (((IData)(vlSelf->tb_soc__DOT__arvalid) 
             & ((0x44U != (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_addr 
                           >> 0x18U)) & (IData)(vlSelf->tb_soc__DOT__b_arready)))) {
            __Vdly__tb_soc__DOT__raddr_l = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_addr;
            __Vdly__tb_soc__DOT__rd_st = 1U;
        } else if (((0U != (IData)(vlSelf->tb_soc__DOT__rd_st)) 
                    & (3U > (IData)(vlSelf->tb_soc__DOT__rd_st)))) {
            __Vdly__tb_soc__DOT__rd_st = (7U & ((IData)(1U) 
                                                + (IData)(vlSelf->tb_soc__DOT__rd_st)));
        } else if ((3U == (IData)(vlSelf->tb_soc__DOT__rd_st))) {
            vlSelf->tb_soc__DOT__b_rdata = ((0U == 
                                             (vlSelf->tb_soc__DOT__raddr_l 
                                              >> 0x1cU))
                                             ? vlSelf->tb_soc__DOT__ram
                                            [(0xffffU 
                                              & (vlSelf->tb_soc__DOT__raddr_l 
                                                 >> 2U))]
                                             : 0U);
            vlSelf->tb_soc__DOT__rb_valid = 1U;
            __Vdly__tb_soc__DOT__rd_st = 4U;
        } else if (((4U == (IData)(vlSelf->tb_soc__DOT__rd_st)) 
                    & (IData)(vlSelf->tb_soc__DOT__rready))) {
            vlSelf->tb_soc__DOT__rb_valid = 0U;
            __Vdly__tb_soc__DOT__rd_st = 0U;
        }
    } else {
        vlSelf->tb_soc__DOT__bb_valid = 0U;
        vlSelf->tb_soc__DOT__rb_valid = 0U;
        __Vdly__tb_soc__DOT__wr_st = 0U;
        __Vdly__tb_soc__DOT__rd_st = 0U;
    }
    if (vlSelf->tb_soc__DOT__u_tpu__DOT__arr_clear) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__a_flat_r[0U] = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__a_flat_r[1U] = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__a_flat_r[2U] = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__b_flat_r = 0ULL;
    } else {
        vlSelf->tb_soc__DOT__u_tpu__DOT__a_flat_r[0U] 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__a_flat[0U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__a_flat_r[1U] 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__a_flat[1U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__a_flat_r[2U] 
            = vlSelf->tb_soc__DOT__u_tpu__DOT__a_flat[2U];
        vlSelf->tb_soc__DOT__u_tpu__DOT__b_flat_r = vlSelf->tb_soc__DOT__u_tpu__DOT__b_flat;
    }
    vlSelf->tb_soc__DOT__t_bvalid = __Vdly__tb_soc__DOT__t_bvalid;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__1__KET____DOT__g_dly__DOT__dly[0U] 
        = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__1__KET____DOT__g_dly__DOT__dly__v0;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__1__KET____DOT__g_dly__DOT__dly[0U] 
        = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__1__KET____DOT__g_dly__DOT__dly__v0;
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__2__KET____DOT__g_dly__DOT__dly__v0) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__2__KET____DOT__g_dly__DOT__dly[0U] = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__2__KET____DOT__g_dly__DOT__dly[1U] = 0U;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__2__KET____DOT__g_dly__DOT__dly__v2) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__2__KET____DOT__g_dly__DOT__dly[0U] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__2__KET____DOT__g_dly__DOT__dly__v2;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__2__KET____DOT__g_dly__DOT__dly[1U] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__2__KET____DOT__g_dly__DOT__dly__v3;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__2__KET____DOT__g_dly__DOT__dly__v0) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__2__KET____DOT__g_dly__DOT__dly[0U] = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__2__KET____DOT__g_dly__DOT__dly[1U] = 0U;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__2__KET____DOT__g_dly__DOT__dly__v2) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__2__KET____DOT__g_dly__DOT__dly[0U] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__2__KET____DOT__g_dly__DOT__dly__v2;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__2__KET____DOT__g_dly__DOT__dly[1U] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__2__KET____DOT__g_dly__DOT__dly__v3;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__4__KET____DOT__g_dly__DOT__dly__v0) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__4__KET____DOT__g_dly__DOT__dly[0U] = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__4__KET____DOT__g_dly__DOT__dly[1U] = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__4__KET____DOT__g_dly__DOT__dly[2U] = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__4__KET____DOT__g_dly__DOT__dly[3U] = 0U;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__4__KET____DOT__g_dly__DOT__dly__v4) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__4__KET____DOT__g_dly__DOT__dly[0U] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__4__KET____DOT__g_dly__DOT__dly__v4;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__4__KET____DOT__g_dly__DOT__dly[1U] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__4__KET____DOT__g_dly__DOT__dly__v5;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__4__KET____DOT__g_dly__DOT__dly[2U] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__4__KET____DOT__g_dly__DOT__dly__v6;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__4__KET____DOT__g_dly__DOT__dly[3U] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__4__KET____DOT__g_dly__DOT__dly__v7;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__4__KET____DOT__g_dly__DOT__dly__v0) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__4__KET____DOT__g_dly__DOT__dly[0U] = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__4__KET____DOT__g_dly__DOT__dly[1U] = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__4__KET____DOT__g_dly__DOT__dly[2U] = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__4__KET____DOT__g_dly__DOT__dly[3U] = 0U;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__4__KET____DOT__g_dly__DOT__dly__v4) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__4__KET____DOT__g_dly__DOT__dly[0U] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__4__KET____DOT__g_dly__DOT__dly__v4;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__4__KET____DOT__g_dly__DOT__dly[1U] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__4__KET____DOT__g_dly__DOT__dly__v5;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__4__KET____DOT__g_dly__DOT__dly[2U] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__4__KET____DOT__g_dly__DOT__dly__v6;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__4__KET____DOT__g_dly__DOT__dly[3U] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__4__KET____DOT__g_dly__DOT__dly__v7;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__3__KET____DOT__g_dly__DOT__dly__v0) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__3__KET____DOT__g_dly__DOT__dly[0U] = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__3__KET____DOT__g_dly__DOT__dly[1U] = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__3__KET____DOT__g_dly__DOT__dly[2U] = 0U;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__3__KET____DOT__g_dly__DOT__dly__v3) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__3__KET____DOT__g_dly__DOT__dly[0U] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__3__KET____DOT__g_dly__DOT__dly__v3;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__3__KET____DOT__g_dly__DOT__dly__v4) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__3__KET____DOT__g_dly__DOT__dly[1U] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__3__KET____DOT__g_dly__DOT__dly__v4;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__3__KET____DOT__g_dly__DOT__dly__v5) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__3__KET____DOT__g_dly__DOT__dly[2U] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__3__KET____DOT__g_dly__DOT__dly__v5;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__3__KET____DOT__g_dly__DOT__dly__v0) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__3__KET____DOT__g_dly__DOT__dly[0U] = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__3__KET____DOT__g_dly__DOT__dly[1U] = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__3__KET____DOT__g_dly__DOT__dly[2U] = 0U;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__3__KET____DOT__g_dly__DOT__dly__v3) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__3__KET____DOT__g_dly__DOT__dly[0U] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__3__KET____DOT__g_dly__DOT__dly__v3;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__3__KET____DOT__g_dly__DOT__dly__v4) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__3__KET____DOT__g_dly__DOT__dly[1U] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__3__KET____DOT__g_dly__DOT__dly__v4;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__3__KET____DOT__g_dly__DOT__dly__v5) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__3__KET____DOT__g_dly__DOT__dly[2U] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__3__KET____DOT__g_dly__DOT__dly__v5;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly__v0) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly[0U] = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly[1U] = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly[2U] = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly[3U] = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly[4U] = 0U;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly__v5) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly[0U] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly__v5;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly__v6) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly[1U] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly__v6;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly__v7) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly[2U] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly__v7;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly__v8) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly[3U] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly__v8;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly__v9) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly[4U] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly__v9;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly__v0) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly[0U] = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly[1U] = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly[2U] = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly[3U] = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly[4U] = 0U;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly__v5) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly[0U] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly__v5;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly__v6) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly[1U] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly__v6;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly__v7) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly[2U] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly__v7;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly__v8) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly[3U] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly__v8;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly__v9) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly[4U] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly__v9;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v0) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly[0U] = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly[1U] = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly[2U] = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly[3U] = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly[4U] = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly[5U] = 0U;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v6) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly[0U] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v6;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v7) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly[1U] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v7;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v8) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly[2U] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v8;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v9) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly[3U] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v9;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v10) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly[4U] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v10;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v11) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly[5U] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly__v11;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v0) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly[0U] = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly[1U] = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly[2U] = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly[3U] = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly[4U] = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly[5U] = 0U;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v6) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly[0U] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v6;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v7) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly[1U] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v7;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v8) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly[2U] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v8;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v9) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly[3U] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v9;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v10) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly[4U] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v10;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v11) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly[5U] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly__v11;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v0) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly[0U] = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly[1U] = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly[2U] = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly[3U] = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly[4U] = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly[5U] = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly[6U] = 0U;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v7) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly[0U] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v7;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v8) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly[1U] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v8;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v9) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly[2U] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v9;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v10) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly[3U] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v10;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v11) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly[4U] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v11;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v12) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly[5U] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v12;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v13) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly[6U] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly__v13;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v0) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly[0U] = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly[1U] = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly[2U] = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly[3U] = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly[4U] = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly[5U] = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly[6U] = 0U;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v7) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly[0U] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v7;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v8) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly[1U] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v8;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v9) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly[2U] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v9;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v10) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly[3U] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v10;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v11) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly[4U] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v11;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v12) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly[5U] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v12;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v13) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly[6U] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly__v13;
    }
    if (__Vdlyvset__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpuregs__v0) {
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpuregs[__Vdlyvdim0__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpuregs__v0] 
            = __Vdlyvval__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpuregs__v0;
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__ker__v0) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__ker[__Vdlyvdim0__tb_soc__DOT__u_tpu__DOT__ker__v0][__Vdlyvdim1__tb_soc__DOT__u_tpu__DOT__ker__v0] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__ker__v0;
    }
    vlSelf->tb_soc__DOT__u_tpu__DOT__f_tilex = __Vdly__tb_soc__DOT__u_tpu__DOT__f_tilex;
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__bank__v0) {
        VL_ASSIGNSEL_WI(128,32,(IData)(__Vdlyvlsb__tb_soc__DOT__u_tpu__DOT__bank__v0), 
                        vlSelf->tb_soc__DOT__u_tpu__DOT__bank
                        [__Vdlyvdim0__tb_soc__DOT__u_tpu__DOT__bank__v0]
                        [__Vdlyvdim1__tb_soc__DOT__u_tpu__DOT__bank__v0], __Vdlyvval__tb_soc__DOT__u_tpu__DOT__bank__v0);
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__boff__v0) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__boff[__Vdlyvdim0__tb_soc__DOT__u_tpu__DOT__boff__v0][0U] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__boff__v0;
        vlSelf->tb_soc__DOT__u_tpu__DOT__boff[__Vdlyvdim0__tb_soc__DOT__u_tpu__DOT__boff__v1][1U] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__boff__v1;
        vlSelf->tb_soc__DOT__u_tpu__DOT__boff[__Vdlyvdim0__tb_soc__DOT__u_tpu__DOT__boff__v2][2U] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__boff__v2;
    }
    vlSelf->tb_soc__DOT__u_tpu__DOT__r_state = __Vdly__tb_soc__DOT__u_tpu__DOT__r_state;
    vlSelf->tb_soc__DOT__u_tpu__DOT__raddr_r = __Vdly__tb_soc__DOT__u_tpu__DOT__raddr_r;
    vlSelf->tb_soc__DOT__sim_ptr = __Vdly__tb_soc__DOT__sim_ptr;
    vlSelf->tb_soc__DOT__raddr_l = __Vdly__tb_soc__DOT__raddr_l;
    vlSelf->tb_soc__DOT__rd_st = __Vdly__tb_soc__DOT__rd_st;
    if (__Vdlyvset__tb_soc__DOT__ram__v0) {
        vlSelf->tb_soc__DOT__ram[__Vdlyvdim0__tb_soc__DOT__ram__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__tb_soc__DOT__ram__v0))) 
                & vlSelf->tb_soc__DOT__ram[__Vdlyvdim0__tb_soc__DOT__ram__v0]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__tb_soc__DOT__ram__v0) 
                                   << (IData)(__Vdlyvlsb__tb_soc__DOT__ram__v0))));
    }
    if (__Vdlyvset__tb_soc__DOT__ram__v1) {
        vlSelf->tb_soc__DOT__ram[__Vdlyvdim0__tb_soc__DOT__ram__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__tb_soc__DOT__ram__v1))) 
                & vlSelf->tb_soc__DOT__ram[__Vdlyvdim0__tb_soc__DOT__ram__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__tb_soc__DOT__ram__v1) 
                                   << (IData)(__Vdlyvlsb__tb_soc__DOT__ram__v1))));
    }
    if (__Vdlyvset__tb_soc__DOT__ram__v2) {
        vlSelf->tb_soc__DOT__ram[__Vdlyvdim0__tb_soc__DOT__ram__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__tb_soc__DOT__ram__v2))) 
                & vlSelf->tb_soc__DOT__ram[__Vdlyvdim0__tb_soc__DOT__ram__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__tb_soc__DOT__ram__v2) 
                                   << (IData)(__Vdlyvlsb__tb_soc__DOT__ram__v2))));
    }
    if (__Vdlyvset__tb_soc__DOT__ram__v3) {
        vlSelf->tb_soc__DOT__ram[__Vdlyvdim0__tb_soc__DOT__ram__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__tb_soc__DOT__ram__v3))) 
                & vlSelf->tb_soc__DOT__ram[__Vdlyvdim0__tb_soc__DOT__ram__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__tb_soc__DOT__ram__v3) 
                                   << (IData)(__Vdlyvlsb__tb_soc__DOT__ram__v3))));
    }
    vlSelf->tb_soc__DOT__wr_st = __Vdly__tb_soc__DOT__wr_st;
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
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__a_skew[1U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__1__KET____DOT__g_dly__DOT__dly
        [0U];
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__b_skew[1U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__1__KET____DOT__g_dly__DOT__dly
        [0U];
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__a_skew[2U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__2__KET____DOT__g_dly__DOT__dly
        [1U];
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__b_skew[2U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__2__KET____DOT__g_dly__DOT__dly
        [1U];
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__a_skew[4U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__4__KET____DOT__g_dly__DOT__dly
        [3U];
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__b_skew[4U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__4__KET____DOT__g_dly__DOT__dly
        [3U];
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__a_skew[3U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__3__KET____DOT__g_dly__DOT__dly
        [2U];
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__b_skew[3U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__3__KET____DOT__g_dly__DOT__dly
        [2U];
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__a_skew[5U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__5__KET____DOT__g_dly__DOT__dly
        [4U];
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__b_skew[5U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__5__KET____DOT__g_dly__DOT__dly
        [4U];
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__a_skew[6U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__6__KET____DOT__g_dly__DOT__dly
        [5U];
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__b_skew[6U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__6__KET____DOT__g_dly__DOT__dly
        [5U];
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__a_skew[7U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_askew__BRA__7__KET____DOT__g_dly__DOT__dly
        [6U];
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__b_skew[7U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__g_bskew__BRA__7__KET____DOT__g_dly__DOT__dly
        [6U];
    vlSelf->tb_soc__DOT__u_tpu__DOT__ibuf_b_q = vlSelf->tb_soc__DOT__u_tpu__DOT__ibuf
        [(0x3fffU & ((((0U == (3U & ((IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__fi) 
                                     >> 2U))) ? vlSelf->tb_soc__DOT__u_tpu__DOT__f_rb0
                        : ((1U == (3U & ((IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__fi) 
                                         >> 2U))) ? vlSelf->tb_soc__DOT__u_tpu__DOT__f_rb1
                            : vlSelf->tb_soc__DOT__u_tpu__DOT__f_rb2)) 
                      >> 2U) + (3U & (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__fi))))];
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__pcpi_div_ready = 0U;
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__pcpi_div_wr = 0U;
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__pcpi_div_rd = 0U;
    vlSelf->tb_soc__DOT__u_tpu__DOT__obuf_we = 0U;
    vlSelf->tb_soc__DOT__u_tpu__DOT__wr_commit = ((IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__aw_got) 
                                                  & (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__w_got));
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[8U][7U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[7U][8U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[8U][6U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[7U][7U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[8U][5U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[7U][6U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[8U][4U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[7U][5U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[8U][3U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[7U][4U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[8U][2U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[7U][3U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[8U][1U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[7U][2U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[8U][0U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[7U][1U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__7__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[7U][7U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[6U][8U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[7U][6U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[6U][7U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[7U][5U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[6U][6U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[7U][4U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[6U][5U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[7U][3U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[6U][4U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[7U][2U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[6U][3U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[7U][1U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[6U][2U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[7U][0U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[6U][1U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__6__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[6U][7U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[5U][8U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[6U][6U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[5U][7U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[6U][5U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[5U][6U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[6U][4U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[5U][5U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[6U][3U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[5U][4U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[6U][2U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[5U][3U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[6U][1U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[5U][2U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[6U][0U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[5U][1U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__5__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[5U][7U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[4U][8U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[5U][6U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[4U][7U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[5U][5U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[4U][6U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[5U][4U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[4U][5U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[5U][3U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[4U][4U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[5U][2U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[4U][3U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[5U][1U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[4U][2U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[5U][0U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[4U][1U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__4__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[4U][7U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[3U][8U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[4U][6U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[3U][7U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[4U][5U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[3U][6U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[4U][4U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[3U][5U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[4U][3U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[3U][4U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[4U][2U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[3U][3U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[4U][1U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[3U][2U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[4U][0U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[3U][1U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__3__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[3U][7U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[2U][8U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[3U][6U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[2U][7U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[3U][5U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[2U][6U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[3U][4U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[2U][5U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[3U][3U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[2U][4U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[3U][2U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[2U][3U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[3U][1U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[2U][2U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[3U][0U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[2U][1U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__2__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[2U][7U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[1U][8U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[2U][6U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[1U][7U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[2U][5U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[1U][6U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[2U][4U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[1U][5U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[2U][3U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[1U][4U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[2U][2U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[1U][3U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[2U][1U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[1U][2U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[2U][0U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[1U][1U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__1__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[1U][7U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[0U][8U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__7__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[1U][6U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[0U][7U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__6__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[1U][5U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[0U][6U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__5__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[1U][4U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[0U][5U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__4__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[1U][3U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[0U][4U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__3__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[1U][2U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[0U][3U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__2__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[1U][1U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[0U][2U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__1__KET____DOT__u_pe__a_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__v[1U][0U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__b_out;
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__h[0U][1U] 
        = vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT____Vcellout__g_row__BRA__0__KET____DOT__g_col__BRA__0__KET____DOT__u_pe__a_out;
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
    if ((((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mul) 
          | (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh)) 
         & (~ (IData)((0U != (3U & (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__active))))))) {
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rs1 
            = (0x1ffffffffULL & (((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh) 
                                  | (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu))
                                  ? VL_EXTENDS_QI(33,32, vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1)
                                  : (QData)((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1))));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__rs2 
            = (0x1ffffffffULL & ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh)
                                  ? VL_EXTENDS_QI(33,32, vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op2)
                                  : (QData)((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op2))));
        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__active 
            = (1U | (IData)(__Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__active));
    } else {
        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__active 
            = (0xeU & (IData)(__Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__active));
    }
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__active 
        = ((1U & (IData)(__Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__active)) 
           | (0xeU & ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__active) 
                      << 1U)));
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
    vlSelf->tb_soc__DOT__u_tpu__DOT__ibuf_a_q = vlSelf->tb_soc__DOT__u_tpu__DOT__ibuf
        [vlSelf->tb_soc__DOT__u_tpu__DOT__ibuf_a_addr];
    vlSelf->tb_soc__DOT__u_tpu__DOT__obuf_a_q = vlSelf->tb_soc__DOT__u_tpu__DOT__obuf
        [(0x3fffU & (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_addr 
                     >> 2U))];
    vlSelf->tb_soc__DOT__u_tpu__DOT__fi = __Vdly__tb_soc__DOT__u_tpu__DOT__fi;
    vlSelf->tb_soc__DOT__u_tpu__DOT__f_rb0 = __Vdly__tb_soc__DOT__u_tpu__DOT__f_rb0;
    vlSelf->tb_soc__DOT__u_tpu__DOT__f_rb1 = __Vdly__tb_soc__DOT__u_tpu__DOT__f_rb1;
    vlSelf->tb_soc__DOT__u_tpu__DOT__f_rb2 = __Vdly__tb_soc__DOT__u_tpu__DOT__f_rb2;
    if (vlSelf->tb_soc__DOT__resetn) {
        if ((((0x44U == (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_addr 
                         >> 0x18U)) ? (IData)(vlSelf->tb_soc__DOT__t_awready)
               : (IData)(vlSelf->tb_soc__DOT__b_wready)) 
             & (IData)(vlSelf->tb_soc__DOT__awvalid))) {
            vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__axi_adapter__DOT__ack_awvalid = 1U;
        }
        if ((((0x44U == (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_addr 
                         >> 0x18U)) ? (IData)(vlSelf->tb_soc__DOT__t_arready)
               : (IData)(vlSelf->tb_soc__DOT__b_arready)) 
             & (IData)(vlSelf->tb_soc__DOT__arvalid))) {
            vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__axi_adapter__DOT__ack_arvalid = 1U;
        }
        if ((((0x44U == (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_addr 
                         >> 0x18U)) ? (IData)(vlSelf->tb_soc__DOT__t_wready)
               : (IData)(vlSelf->tb_soc__DOT__b_wready)) 
             & (IData)(vlSelf->tb_soc__DOT__wvalid))) {
            vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__axi_adapter__DOT__ack_wvalid = 1U;
        }
        if ((1U & ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__axi_adapter__DOT__xfer_done) 
                   | (~ (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_valid))))) {
            vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__axi_adapter__DOT__ack_awvalid = 0U;
            vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__axi_adapter__DOT__ack_arvalid = 0U;
            vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__axi_adapter__DOT__ack_wvalid = 0U;
        }
        if (((IData)(vlSelf->tb_soc__DOT____Vcellinp__u_tpu__s_axi_wvalid) 
             & (IData)(vlSelf->tb_soc__DOT__t_wready))) {
            vlSelf->tb_soc__DOT__u_tpu__DOT__wstrb_r 
                = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_wstrb;
        }
        if (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__start) {
            __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__running = 1U;
            __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__dividend 
                = ((((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_div) 
                     | (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem)) 
                    & (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1 
                       >> 0x1fU)) ? (- vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1)
                    : vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1);
            __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__divisor 
                = (0x7fffffffffffffffULL & VL_SHIFTL_QQI(63,63,32, 
                                                         ((((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_div) 
                                                            | (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem)) 
                                                           & (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op2 
                                                              >> 0x1fU))
                                                           ? 
                                                          (- (QData)((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op2)))
                                                           : (QData)((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op2))), 0x1fU));
            __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient = 0U;
            __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk = 0x80000000U;
        } else if (((~ (IData)((0U != vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk))) 
                    & (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__running))) {
            __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__running = 0U;
            vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__pcpi_div_ready = 1U;
            vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__pcpi_div_wr = 1U;
            vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__pcpi_div_rd 
                = (((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_div) 
                    | (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu))
                    ? ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__outsign)
                        ? (- vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient)
                        : vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient)
                    : ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__outsign)
                        ? (- vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__dividend)
                        : vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__dividend));
        } else {
            if ((vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__divisor 
                 <= (QData)((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__dividend)))) {
                __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__dividend 
                    = (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__dividend 
                       - (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__divisor));
                __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient 
                    = (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient 
                       | vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk);
            }
            __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__divisor 
                = (0x7fffffffffffffffULL & VL_SHIFTR_QQI(63,63,32, vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__divisor, 1U));
            __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk 
                = VL_SHIFTR_III(32,32,32, vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk, 1U);
        }
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__running 
            = __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__running;
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__dividend 
            = __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__dividend;
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__divisor 
            = __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__divisor;
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient 
            = __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient;
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk 
            = __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk;
        __Vdly__tb_soc__DOT__u_tpu__DOT__fetch_go = 0U;
        if (vlSelf->tb_soc__DOT__u_tpu__DOT__busy) {
            vlSelf->tb_soc__DOT__u_tpu__DOT__cycles 
                = ((IData)(1U) + vlSelf->tb_soc__DOT__u_tpu__DOT__cycles);
        }
        if ((4U & (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__state))) {
            if ((2U & (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__state))) {
                __Vdly__tb_soc__DOT__u_tpu__DOT__state = 0U;
            } else if ((1U & (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__state))) {
                __Vdly__tb_soc__DOT__u_tpu__DOT__tile_cnt 
                    = (0xfffffU & ((IData)(1U) + vlSelf->tb_soc__DOT__u_tpu__DOT__tile_cnt));
                if (((0xfffffU & ((IData)(1U) + vlSelf->tb_soc__DOT__u_tpu__DOT__tile_cnt)) 
                     == vlSelf->tb_soc__DOT__u_tpu__DOT__ntiles)) {
                    vlSelf->tb_soc__DOT__u_tpu__DOT__busy = 0U;
                    vlSelf->tb_soc__DOT__u_tpu__DOT__done = 1U;
                    __Vdly__tb_soc__DOT__u_tpu__DOT__state = 0U;
                } else {
                    __Vdly__tb_soc__DOT__u_tpu__DOT__state = 2U;
                }
            } else {
                if ((0U != (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__d_i))) {
                    if ((3U == (3U & (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__d_pix)))) {
                        vlSelf->tb_soc__DOT__u_tpu__DOT__obuf_we = 1U;
                        vlSelf->tb_soc__DOT__u_tpu__DOT__obuf_waddr 
                            = vlSelf->tb_soc__DOT__u_tpu__DOT__out_wa;
                        vlSelf->tb_soc__DOT__u_tpu__DOT__obuf_wdata 
                            = (((IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__px) 
                                << 0x18U) | vlSelf->tb_soc__DOT__u_tpu__DOT__word_r);
                        vlSelf->tb_soc__DOT__u_tpu__DOT__out_wa 
                            = (0x3fffU & ((IData)(1U) 
                                          + (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__out_wa)));
                    } else {
                        vlSelf->tb_soc__DOT__u_tpu__DOT____Vlvbound_h2689cd83__0 
                            = vlSelf->tb_soc__DOT__u_tpu__DOT__px;
                        if ((0x17U >= (0x1fU & VL_SHIFTL_III(5,32,32, 
                                                             (3U 
                                                              & (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__d_pix)), 3U)))) {
                            vlSelf->tb_soc__DOT__u_tpu__DOT__word_r 
                                = (((~ ((IData)(0xffU) 
                                        << (0x1fU & 
                                            VL_SHIFTL_III(5,32,32, 
                                                          (3U 
                                                           & (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__d_pix)), 3U)))) 
                                    & vlSelf->tb_soc__DOT__u_tpu__DOT__word_r) 
                                   | (0xffffffU & ((IData)(vlSelf->tb_soc__DOT__u_tpu__DOT____Vlvbound_h2689cd83__0) 
                                                   << 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(5,32,32, 
                                                                    (3U 
                                                                     & (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__d_pix)), 3U)))));
                        }
                    }
                }
                __Vdly__tb_soc__DOT__u_tpu__DOT__d_i 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__d_i)));
                if ((8U == (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__d_i))) {
                    __Vdly__tb_soc__DOT__u_tpu__DOT__state = 5U;
                }
            }
        } else if ((2U & (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__state))) {
            if ((1U & (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__state))) {
                if ((9U > (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__t_cnt))) {
                    if ((2U == (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__dc))) {
                        vlSelf->tb_soc__DOT__u_tpu__DOT__dr 
                            = (3U & ((IData)(1U) + (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__dr)));
                        __Vdly__tb_soc__DOT__u_tpu__DOT__dc = 0U;
                    } else {
                        __Vdly__tb_soc__DOT__u_tpu__DOT__dc 
                            = (3U & ((IData)(1U) + (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__dc)));
                    }
                }
                __Vdly__tb_soc__DOT__u_tpu__DOT__t_cnt 
                    = (0x1fU & ((IData)(1U) + (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__t_cnt)));
                if ((0x17U == (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__t_cnt))) {
                    __Vdly__tb_soc__DOT__u_tpu__DOT__d_i = 0U;
                    __Vdly__tb_soc__DOT__u_tpu__DOT__state = 4U;
                }
            } else if ((((~ (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__f_run)) 
                         & (~ (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__fetch_go))) 
                        & (vlSelf->tb_soc__DOT__u_tpu__DOT__f_cnt 
                           > vlSelf->tb_soc__DOT__u_tpu__DOT__tile_cnt))) {
                vlSelf->tb_soc__DOT__u_tpu__DOT__dr = 0U;
                __Vdly__tb_soc__DOT__u_tpu__DOT__t_cnt = 0U;
                __Vdly__tb_soc__DOT__u_tpu__DOT__dc = 0U;
                __Vdly__tb_soc__DOT__u_tpu__DOT__fetch_go 
                    = (vlSelf->tb_soc__DOT__u_tpu__DOT__f_cnt 
                       < vlSelf->tb_soc__DOT__u_tpu__DOT__ntiles);
                __Vdly__tb_soc__DOT__u_tpu__DOT__state = 3U;
            }
        } else if ((1U & (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__state))) {
            vlSelf->tb_soc__DOT__u_tpu__DOT__ntiles 
                = (0xfffffU & ((IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__tiles_row) 
                               * (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__out_rows)));
            __Vdly__tb_soc__DOT__u_tpu__DOT__fetch_go = 1U;
            __Vdly__tb_soc__DOT__u_tpu__DOT__state = 2U;
        } else if (vlSelf->tb_soc__DOT__u_tpu__DOT__start_pulse) {
            vlSelf->tb_soc__DOT__u_tpu__DOT__out_wa = 0U;
            vlSelf->tb_soc__DOT__u_tpu__DOT__busy = 1U;
            vlSelf->tb_soc__DOT__u_tpu__DOT__done = 0U;
            vlSelf->tb_soc__DOT__u_tpu__DOT__cycles = 0U;
            vlSelf->tb_soc__DOT__u_tpu__DOT__out_rows 
                = (0x3ffU & ((IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__img_h) 
                             - (IData)(2U)));
            vlSelf->tb_soc__DOT__u_tpu__DOT__tiles_row 
                = (0x7fU & (((IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__img_w) 
                             - (IData)(2U)) >> 3U));
            __Vdly__tb_soc__DOT__u_tpu__DOT__tile_cnt = 0U;
            __Vdly__tb_soc__DOT__u_tpu__DOT__state = 1U;
        }
    } else {
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__axi_adapter__DOT__ack_awvalid = 0U;
        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__running = 0U;
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__running 
            = __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__running;
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__dividend 
            = __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__dividend;
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__divisor 
            = __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__divisor;
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient 
            = __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient;
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk 
            = __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__quotient_msk;
        __Vdly__tb_soc__DOT__u_tpu__DOT__fetch_go = 0U;
        __Vdly__tb_soc__DOT__u_tpu__DOT__state = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__busy = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__done = 0U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__cycles = 0U;
    }
    vlSelf->tb_soc__DOT__u_tpu__DOT__f_run = __Vdly__tb_soc__DOT__u_tpu__DOT__f_run;
    vlSelf->tb_soc__DOT__u_tpu__DOT__fetch_go = __Vdly__tb_soc__DOT__u_tpu__DOT__fetch_go;
    vlSelf->tb_soc__DOT__u_tpu__DOT__f_cnt = __Vdly__tb_soc__DOT__u_tpu__DOT__f_cnt;
    vlSelf->tb_soc__DOT__u_tpu__DOT__d_i = __Vdly__tb_soc__DOT__u_tpu__DOT__d_i;
    vlSelf->tb_soc__DOT__u_tpu__DOT__tile_cnt = __Vdly__tb_soc__DOT__u_tpu__DOT__tile_cnt;
    vlSelf->tb_soc__DOT__u_tpu__DOT__t_cnt = __Vdly__tb_soc__DOT__u_tpu__DOT__t_cnt;
    vlSelf->tb_soc__DOT__u_tpu__DOT__state = __Vdly__tb_soc__DOT__u_tpu__DOT__state;
    vlSelf->tb_soc__DOT__u_tpu__DOT__dc = __Vdly__tb_soc__DOT__u_tpu__DOT__dc;
    vlSelf->tb_soc__DOT__t_arready = ((~ (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__wr_commit)) 
                                      & (0U == (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__r_state)));
    if ((1U & (~ (IData)(vlSelf->tb_soc__DOT__resetn)))) {
        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__active = 0U;
    }
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__active 
        = __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__active;
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
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__ibuf__v0) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__ibuf[__Vdlyvdim0__tb_soc__DOT__u_tpu__DOT__ibuf__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__tb_soc__DOT__u_tpu__DOT__ibuf__v0))) 
                & vlSelf->tb_soc__DOT__u_tpu__DOT__ibuf
                [__Vdlyvdim0__tb_soc__DOT__u_tpu__DOT__ibuf__v0]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__tb_soc__DOT__u_tpu__DOT__ibuf__v0) 
                                   << (IData)(__Vdlyvlsb__tb_soc__DOT__u_tpu__DOT__ibuf__v0))));
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__ibuf__v1) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__ibuf[__Vdlyvdim0__tb_soc__DOT__u_tpu__DOT__ibuf__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__tb_soc__DOT__u_tpu__DOT__ibuf__v1))) 
                & vlSelf->tb_soc__DOT__u_tpu__DOT__ibuf
                [__Vdlyvdim0__tb_soc__DOT__u_tpu__DOT__ibuf__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__tb_soc__DOT__u_tpu__DOT__ibuf__v1) 
                                   << (IData)(__Vdlyvlsb__tb_soc__DOT__u_tpu__DOT__ibuf__v1))));
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__ibuf__v2) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__ibuf[__Vdlyvdim0__tb_soc__DOT__u_tpu__DOT__ibuf__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__tb_soc__DOT__u_tpu__DOT__ibuf__v2))) 
                & vlSelf->tb_soc__DOT__u_tpu__DOT__ibuf
                [__Vdlyvdim0__tb_soc__DOT__u_tpu__DOT__ibuf__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__tb_soc__DOT__u_tpu__DOT__ibuf__v2) 
                                   << (IData)(__Vdlyvlsb__tb_soc__DOT__u_tpu__DOT__ibuf__v2))));
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__ibuf__v3) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__ibuf[__Vdlyvdim0__tb_soc__DOT__u_tpu__DOT__ibuf__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__tb_soc__DOT__u_tpu__DOT__ibuf__v3))) 
                & vlSelf->tb_soc__DOT__u_tpu__DOT__ibuf
                [__Vdlyvdim0__tb_soc__DOT__u_tpu__DOT__ibuf__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__tb_soc__DOT__u_tpu__DOT__ibuf__v3) 
                                   << (IData)(__Vdlyvlsb__tb_soc__DOT__u_tpu__DOT__ibuf__v3))));
    }
    if (__Vdlyvset__tb_soc__DOT__u_tpu__DOT__obuf__v0) {
        vlSelf->tb_soc__DOT__u_tpu__DOT__obuf[__Vdlyvdim0__tb_soc__DOT__u_tpu__DOT__obuf__v0] 
            = __Vdlyvval__tb_soc__DOT__u_tpu__DOT__obuf__v0;
    }
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__a_skew[0U] 
        = (0x1ffU & vlSelf->tb_soc__DOT__u_tpu__DOT__a_flat_r[0U]);
    vlSelf->tb_soc__DOT__u_tpu__DOT__u_array__DOT__b_skew[0U] 
        = (0xffU & (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__b_flat_r));
    vlSelf->tb_soc__DOT__u_tpu__DOT__f_sel = (1U & vlSelf->tb_soc__DOT__u_tpu__DOT__f_cnt);
    vlSelf->tb_soc__DOT__u_tpu__DOT__d_pix = (7U & 
                                              ((IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__d_i) 
                                               - (IData)(1U)));
    tb_soc__DOT__u_tpu__DOT__feeding = ((3U == (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__state)) 
                                        & (9U > (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__t_cnt)));
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
    tb_soc__DOT__u_tpu__DOT__base = (0xfU & (((2U >= (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__dr))
                                               ? vlSelf->tb_soc__DOT__u_tpu__DOT__boff
                                              [(1U 
                                                & vlSelf->tb_soc__DOT__u_tpu__DOT__tile_cnt)]
                                              [vlSelf->tb_soc__DOT__u_tpu__DOT__dr]
                                               : 0U) 
                                             + (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__dc)));
    tb_soc__DOT__u_tpu__DOT__kk = (0xfU & ((IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__dr) 
                                           + (((IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__dr) 
                                               << 1U) 
                                              + (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__dc))));
    if (vlSelf->tb_soc__DOT__resetn) {
        if (vlSelf->tb_soc__DOT__u_tpu__DOT__wr_regs) {
            if ((1U & (~ (vlSelf->tb_soc__DOT__u_tpu__DOT__awaddr_r 
                          >> 9U)))) {
                if ((2U != (7U & (vlSelf->tb_soc__DOT__u_tpu__DOT__awaddr_r 
                                  >> 2U)))) {
                    if ((3U != (7U & (vlSelf->tb_soc__DOT__u_tpu__DOT__awaddr_r 
                                      >> 2U)))) {
                        if ((4U == (7U & (vlSelf->tb_soc__DOT__u_tpu__DOT__awaddr_r 
                                          >> 2U)))) {
                            vlSelf->tb_soc__DOT__u_tpu__DOT__post_colsel 
                                = (7U & (vlSelf->tb_soc__DOT__u_tpu__DOT__wdata_r 
                                         >> 8U));
                        }
                    }
                }
            }
        }
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__axi_adapter__DOT__xfer_done 
            = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_valid) 
               & (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_ready));
    } else {
        vlSelf->tb_soc__DOT__u_tpu__DOT__post_colsel = 0U;
    }
    if ((1U & ((~ (IData)(vlSelf->tb_soc__DOT__resetn)) 
               | (IData)(vlSelf->tb_soc__DOT__trap)))) {
        if ((1U & (~ (IData)(vlSelf->tb_soc__DOT__resetn)))) {
            __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_state = 0U;
        }
        if ((1U & ((~ (IData)(vlSelf->tb_soc__DOT__resetn)) 
                   | (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_ready)))) {
            vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_valid = 0U;
        }
    } else {
        if (((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_la_read) 
             | (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_la_write))) {
            vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_wstrb 
                = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_la_wstrb) 
                   & (- (IData)((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_la_write))));
        }
        if ((0U == (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_state))) {
            if ((((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_prefetch) 
                  | (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_rinst)) 
                 | (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_rdata))) {
                vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_valid = 1U;
                vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_wstrb = 0U;
                __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_state = 1U;
            }
            if (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_wdata) {
                vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_valid = 1U;
                __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_state = 2U;
            }
        } else if ((1U == (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_state))) {
            if (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_xfer) {
                vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_valid = 0U;
                __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_state 
                    = (((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_rinst) 
                        | (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_rdata))
                        ? 0U : 3U);
            }
        } else if ((2U == (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_state))) {
            if (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_xfer) {
                vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_valid = 0U;
                __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_state = 0U;
            }
        } else if ((3U == (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_state))) {
            if (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_rinst) {
                __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_state = 0U;
            }
        }
    }
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
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_state 
        = __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_state;
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_ready 
        = (((IData)(vlSelf->tb_soc__DOT__bb_valid) 
            | (IData)(vlSelf->tb_soc__DOT__t_bvalid)) 
           | ((IData)(vlSelf->tb_soc__DOT__rb_valid) 
              | (IData)(vlSelf->tb_soc__DOT__t_rvalid)));
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
    if (vlSelf->tb_soc__DOT__resetn) {
        if (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__start) {
            vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__outsign 
                = ((((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_div) 
                     & ((vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1 
                         >> 0x1fU) != (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op2 
                                       >> 0x1fU))) 
                    & (0U != vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op2)) 
                   | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem) 
                      & (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1 
                         >> 0x1fU)));
        }
        if (vlSelf->tb_soc__DOT__u_tpu__DOT__wr_regs) {
            if ((1U & (~ (vlSelf->tb_soc__DOT__u_tpu__DOT__awaddr_r 
                          >> 9U)))) {
                if ((2U != (7U & (vlSelf->tb_soc__DOT__u_tpu__DOT__awaddr_r 
                                  >> 2U)))) {
                    if ((3U == (7U & (vlSelf->tb_soc__DOT__u_tpu__DOT__awaddr_r 
                                      >> 2U)))) {
                        vlSelf->tb_soc__DOT__u_tpu__DOT__img_h 
                            = (0x3ffU & vlSelf->tb_soc__DOT__u_tpu__DOT__wdata_r);
                    }
                }
                if ((2U == (7U & (vlSelf->tb_soc__DOT__u_tpu__DOT__awaddr_r 
                                  >> 2U)))) {
                    vlSelf->tb_soc__DOT__u_tpu__DOT__img_w 
                        = (0x3ffU & vlSelf->tb_soc__DOT__u_tpu__DOT__wdata_r);
                }
            }
        }
    } else {
        vlSelf->tb_soc__DOT__u_tpu__DOT__img_h = 0xf2U;
        vlSelf->tb_soc__DOT__u_tpu__DOT__img_w = 0xf2U;
    }
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
    vlSelf->tb_soc__DOT__rready = ((~ (IData)((0U != (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_wstrb)))) 
                                   & (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_valid));
    vlSelf->tb_soc__DOT__bready = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_valid) 
                                   & (0U != (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_wstrb)));
    if (vlSelf->tb_soc__DOT__resetn) {
        if (((IData)(vlSelf->tb_soc__DOT____Vcellinp__u_tpu__s_axi_wvalid) 
             & (IData)(vlSelf->tb_soc__DOT__t_wready))) {
            vlSelf->tb_soc__DOT__u_tpu__DOT__wdata_r 
                = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_wdata;
        }
    }
    vlSelf->tb_soc__DOT__t_wready = (1U & ((~ (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__w_got)) 
                                           & (~ (IData)(vlSelf->tb_soc__DOT__t_bvalid))));
    if (vlSelf->tb_soc__DOT__resetn) {
        if (((IData)(vlSelf->tb_soc__DOT____Vcellinp__u_tpu__s_axi_awvalid) 
             & (IData)(vlSelf->tb_soc__DOT__t_awready))) {
            vlSelf->tb_soc__DOT__u_tpu__DOT__awaddr_r 
                = (0x3ffffU & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_addr);
        }
    }
    vlSelf->tb_soc__DOT__t_awready = (1U & ((~ (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__aw_got)) 
                                            & (~ (IData)(vlSelf->tb_soc__DOT__t_bvalid))));
    vlSelf->tb_soc__DOT__arvalid = ((~ (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__axi_adapter__DOT__ack_arvalid)) 
                                    & (IData)(vlSelf->tb_soc__DOT__rready));
    vlSelf->tb_soc__DOT__wvalid = ((~ (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__axi_adapter__DOT__ack_wvalid)) 
                                   & (IData)(vlSelf->tb_soc__DOT__bready));
    vlSelf->tb_soc__DOT__awvalid = ((~ (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__axi_adapter__DOT__ack_awvalid)) 
                                    & (IData)(vlSelf->tb_soc__DOT__bready));
    if ((1U & (~ ((~ (IData)(vlSelf->tb_soc__DOT__resetn)) 
                  | (IData)(vlSelf->tb_soc__DOT__trap))))) {
        if (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_la_write) {
            vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_wdata 
                = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_la_wdata;
        }
        if (((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_la_read) 
             | (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_la_write))) {
            vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_addr 
                = (((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_prefetch) 
                    | (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_rinst))
                    ? (0xfffffffcU & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__next_pc)
                    : (0xfffffffcU & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1));
        }
    }
    vlSelf->tb_soc__DOT__u_tpu__DOT__wr_ibuf = ((IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__wr_commit) 
                                                & (0x10000U 
                                                   == 
                                                   (0x30000U 
                                                    & vlSelf->tb_soc__DOT__u_tpu__DOT__awaddr_r)));
    vlSelf->tb_soc__DOT__u_tpu__DOT__ibuf_a_addr = 
        (0x3fffU & ((IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__wr_ibuf)
                     ? (vlSelf->tb_soc__DOT__u_tpu__DOT__awaddr_r 
                        >> 2U) : (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_addr 
                                  >> 2U)));
    vlSelf->tb_soc__DOT__u_tpu__DOT__wr_regs = ((IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__wr_commit) 
                                                & (0U 
                                                   == 
                                                   (0x30000U 
                                                    & vlSelf->tb_soc__DOT__u_tpu__DOT__awaddr_r)));
    vlSelf->tb_soc__DOT__u_tpu__DOT__start_pulse = 
        ((IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__wr_regs) 
         & (IData)((((0U == (0x21cU & vlSelf->tb_soc__DOT__u_tpu__DOT__awaddr_r)) 
                     & (~ (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__busy))) 
                    & vlSelf->tb_soc__DOT__u_tpu__DOT__wdata_r)));
    vlSelf->tb_soc__DOT__u_tpu__DOT__arr_clear = (1U 
                                                  & ((5U 
                                                      == (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__state)) 
                                                     | ((~ (IData)(vlSelf->tb_soc__DOT__resetn)) 
                                                        | (IData)(vlSelf->tb_soc__DOT__u_tpu__DOT__start_pulse))));
    vlSelf->tb_soc__DOT____Vcellinp__u_tpu__s_axi_awvalid 
        = ((IData)(vlSelf->tb_soc__DOT__awvalid) & 
           (0x44U == (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_addr 
                      >> 0x18U)));
    vlSelf->tb_soc__DOT____Vcellinp__u_tpu__s_axi_wvalid 
        = ((IData)(vlSelf->tb_soc__DOT__wvalid) & (0x44U 
                                                   == 
                                                   (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_addr 
                                                    >> 0x18U)));
    vlSelf->tb_soc__DOT__b_wready = ((0U == (IData)(vlSelf->tb_soc__DOT__wr_st)) 
                                     & ((IData)(vlSelf->tb_soc__DOT__awvalid) 
                                        & ((0x44U != 
                                            (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_addr 
                                             >> 0x18U)) 
                                           & (IData)(vlSelf->tb_soc__DOT__wvalid))));
    vlSelf->tb_soc__DOT__trap = 0U;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_sh = 0U;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_out = 0U;
    tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__set_mem_do_rinst = 0U;
    tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__set_mem_do_rdata = 0U;
    tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__set_mem_do_wdata = 0U;
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoder_trigger 
        = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_rinst) 
           & (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_done));
    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoder_pseudo_trigger = 0U;
    if (vlSelf->tb_soc__DOT__resetn) {
        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__count_cycle 
            = (1ULL + vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__count_cycle);
        if (((((((((0x80U == (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpu_state)) 
                   | (0x40U == (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpu_state))) 
                  | (0x20U == (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpu_state))) 
                 | (0x10U == (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpu_state))) 
                | (8U == (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpu_state))) 
               | (4U == (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpu_state))) 
              | (2U == (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpu_state))) 
             | (1U == (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpu_state)))) {
            if ((0x80U == (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpu_state))) {
                vlSelf->tb_soc__DOT__trap = 1U;
            } else if ((0x40U == (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpu_state))) {
                __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_rinst 
                    = (1U & ((~ (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoder_trigger)) 
                             & (~ (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__do_waitirq))));
                __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_wordsize = 0U;
                __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_is_lu = 0U;
                __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_is_lh = 0U;
                __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_is_lb = 0U;
                vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_rd 
                    = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoded_rd;
                vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_compr 
                    = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__compressed_instr;
                vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__current_pc 
                    = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_next_pc;
                if (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_branch) {
                    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__current_pc 
                        = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_store)
                            ? (0xfffffffeU & ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_stalu)
                                               ? vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__alu_out_q
                                               : vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_out))
                            : vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_next_pc);
                }
                __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_pc 
                    = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__current_pc;
                vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_next_pc 
                    = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__current_pc;
                vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_store = 0U;
                vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_stalu = 0U;
                vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_branch = 0U;
                if (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoder_trigger) {
                    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__count_instr 
                        = (1ULL + vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__count_instr);
                    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_next_pc 
                        = (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__current_pc 
                           + ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__compressed_instr)
                               ? 2U : 4U));
                    if (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_jal) {
                        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_rinst = 1U;
                        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_next_pc 
                            = (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__current_pc 
                               + vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoded_imm_j);
                        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_branch = 1U;
                    } else {
                        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_rinst = 0U;
                        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_prefetch 
                            = (1U & ((~ (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_jalr)) 
                                     & (~ (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_retirq))));
                        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpu_state = 0x20U;
                    }
                }
            } else if ((0x20U == (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpu_state))) {
                __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1 = 0U;
                vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op2 = 0U;
                if ((((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_trap) 
                      | (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh)) 
                     | (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_lui_auipc_jal))) {
                    if (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_trap) {
                        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1 
                            = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpuregs_rs1;
                        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__pcpi_valid = 1U;
                        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_sh 
                            = (0x1fU & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpuregs_rs2);
                        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op2 
                            = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpuregs_rs2;
                        if (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__pcpi_int_ready) {
                            __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_rinst = 1U;
                            __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__pcpi_valid = 0U;
                            __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_out 
                                = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__pcpi_int_rd;
                            vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_store 
                                = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__pcpi_int_wr;
                            __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                        } else if (((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__pcpi_timeout) 
                                    | (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_ecall_ebreak))) {
                            __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__pcpi_valid = 0U;
                            __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpu_state = 0x80U;
                        }
                    } else if (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh) {
                        if (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_rdcycle) {
                            __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_out 
                                = (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__count_cycle);
                        } else if (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_rdcycleh) {
                            __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_out 
                                = (IData)((vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__count_cycle 
                                           >> 0x20U));
                        } else if (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_rdinstr) {
                            __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_out 
                                = (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__count_instr);
                        } else if (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_rdinstrh) {
                            __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_out 
                                = (IData)((vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__count_instr 
                                           >> 0x20U));
                        }
                        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_store = 1U;
                        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                    } else if (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_lui_auipc_jal) {
                        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1 
                            = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_lui)
                                ? 0U : vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_pc);
                        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op2 
                            = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoded_imm;
                        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_rinst 
                            = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_prefetch;
                        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpu_state = 8U;
                    } else {
                        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_store = 1U;
                        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_out 
                            = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__timer;
                        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__timer 
                            = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpuregs_rs1;
                    }
                } else if (((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu) 
                            & (~ (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_trap)))) {
                    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1 
                        = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpuregs_rs1;
                    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpu_state = 1U;
                    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_rinst = 1U;
                } else if (((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi) 
                            || (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_slli_srli_srai))) {
                    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1 
                        = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpuregs_rs1;
                    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op2 
                        = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_slli_srli_srai)
                            ? (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoded_rs2)
                            : vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoded_imm);
                    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_rinst 
                        = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_prefetch;
                    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpu_state = 8U;
                } else {
                    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1 
                        = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpuregs_rs1;
                    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_sh 
                        = (0x1fU & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpuregs_rs2);
                    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op2 
                        = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpuregs_rs2;
                    if (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_sb_sh_sw) {
                        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpu_state = 2U;
                        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_rinst = 1U;
                    } else {
                        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_rinst 
                            = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_prefetch;
                        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpu_state = 8U;
                    }
                }
            } else if ((0x10U == (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpu_state))) {
                __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_sh 
                    = (0x1fU & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpuregs_rs2);
                vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op2 
                    = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpuregs_rs2;
                if (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_trap) {
                    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__pcpi_valid = 1U;
                    if (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__pcpi_int_ready) {
                        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_rinst = 1U;
                        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__pcpi_valid = 0U;
                        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_out 
                            = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__pcpi_int_rd;
                        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_store 
                            = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__pcpi_int_wr;
                        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                    } else if (((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__pcpi_timeout) 
                                | (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_ecall_ebreak))) {
                        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__pcpi_valid = 0U;
                        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpu_state = 0x80U;
                    }
                } else if (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_sb_sh_sw) {
                    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpu_state = 2U;
                    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_rinst = 1U;
                } else {
                    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_rinst 
                        = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_prefetch;
                    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpu_state = 8U;
                }
            } else if ((8U == (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpu_state))) {
                __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_out 
                    = (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_pc 
                       + vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoded_imm);
                if (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu) {
                    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_rd = 0U;
                    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_store 
                        = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__alu_out_0;
                    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_branch 
                        = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__alu_out_0;
                    if (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_done) {
                        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                    }
                    if (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__alu_out_0) {
                        tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__set_mem_do_rinst = 1U;
                        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoder_trigger = 0U;
                    }
                } else {
                    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_branch 
                        = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_jalr;
                    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_store = 1U;
                    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_stalu = 1U;
                    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                }
            } else if ((4U == (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpu_state))) {
                vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_store = 1U;
                if ((0U == (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_sh))) {
                    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_out 
                        = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1;
                    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_rinst 
                        = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_prefetch;
                    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                } else if ((4U <= (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_sh))) {
                    if (((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_slli) 
                         | (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_sll))) {
                        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1 
                            = VL_SHIFTL_III(32,32,32, vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1, 4U);
                    } else if (((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_srli) 
                                | (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_srl))) {
                        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1 
                            = VL_SHIFTR_III(32,32,32, vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1, 4U);
                    } else if (((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_srai) 
                                | (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_sra))) {
                        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1 
                            = VL_SHIFTRS_III(32,32,32, vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1, 4U);
                    }
                    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_sh 
                        = (0x1fU & ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_sh) 
                                    - (IData)(4U)));
                } else {
                    if (((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_slli) 
                         | (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_sll))) {
                        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1 
                            = VL_SHIFTL_III(32,32,32, vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1, 1U);
                    } else if (((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_srli) 
                                | (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_srl))) {
                        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1 
                            = VL_SHIFTR_III(32,32,32, vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1, 1U);
                    } else if (((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_srai) 
                                | (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_sra))) {
                        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1 
                            = VL_SHIFTRS_III(32,32,32, vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1, 1U);
                    }
                    __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_sh 
                        = (0x1fU & ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_sh) 
                                    - (IData)(1U)));
                }
            } else if ((2U == (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpu_state))) {
                if ((1U & ((~ (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_prefetch)) 
                           | (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_done)))) {
                    if ((1U & (~ (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_wdata)))) {
                        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1 
                            = (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1 
                               + vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoded_imm);
                        tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__set_mem_do_wdata = 1U;
                        if (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_sb) {
                            __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_wordsize = 2U;
                        } else if (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_sh) {
                            __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_wordsize = 1U;
                        } else if (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_sw) {
                            __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_wordsize = 0U;
                        }
                    }
                    if (((~ (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_prefetch)) 
                         & (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_done))) {
                        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoder_trigger = 1U;
                        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoder_pseudo_trigger = 1U;
                    }
                }
            } else {
                vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_store = 1U;
                if ((1U & ((~ (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_prefetch)) 
                           | (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_done)))) {
                    if (((~ (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_prefetch)) 
                         & (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_done))) {
                        if (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_is_lu) {
                            __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_out 
                                = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_word;
                        } else if (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_is_lh) {
                            __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_out 
                                = VL_EXTENDS_II(32,16, 
                                                (0xffffU 
                                                 & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_word));
                        } else if (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_is_lb) {
                            __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_out 
                                = VL_EXTENDS_II(32,8, 
                                                (0xffU 
                                                 & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_word));
                        }
                        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoder_trigger = 1U;
                        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoder_pseudo_trigger = 1U;
                        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpu_state = 0x40U;
                    }
                    if ((1U & (~ (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_rdata)))) {
                        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1 
                            = (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1 
                               + vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoded_imm);
                        tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__set_mem_do_rdata = 1U;
                        if (((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_lb) 
                             | (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_lbu))) {
                            __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_wordsize = 2U;
                        } else if (((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_lh) 
                                    | (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_lhu))) {
                            __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_wordsize = 1U;
                        } else if (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_lw) {
                            __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_wordsize = 0U;
                        }
                        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_is_lu 
                            = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_lbu_lhu_lw;
                        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_is_lh 
                            = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_lh;
                        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_is_lb 
                            = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_lb;
                    }
                }
            }
        }
    } else {
        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__count_cycle = 0ULL;
        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__count_instr = 0ULL;
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__timer = 0U;
        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_pc = 0U;
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_next_pc = 0U;
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_store = 0U;
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_stalu = 0U;
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_branch = 0U;
        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_is_lu = 0U;
        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_is_lh = 0U;
        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_is_lb = 0U;
        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__pcpi_valid = 0U;
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_rd = 2U;
        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_out = 0x40000U;
        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpu_state = 0x40U;
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_store = 1U;
    }
    if (((IData)(vlSelf->tb_soc__DOT__resetn) & ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_rdata) 
                                                 | (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_wdata)))) {
        if (((0U == (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_wordsize)) 
             & (0U != (3U & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1)))) {
            __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpu_state = 0x80U;
        }
        if (((1U == (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_wordsize)) 
             & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1)) {
            __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpu_state = 0x80U;
        }
    }
    if ((((IData)(vlSelf->tb_soc__DOT__resetn) & (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_rinst)) 
         & (0U != (3U & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_pc)))) {
        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpu_state = 0x80U;
    }
    if ((1U & ((~ (IData)(vlSelf->tb_soc__DOT__resetn)) 
               | (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_done)))) {
        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_prefetch = 0U;
        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_rinst = 0U;
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_rdata = 0U;
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_wdata = 0U;
    }
    if (tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__set_mem_do_rinst) {
        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_rinst = 1U;
    }
    if (tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__set_mem_do_rdata) {
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_rdata = 1U;
    }
    if (tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__set_mem_do_wdata) {
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_wdata = 1U;
    }
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__current_pc = 0U;
    vlSelf->tb_soc__DOT__b_aw_fire = ((IData)(vlSelf->tb_soc__DOT__awvalid) 
                                      & ((0x44U != 
                                          (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_addr 
                                           >> 0x18U)) 
                                         & (IData)(vlSelf->tb_soc__DOT__b_wready)));
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_sh 
        = __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_sh;
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__count_cycle 
        = __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__count_cycle;
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_is_lu 
        = __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_is_lu;
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_is_lh 
        = __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_is_lh;
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_is_lb 
        = __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_is_lb;
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__count_instr 
        = __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__count_instr;
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpuregs_rs1 
        = ((0U != (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoded_rs1))
            ? vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpuregs
           [vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoded_rs1]
            : 0U);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__pcpi_int_ready 
        = (1U & (((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__active) 
                  >> 1U) | (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__pcpi_div_ready)));
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__pcpi_int_wr = 0U;
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
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_prefetch 
        = __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_prefetch;
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_pc 
        = __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_pc;
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_wordsize 
        = __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_wordsize;
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_out 
        = __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_out;
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpu_state 
        = __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpu_state;
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1 
        = __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1;
    vlSelf->tb_soc__DOT__b_arready = ((~ (IData)(vlSelf->tb_soc__DOT__b_aw_fire)) 
                                      & (0U == (IData)(vlSelf->tb_soc__DOT__rd_st)));
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__do_waitirq = 0U;
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_la_write 
        = ((IData)(vlSelf->tb_soc__DOT__resetn) & (
                                                   (~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_state)))) 
                                                   & (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_wdata)));
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpuregs_write = 0U;
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__next_pc 
        = (((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_branch) 
            & (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__latched_store))
            ? (0xfffffffeU & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_out)
            : vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_next_pc);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__alu_out_q 
        = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__alu_out;
    tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__alu_eq 
        = (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1 
           == vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op2);
    tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__alu_lts 
        = VL_LTS_III(32, vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1, vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op2);
    tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__alu_ltu 
        = (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op1 
           < vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__reg_op2);
    if ((((IData)(vlSelf->tb_soc__DOT__resetn) & (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__pcpi_valid)) 
         & (~ (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__pcpi_div_wait)))) {
        if ((0U != (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__pcpi_timeout_counter))) {
            __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__pcpi_timeout_counter 
                = (0xfU & ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__pcpi_timeout_counter) 
                           - (IData)(1U)));
        }
    } else {
        __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__pcpi_timeout_counter = 0xfU;
    }
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__pcpi_timeout 
        = (1U & (~ (IData)((0U != (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__pcpi_timeout_counter)))));
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_lbu_lhu_lw 
        = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_lbu) 
           | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_lhu) 
              | (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_lw)));
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__pcpi_timeout_counter 
        = __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__pcpi_timeout_counter;
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__pcpi_valid 
        = __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__pcpi_valid;
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
    if (((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_done))) {
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__compressed_instr = 0U;
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoded_rd 
            = (0x1fU & (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_latched 
                        >> 7U));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoded_rs2 
            = (0x1fU & (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_latched 
                        >> 0x14U));
    }
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpuregs_rs2 
        = ((0U != (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoded_rs2))
            ? vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__cpuregs
           [vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoded_rs2]
            : 0U);
    if (((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoder_trigger) 
         & (~ (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoder_pseudo_trigger)))) {
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__pcpi_insn 
            = vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q;
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_ecall_ebreak 
            = (((0x73U == (0x7fU & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q)) 
                & (~ (IData)((0U != (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q 
                                     >> 0x15U))))) 
               & (~ (IData)((0U != (0x1fffU & (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q 
                                               >> 7U))))));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_rdcycle 
            = ((IData)((0xc0002073U == (0xfffff07fU 
                                        & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q))) 
               | (IData)((0xc0102073U == (0xfffff07fU 
                                          & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q))));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_rdcycleh 
            = ((IData)((0xc8002073U == (0xfffff07fU 
                                        & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q))) 
               | (IData)((0xc8102073U == (0xfffff07fU 
                                          & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q))));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_rdinstr 
            = (IData)((0xc0202073U == (0xfffff07fU 
                                       & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_rdinstrh 
            = (IData)((0xc8202073U == (0xfffff07fU 
                                       & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
    }
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_rdcycle_rdcycleh_rdinstr_rdinstrh 
        = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_rdcycle) 
           | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_rdcycleh) 
              | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_rdinstr) 
                 | (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_rdinstrh))));
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__pcpi_insn_valid 
        = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__pcpi_valid) 
           & (IData)((0x2000033U == (0xfe00007fU & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__pcpi_insn))));
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__pcpi_div_wait 
        = (((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_div) 
            | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu) 
               | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem) 
                  | (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_remu)))) 
           & (IData)(vlSelf->tb_soc__DOT__resetn));
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_lui_auipc_jal 
        = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_lui) 
           | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_auipc) 
              | (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_jal)));
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_lui_auipc_jal_jalr_addi_add_sub 
        = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_lui) 
           | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_auipc) 
              | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_jal) 
                 | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_jalr) 
                    | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_addi) 
                       | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_add) 
                          | (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_sub)))))));
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_slti_blt_slt 
        = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_slti) 
           | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_blt) 
              | (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_slt)));
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_sltiu_bltu_sltu 
        = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_sltiu) 
           | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_bltu) 
              | (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_sltu)));
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_compare 
        = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
           | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_slti) 
              | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_slt) 
                 | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_sltiu) 
                    | (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_sltu)))));
    if (((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoder_trigger) 
         & (~ (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoder_pseudo_trigger)))) {
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_beq 
            = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0U == (0x7000U & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_bne 
            = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x1000U == (0x7000U & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_blt 
            = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x4000U == (0x7000U & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_bge 
            = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x5000U == (0x7000U & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_bltu 
            = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x6000U == (0x7000U & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_bgeu 
            = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu) 
               & (0x7000U == (0x7000U & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_lb 
            = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0U == (0x7000U & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_lh 
            = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x1000U == (0x7000U & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_lw 
            = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x2000U == (0x7000U & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_lbu 
            = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x4000U == (0x7000U & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_lhu 
            = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu) 
               & (0x5000U == (0x7000U & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_sb 
            = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_sb_sh_sw) 
               & (0U == (0x7000U & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_sh 
            = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_sb_sh_sw) 
               & (0x1000U == (0x7000U & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_sw 
            = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_sb_sh_sw) 
               & (0x2000U == (0x7000U & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_addi 
            = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & (0U == (0x7000U & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_slti 
            = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & (0x2000U == (0x7000U & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_sltiu 
            = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & (0x3000U == (0x7000U & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_xori 
            = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & (0x4000U == (0x7000U & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_ori 
            = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & (0x6000U == (0x7000U & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_andi 
            = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & (0x7000U == (0x7000U & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_slli 
            = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & (0x1000U == (0xfe007000U & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_srli 
            = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & (0x5000U == (0xfe007000U & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_srai 
            = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & (0x40005000U == (0xfe007000U & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_slli_srli_srai 
            = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_alu_reg_imm) 
               & ((IData)((0x1000U == (0xfe007000U 
                                       & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q))) 
                  | ((IData)((0x5000U == (0xfe007000U 
                                          & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q))) 
                     | (IData)((0x40005000U == (0xfe007000U 
                                                & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q))))));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_jalr_addi_slti_sltiu_xori_ori_andi 
            = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_jalr) 
               | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_alu_reg_imm) 
                  & ((0U == (7U & (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q 
                                   >> 0xcU))) | ((2U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q 
                                                      >> 0xcU))) 
                                                 | ((3U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q 
                                                         >> 0xcU))) 
                                                    | ((4U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q 
                                                            >> 0xcU))) 
                                                       | ((6U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q 
                                                               >> 0xcU))) 
                                                          | (7U 
                                                             == 
                                                             (7U 
                                                              & (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q 
                                                                 >> 0xcU))))))))));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_lui_auipc_jal_jalr_addi_add_sub = 0U;
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_compare = 0U;
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoded_imm 
            = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_jal)
                ? vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoded_imm_j
                : (((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_lui) 
                    | (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_auipc))
                    ? VL_SHIFTL_III(32,32,32, (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q 
                                               >> 0xcU), 0xcU)
                    : (((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_jalr) 
                        | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu) 
                           | (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_alu_reg_imm)))
                        ? VL_EXTENDS_II(32,12, (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q 
                                                >> 0x14U))
                        : ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu)
                            ? VL_EXTENDS_II(32,13, 
                                            ((0x1000U 
                                              & (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q 
                                                 >> 0x13U)) 
                                             | ((0x800U 
                                                 & (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q 
                                                         >> 7U))))))
                            : ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_sb_sh_sw)
                                ? VL_EXTENDS_II(32,12, 
                                                ((0xfe0U 
                                                  & (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q 
                                                       >> 7U))))
                                : 0U)))));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_add 
            = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_alu_reg_reg) 
               & (0U == (0xfe007000U & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_sub 
            = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_alu_reg_reg) 
               & (0x40000000U == (0xfe007000U & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_sll 
            = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_alu_reg_reg) 
               & (0x1000U == (0xfe007000U & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_slt 
            = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_alu_reg_reg) 
               & (0x2000U == (0xfe007000U & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_sltu 
            = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_alu_reg_reg) 
               & (0x3000U == (0xfe007000U & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_xor 
            = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_alu_reg_reg) 
               & (0x4000U == (0xfe007000U & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_srl 
            = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_alu_reg_reg) 
               & (0x5000U == (0xfe007000U & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_sra 
            = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_alu_reg_reg) 
               & (0x40005000U == (0xfe007000U & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_or 
            = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_alu_reg_reg) 
               & (0x6000U == (0xfe007000U & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_and 
            = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_alu_reg_reg) 
               & (0x7000U == (0xfe007000U & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q)));
    }
    if (((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_rinst) 
         & (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_done))) {
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_retirq = 0U;
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_alu_reg_imm 
            = (0x13U == (0x7fU & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_latched));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_lb_lh_lw_lbu_lhu 
            = (3U == (0x7fU & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_latched));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_sb_sh_sw 
            = (0x23U == (0x7fU & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_latched));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoded_imm_j 
            = ((0xfffffU & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoded_imm_j) 
               | (0xfff00000U & VL_EXTENDS_II(32,21, 
                                              (0x1ffffeU 
                                               & (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                  >> 0xbU)))));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoded_imm_j 
            = ((0xfffff801U & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoded_imm_j) 
               | (0x7feU & (VL_EXTENDS_II(32,21, (0x1ffffeU 
                                                  & (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                     >> 0xbU))) 
                            >> 9U)));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoded_imm_j 
            = ((0xfffff7ffU & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoded_imm_j) 
               | (0x800U & (VL_EXTENDS_II(32,21, (0x1ffffeU 
                                                  & (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                     >> 0xbU))) 
                            << 2U)));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoded_imm_j 
            = ((0xfff00fffU & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoded_imm_j) 
               | (0xff000U & (VL_EXTENDS_II(32,21, 
                                            (0x1ffffeU 
                                             & (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_latched 
                                                >> 0xbU))) 
                              << 0xbU)));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoded_imm_j 
            = ((0xfffffffeU & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoded_imm_j) 
               | (1U & VL_EXTENDS_II(1,21, (0x1ffffeU 
                                            & (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_latched 
                                               >> 0xbU)))));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu 
            = (0x63U == (0x7fU & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_latched));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_auipc 
            = (0x17U == (0x7fU & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_latched));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_lui 
            = (0x37U == (0x7fU & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_latched));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_jal 
            = (0x6fU == (0x7fU & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_latched));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_jalr 
            = (IData)((0x67U == (0x707fU & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_latched)));
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_alu_reg_reg 
            = (0x33U == (0x7fU & vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_latched));
    }
    if ((1U & (~ (IData)(vlSelf->tb_soc__DOT__resetn)))) {
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__pcpi_timeout = 0U;
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_compare = 0U;
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_beq = 0U;
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_bne = 0U;
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_blt = 0U;
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_bge = 0U;
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_bltu = 0U;
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_bgeu = 0U;
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_addi = 0U;
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_slti = 0U;
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_sltiu = 0U;
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_xori = 0U;
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_ori = 0U;
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_andi = 0U;
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__is_beq_bne_blt_bge_bltu_bgeu = 0U;
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_add = 0U;
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_sub = 0U;
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_sll = 0U;
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_slt = 0U;
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_sltu = 0U;
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_xor = 0U;
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_srl = 0U;
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_sra = 0U;
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_or = 0U;
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__instr_and = 0U;
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
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_remu 
        = __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_remu;
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu 
        = __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_divu;
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_div 
        = __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_div;
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem 
        = __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__instr_rem;
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_any_mulh 
        = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulh) 
           | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhsu) 
              | (IData)(tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk1__DOT__pcpi_mul__DOT__instr_mulhu)));
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__start 
        = ((~ (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__genblk2__DOT__pcpi_div__DOT__pcpi_wait_q)) 
           & (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__pcpi_div_wait));
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoder_pseudo_trigger 
        = __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoder_pseudo_trigger;
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoder_trigger 
        = __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__decoder_trigger;
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
    if (vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_xfer) {
        vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q 
            = vlSelf->tb_soc__DOT__rdata;
    }
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
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_xfer 
        = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_ready) 
           & (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__mem_valid));
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_latched 
        = ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_xfer)
            ? vlSelf->tb_soc__DOT__rdata : vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_rdata_q);
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_rinst 
        = __Vdly__tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_rinst;
    vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_la_read 
        = ((IData)(vlSelf->tb_soc__DOT__resetn) & (
                                                   (~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_state)))) 
                                                   & ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_rinst) 
                                                      | ((IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_prefetch) 
                                                         | (IData)(vlSelf->tb_soc__DOT__u_cpu__DOT__u_cpu__DOT__picorv32_core__DOT__mem_do_rdata)))));
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
}

void Vtb_soc___024root___eval_nba(Vtb_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_soc___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtb_soc___024root___timing_resume(Vtb_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h46ccec15__0.resume("@(posedge tb_soc.clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_soc___024root___timing_commit(Vtb_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root___timing_commit\n"); );
    // Body
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h46ccec15__0.commit("@(posedge tb_soc.clk)");
    }
}

void Vtb_soc___024root___eval_triggers__act(Vtb_soc___024root* vlSelf);

bool Vtb_soc___024root___eval_phase__act(Vtb_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_soc___024root___eval_triggers__act(vlSelf);
    Vtb_soc___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_soc___024root___timing_resume(vlSelf);
        Vtb_soc___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_soc___024root___eval_phase__nba(Vtb_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_soc___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_soc___024root___dump_triggers__nba(Vtb_soc___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_soc___024root___dump_triggers__act(Vtb_soc___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_soc___024root___eval(Vtb_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_soc___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_soc.v", 16, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_soc___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_soc.v", 16, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_soc___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_soc___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_soc___024root___eval_debug_assertions(Vtb_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_soc___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
