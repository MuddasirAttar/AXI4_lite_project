// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vaxi4_lite_top__Syms.h"


void Vaxi4_lite_top___024root__trace_chg_0_sub_0(Vaxi4_lite_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vaxi4_lite_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi4_lite_top___024root__trace_chg_0\n"); );
    // Init
    Vaxi4_lite_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaxi4_lite_top___024root*>(voidSelf);
    Vaxi4_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vaxi4_lite_top___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vaxi4_lite_top___024root__trace_chg_0_sub_0(Vaxi4_lite_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaxi4_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi4_lite_top___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,((3U == (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state))));
        bufp->chgBit(oldp+1,((4U == (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state))));
        bufp->chgBit(oldp+2,((3U == (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state))));
        bufp->chgBit(oldp+3,(vlSelfRef.axi4_lite_top__DOT__M_RREADY));
        bufp->chgBit(oldp+4,((1U == (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state))));
        bufp->chgBit(oldp+5,((2U == (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state))));
        bufp->chgBit(oldp+6,((1U == (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state))));
        bufp->chgBit(oldp+7,(vlSelfRef.axi4_lite_top__DOT__M_BREADY));
        bufp->chgIData(oldp+8,(((4U == (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state))
                                 ? vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register
                                [(0x1fU & vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__addr)]
                                 : 0U)),32);
        bufp->chgCData(oldp+9,(((1U == (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state))
                                 ? 0xfU : 0U)),4);
        bufp->chgBit(oldp+10,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__read_start));
        bufp->chgBit(oldp+11,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__write_start));
        bufp->chgCData(oldp+12,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state),3);
        bufp->chgCData(oldp+13,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__next_state),3);
        bufp->chgIData(oldp+14,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[0]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[1]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[2]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[3]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[4]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[5]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[6]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[7]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[8]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[9]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[10]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[11]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[12]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[13]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[14]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[15]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[16]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[17]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[18]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[19]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[20]),32);
        bufp->chgIData(oldp+35,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[21]),32);
        bufp->chgIData(oldp+36,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[22]),32);
        bufp->chgIData(oldp+37,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[23]),32);
        bufp->chgIData(oldp+38,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[24]),32);
        bufp->chgIData(oldp+39,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[25]),32);
        bufp->chgIData(oldp+40,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[26]),32);
        bufp->chgIData(oldp+41,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[27]),32);
        bufp->chgIData(oldp+42,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[28]),32);
        bufp->chgIData(oldp+43,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[29]),32);
        bufp->chgIData(oldp+44,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[30]),32);
        bufp->chgIData(oldp+45,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[31]),32);
        bufp->chgIData(oldp+46,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__addr),32);
        bufp->chgBit(oldp+47,(((1U == (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state)) 
                               & (1U == (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state)))));
        bufp->chgBit(oldp+48,(((1U == (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state)) 
                               & (1U == (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state)))));
        bufp->chgCData(oldp+49,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state),3);
        bufp->chgCData(oldp+50,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__next_state),3);
        bufp->chgIData(oldp+51,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__i),32);
    }
    bufp->chgBit(oldp+52,(vlSelfRef.ACLK));
    bufp->chgBit(oldp+53,(vlSelfRef.ARESETN));
    bufp->chgBit(oldp+54,(vlSelfRef.read_s));
    bufp->chgBit(oldp+55,(vlSelfRef.write_s));
    bufp->chgIData(oldp+56,(vlSelfRef.address),32);
    bufp->chgIData(oldp+57,(vlSelfRef.W_data),32);
    bufp->chgIData(oldp+58,(((3U == (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state))
                              ? vlSelfRef.address : 0U)),32);
    bufp->chgIData(oldp+59,(((1U == (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state))
                              ? vlSelfRef.address : 0U)),32);
    bufp->chgIData(oldp+60,(((1U == (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state))
                              ? vlSelfRef.W_data : 0U)),32);
}

void Vaxi4_lite_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi4_lite_top___024root__trace_cleanup\n"); );
    // Init
    Vaxi4_lite_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaxi4_lite_top___024root*>(voidSelf);
    Vaxi4_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
