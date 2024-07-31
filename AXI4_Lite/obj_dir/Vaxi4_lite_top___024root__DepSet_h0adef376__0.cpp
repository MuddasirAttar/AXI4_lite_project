// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaxi4_lite_top.h for the primary calling header

#include "Vaxi4_lite_top__pch.h"
#include "Vaxi4_lite_top___024root.h"

void Vaxi4_lite_top___024root___eval_act(Vaxi4_lite_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaxi4_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi4_lite_top___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vaxi4_lite_top___024root___nba_sequent__TOP__0(Vaxi4_lite_top___024root* vlSelf);

void Vaxi4_lite_top___024root___eval_nba(Vaxi4_lite_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaxi4_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi4_lite_top___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vaxi4_lite_top___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

extern const VlUnpacked<CData/*2:0*/, 2048> Vaxi4_lite_top__ConstPool__TABLE_h7b2f0d1c_0;

VL_INLINE_OPT void Vaxi4_lite_top___024root___nba_sequent__TOP__0(Vaxi4_lite_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaxi4_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi4_lite_top___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*10:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    IData/*31:0*/ __VdlyVal__axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register__v0;
    __VdlyVal__axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register__v0 = 0;
    CData/*4:0*/ __VdlyDim0__axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register__v0;
    __VdlyDim0__axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register__v0 = 0;
    CData/*0:0*/ __VdlySet__axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register__v0;
    __VdlySet__axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register__v0 = 0;
    CData/*0:0*/ __VdlySet__axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register__v1;
    __VdlySet__axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register__v1 = 0;
    // Body
    __VdlySet__axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register__v0 = 0U;
    __VdlySet__axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register__v1 = 0U;
    if ((1U & (~ (IData)(vlSelfRef.ARESETN)))) {
        vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__i = 0x20U;
    }
    if (vlSelfRef.ARESETN) {
        if ((1U == (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state))) {
            if ((1U == (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state))) {
                __VdlyVal__axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register__v0 
                    = vlSelfRef.W_data;
                __VdlyDim0__axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register__v0 
                    = (0x1fU & vlSelfRef.address);
            } else {
                __VdlyVal__axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register__v0 = 0U;
                __VdlyDim0__axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register__v0 = 0U;
            }
            __VdlySet__axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register__v0 = 1U;
        }
        if ((1U != (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state))) {
            if ((3U == (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state))) {
                vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__addr 
                    = ((3U == (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state))
                        ? vlSelfRef.address : 0U);
            }
        }
        vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state 
            = vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__next_state;
        vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state 
            = vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__next_state;
    } else {
        __VdlySet__axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register__v1 = 1U;
        vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state = 0U;
        vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state = 0U;
    }
    vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__write_start 
        = ((IData)(vlSelfRef.ARESETN) && (IData)(vlSelfRef.write_s));
    vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__read_start 
        = ((IData)(vlSelfRef.ARESETN) && (IData)(vlSelfRef.read_s));
    if (__VdlySet__axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register__v0) {
        vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[__VdlyDim0__axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register__v0] 
            = __VdlyVal__axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register__v0;
    }
    if (__VdlySet__axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register__v1) {
        vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[0U] = 0U;
        vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[1U] = 0U;
        vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[2U] = 0U;
        vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[3U] = 0U;
        vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[4U] = 0U;
        vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[5U] = 0U;
        vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[6U] = 0U;
        vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[7U] = 0U;
        vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[8U] = 0U;
        vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[9U] = 0U;
        vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[0xaU] = 0U;
        vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[0xbU] = 0U;
        vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[0xcU] = 0U;
        vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[0xdU] = 0U;
        vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[0xeU] = 0U;
        vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[0xfU] = 0U;
        vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[0x10U] = 0U;
        vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[0x11U] = 0U;
        vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[0x12U] = 0U;
        vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[0x13U] = 0U;
        vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[0x14U] = 0U;
        vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[0x15U] = 0U;
        vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[0x16U] = 0U;
        vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[0x17U] = 0U;
        vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[0x18U] = 0U;
        vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[0x19U] = 0U;
        vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[0x1aU] = 0U;
        vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[0x1bU] = 0U;
        vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[0x1cU] = 0U;
        vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[0x1dU] = 0U;
        vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[0x1eU] = 0U;
        vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[0x1fU] = 0U;
    }
    vlSelfRef.axi4_lite_top__DOT__M_RREADY = ((4U == (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state)) 
                                              | (3U 
                                                 == (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state)));
    vlSelfRef.axi4_lite_top__DOT__M_BREADY = ((1U == (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state)) 
                                              | (2U 
                                                 == (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state)));
    vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__next_state 
        = vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state;
    if ((4U & (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state))) {
        if ((2U & (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state))) {
            vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__next_state = 0U;
        } else if ((1U & (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state))) {
            vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__next_state = 0U;
        } else if (((4U == (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state)) 
                    & (IData)(vlSelfRef.axi4_lite_top__DOT__M_RREADY))) {
            vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__next_state = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state))) {
            if (((3U == (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state)) 
                 & (3U == (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state)))) {
                vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__next_state = 4U;
            }
        } else if (((2U == (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state)) 
                    & (IData)(vlSelfRef.axi4_lite_top__DOT__M_BREADY))) {
            vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__next_state = 0U;
        }
    } else if ((1U & (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state))) {
        if ((IData)(((1U == (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state)) 
                     & (1U == (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state))))) {
            vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__next_state = 2U;
        }
    } else if (vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__write_start) {
        vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__next_state = 1U;
    } else if (vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__read_start) {
        vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__next_state = 3U;
    }
    __Vtableidx1 = (((1U == (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state)) 
                     << 0xaU) | (((IData)(((1U == (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state)) 
                                           & (1U == (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state)))) 
                                  << 9U) | (((IData)(vlSelfRef.axi4_lite_top__DOT__M_BREADY) 
                                             << 8U) 
                                            | (((2U 
                                                 == (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state)) 
                                                << 7U) 
                                               | (((3U 
                                                    == (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state)) 
                                                   << 6U) 
                                                  | (((3U 
                                                       == (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state)) 
                                                      << 5U) 
                                                     | (((IData)(vlSelfRef.axi4_lite_top__DOT__M_RREADY) 
                                                         << 4U) 
                                                        | (((4U 
                                                             == (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state)) 
                                                            << 3U) 
                                                           | (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state)))))))));
    vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__next_state 
        = Vaxi4_lite_top__ConstPool__TABLE_h7b2f0d1c_0
        [__Vtableidx1];
}

void Vaxi4_lite_top___024root___eval_triggers__act(Vaxi4_lite_top___024root* vlSelf);

bool Vaxi4_lite_top___024root___eval_phase__act(Vaxi4_lite_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaxi4_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi4_lite_top___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vaxi4_lite_top___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vaxi4_lite_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vaxi4_lite_top___024root___eval_phase__nba(Vaxi4_lite_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaxi4_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi4_lite_top___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vaxi4_lite_top___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaxi4_lite_top___024root___dump_triggers__nba(Vaxi4_lite_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vaxi4_lite_top___024root___dump_triggers__act(Vaxi4_lite_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vaxi4_lite_top___024root___eval(Vaxi4_lite_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaxi4_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi4_lite_top___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vaxi4_lite_top___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("axi4_lite_top.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vaxi4_lite_top___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("axi4_lite_top.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vaxi4_lite_top___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vaxi4_lite_top___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vaxi4_lite_top___024root___eval_debug_assertions(Vaxi4_lite_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaxi4_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi4_lite_top___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.ACLK & 0xfeU))) {
        Verilated::overWidthError("ACLK");}
    if (VL_UNLIKELY((vlSelfRef.ARESETN & 0xfeU))) {
        Verilated::overWidthError("ARESETN");}
    if (VL_UNLIKELY((vlSelfRef.read_s & 0xfeU))) {
        Verilated::overWidthError("read_s");}
    if (VL_UNLIKELY((vlSelfRef.write_s & 0xfeU))) {
        Verilated::overWidthError("write_s");}
}
#endif  // VL_DEBUG
