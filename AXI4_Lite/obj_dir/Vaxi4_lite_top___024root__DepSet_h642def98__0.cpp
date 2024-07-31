// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaxi4_lite_top.h for the primary calling header

#include "Vaxi4_lite_top__pch.h"
#include "Vaxi4_lite_top__Syms.h"
#include "Vaxi4_lite_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaxi4_lite_top___024root___dump_triggers__act(Vaxi4_lite_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vaxi4_lite_top___024root___eval_triggers__act(Vaxi4_lite_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaxi4_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi4_lite_top___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, (((IData)(vlSelfRef.ACLK) 
                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ACLK__0))) 
                                       | ((~ (IData)(vlSelfRef.ARESETN)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ARESETN__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__ACLK__0 = vlSelfRef.ACLK;
    vlSelfRef.__Vtrigprevexpr___TOP__ARESETN__0 = vlSelfRef.ARESETN;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vaxi4_lite_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}
