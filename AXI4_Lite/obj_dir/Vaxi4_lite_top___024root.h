// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaxi4_lite_top.h for the primary calling header

#ifndef VERILATED_VAXI4_LITE_TOP___024ROOT_H_
#define VERILATED_VAXI4_LITE_TOP___024ROOT_H_  // guard

#include "verilated.h"


class Vaxi4_lite_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vaxi4_lite_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(ACLK,0,0);
    VL_IN8(ARESETN,0,0);
    VL_IN8(read_s,0,0);
    VL_IN8(write_s,0,0);
    CData/*0:0*/ axi4_lite_top__DOT__M_RREADY;
    CData/*0:0*/ axi4_lite_top__DOT__M_BREADY;
    CData/*0:0*/ axi4_lite_top__DOT__u_axi4_lite_master0__DOT__read_start;
    CData/*0:0*/ axi4_lite_top__DOT__u_axi4_lite_master0__DOT__write_start;
    CData/*2:0*/ axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state;
    CData/*2:0*/ axi4_lite_top__DOT__u_axi4_lite_master0__DOT__next_state;
    CData/*2:0*/ axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state;
    CData/*2:0*/ axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__next_state;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ACLK__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ARESETN__0;
    CData/*0:0*/ __VactContinue;
    VL_IN(address,31,0);
    VL_IN(W_data,31,0);
    IData/*31:0*/ axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__addr;
    IData/*31:0*/ axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vaxi4_lite_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vaxi4_lite_top___024root(Vaxi4_lite_top__Syms* symsp, const char* v__name);
    ~Vaxi4_lite_top___024root();
    VL_UNCOPYABLE(Vaxi4_lite_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
