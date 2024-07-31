// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaxi4_lite_top.h for the primary calling header

#include "Vaxi4_lite_top__pch.h"
#include "Vaxi4_lite_top___024root.h"

VL_ATTR_COLD void Vaxi4_lite_top___024root___eval_static(Vaxi4_lite_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaxi4_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi4_lite_top___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vaxi4_lite_top___024root___eval_initial(Vaxi4_lite_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaxi4_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi4_lite_top___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__ACLK__0 = vlSelfRef.ACLK;
    vlSelfRef.__Vtrigprevexpr___TOP__ARESETN__0 = vlSelfRef.ARESETN;
}

VL_ATTR_COLD void Vaxi4_lite_top___024root___eval_final(Vaxi4_lite_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaxi4_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi4_lite_top___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaxi4_lite_top___024root___dump_triggers__stl(Vaxi4_lite_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vaxi4_lite_top___024root___eval_phase__stl(Vaxi4_lite_top___024root* vlSelf);

VL_ATTR_COLD void Vaxi4_lite_top___024root___eval_settle(Vaxi4_lite_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaxi4_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi4_lite_top___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vaxi4_lite_top___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("axi4_lite_top.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vaxi4_lite_top___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaxi4_lite_top___024root___dump_triggers__stl(Vaxi4_lite_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaxi4_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi4_lite_top___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vaxi4_lite_top___024root___stl_sequent__TOP__0(Vaxi4_lite_top___024root* vlSelf);

VL_ATTR_COLD void Vaxi4_lite_top___024root___eval_stl(Vaxi4_lite_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaxi4_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi4_lite_top___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vaxi4_lite_top___024root___stl_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        vlSelfRef.__Vm_traceActivity[0U] = 1U;
    }
}

extern const VlUnpacked<CData/*2:0*/, 2048> Vaxi4_lite_top__ConstPool__TABLE_h7b2f0d1c_0;

VL_ATTR_COLD void Vaxi4_lite_top___024root___stl_sequent__TOP__0(Vaxi4_lite_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaxi4_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi4_lite_top___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*10:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
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

VL_ATTR_COLD void Vaxi4_lite_top___024root___eval_triggers__stl(Vaxi4_lite_top___024root* vlSelf);

VL_ATTR_COLD bool Vaxi4_lite_top___024root___eval_phase__stl(Vaxi4_lite_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaxi4_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi4_lite_top___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vaxi4_lite_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vaxi4_lite_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaxi4_lite_top___024root___dump_triggers__act(Vaxi4_lite_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaxi4_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi4_lite_top___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge ACLK or negedge ARESETN)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaxi4_lite_top___024root___dump_triggers__nba(Vaxi4_lite_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaxi4_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi4_lite_top___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge ACLK or negedge ARESETN)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vaxi4_lite_top___024root___ctor_var_reset(Vaxi4_lite_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaxi4_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi4_lite_top___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->ACLK = VL_RAND_RESET_I(1);
    vlSelf->ARESETN = VL_RAND_RESET_I(1);
    vlSelf->read_s = VL_RAND_RESET_I(1);
    vlSelf->write_s = VL_RAND_RESET_I(1);
    vlSelf->address = VL_RAND_RESET_I(32);
    vlSelf->W_data = VL_RAND_RESET_I(32);
    vlSelf->axi4_lite_top__DOT__M_RREADY = VL_RAND_RESET_I(1);
    vlSelf->axi4_lite_top__DOT__M_BREADY = VL_RAND_RESET_I(1);
    vlSelf->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__read_start = VL_RAND_RESET_I(1);
    vlSelf->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__write_start = VL_RAND_RESET_I(1);
    vlSelf->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->axi4_lite_top__DOT__u_axi4_lite_master0__DOT__next_state = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__ACLK__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__ARESETN__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
