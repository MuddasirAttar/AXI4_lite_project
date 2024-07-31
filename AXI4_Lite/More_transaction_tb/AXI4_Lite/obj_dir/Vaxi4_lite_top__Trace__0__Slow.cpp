// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vaxi4_lite_top__Syms.h"


VL_ATTR_COLD void Vaxi4_lite_top___024root__trace_init_sub__TOP__0(Vaxi4_lite_top___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaxi4_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi4_lite_top___024root__trace_init_sub__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+52,0,"ACLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"ARESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"read_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"write_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"W_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"R_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("axi4_lite_top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+62,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"ADDRESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+52,0,"ACLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"ARESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"read_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"write_s",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"W_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"R_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"M_ARREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"S_RVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"M_ARVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"M_RREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"S_AWREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"S_BVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"M_AWVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"M_BREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"M_WVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"S_WREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"M_ARADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,0,"M_AWADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"M_WDATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"S_RDATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"M_WSTRB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+63,0,"S_RRESP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+63,0,"S_BRESP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("u_axi4_lite_master0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+62,0,"ADDRESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+52,0,"ACLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"ARESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"START_READ",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"START_WRITE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"W_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1,0,"M_ARREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"M_RDATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"M_RRESP",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+2,0,"M_RVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"M_AWREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"M_WREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"M_BRESP",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+6,0,"M_BVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"M_ARADDR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+3,0,"M_ARVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"M_RREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"M_AWADDR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+7,0,"M_AWVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"M_WDATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"M_WSTRB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+7,0,"M_WVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"M_BREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"read_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"write_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+13,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_axi4_lite_slave0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+62,0,"ADDRESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+52,0,"ACLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"ARESETN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"S_ARADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+3,0,"S_ARVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"S_RREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"S_AWADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+7,0,"S_AWVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+9,0,"S_WSTRB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+61,0,"S_WDATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+7,0,"S_WVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"S_BREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"S_ARREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"S_RDATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"S_RRESP",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+2,0,"S_RVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"S_AWREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"S_WREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"S_BRESP",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+6,0,"S_BVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+62,0,"no_of_registers",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("register", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+14+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+46,0,"addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+47,0,"write_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"write_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+50,0,"next_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+51,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vaxi4_lite_top___024root__trace_init_top(Vaxi4_lite_top___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaxi4_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi4_lite_top___024root__trace_init_top\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vaxi4_lite_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vaxi4_lite_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vaxi4_lite_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vaxi4_lite_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vaxi4_lite_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vaxi4_lite_top___024root__trace_register(Vaxi4_lite_top___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaxi4_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi4_lite_top___024root__trace_register\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vaxi4_lite_top___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vaxi4_lite_top___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vaxi4_lite_top___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vaxi4_lite_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vaxi4_lite_top___024root__trace_const_0_sub_0(Vaxi4_lite_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vaxi4_lite_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi4_lite_top___024root__trace_const_0\n"); );
    // Init
    Vaxi4_lite_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaxi4_lite_top___024root*>(voidSelf);
    Vaxi4_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vaxi4_lite_top___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vaxi4_lite_top___024root__trace_const_0_sub_0(Vaxi4_lite_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaxi4_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi4_lite_top___024root__trace_const_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+62,(0x20U),32);
    bufp->fullCData(oldp+63,(0U),2);
}

VL_ATTR_COLD void Vaxi4_lite_top___024root__trace_full_0_sub_0(Vaxi4_lite_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vaxi4_lite_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi4_lite_top___024root__trace_full_0\n"); );
    // Init
    Vaxi4_lite_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaxi4_lite_top___024root*>(voidSelf);
    Vaxi4_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vaxi4_lite_top___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vaxi4_lite_top___024root__trace_full_0_sub_0(Vaxi4_lite_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vaxi4_lite_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaxi4_lite_top___024root__trace_full_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,((3U == (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state))));
    bufp->fullBit(oldp+2,((4U == (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state))));
    bufp->fullBit(oldp+3,((3U == (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state))));
    bufp->fullBit(oldp+4,(vlSelfRef.axi4_lite_top__DOT__M_RREADY));
    bufp->fullBit(oldp+5,((1U == (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state))));
    bufp->fullBit(oldp+6,((2U == (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state))));
    bufp->fullBit(oldp+7,((1U == (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state))));
    bufp->fullBit(oldp+8,(vlSelfRef.axi4_lite_top__DOT__M_BREADY));
    bufp->fullCData(oldp+9,(((1U == (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state))
                              ? 0xfU : 0U)),4);
    bufp->fullBit(oldp+10,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__read_start));
    bufp->fullBit(oldp+11,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__write_start));
    bufp->fullCData(oldp+12,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state),3);
    bufp->fullCData(oldp+13,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__next_state),3);
    bufp->fullIData(oldp+14,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[0]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[1]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[2]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[3]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[4]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[5]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[6]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[7]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[8]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[9]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[10]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[11]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[12]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[13]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[14]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[15]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[16]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[17]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[18]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[19]),32);
    bufp->fullIData(oldp+34,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[20]),32);
    bufp->fullIData(oldp+35,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[21]),32);
    bufp->fullIData(oldp+36,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[22]),32);
    bufp->fullIData(oldp+37,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[23]),32);
    bufp->fullIData(oldp+38,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[24]),32);
    bufp->fullIData(oldp+39,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[25]),32);
    bufp->fullIData(oldp+40,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[26]),32);
    bufp->fullIData(oldp+41,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[27]),32);
    bufp->fullIData(oldp+42,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[28]),32);
    bufp->fullIData(oldp+43,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[29]),32);
    bufp->fullIData(oldp+44,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[30]),32);
    bufp->fullIData(oldp+45,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__register[31]),32);
    bufp->fullIData(oldp+46,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__addr),32);
    bufp->fullBit(oldp+47,(((1U == (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state)) 
                            & (1U == (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state)))));
    bufp->fullBit(oldp+48,(((1U == (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state)) 
                            & (1U == (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state)))));
    bufp->fullCData(oldp+49,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__state),3);
    bufp->fullCData(oldp+50,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__next_state),3);
    bufp->fullIData(oldp+51,(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_slave0__DOT__i),32);
    bufp->fullBit(oldp+52,(vlSelfRef.ACLK));
    bufp->fullBit(oldp+53,(vlSelfRef.ARESETN));
    bufp->fullBit(oldp+54,(vlSelfRef.read_s));
    bufp->fullBit(oldp+55,(vlSelfRef.write_s));
    bufp->fullIData(oldp+56,(vlSelfRef.address),32);
    bufp->fullIData(oldp+57,(vlSelfRef.W_data),32);
    bufp->fullIData(oldp+58,(vlSelfRef.R_data),32);
    bufp->fullIData(oldp+59,(((3U == (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state))
                               ? vlSelfRef.address : 0U)),32);
    bufp->fullIData(oldp+60,(((1U == (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state))
                               ? vlSelfRef.address : 0U)),32);
    bufp->fullIData(oldp+61,(((1U == (IData)(vlSelfRef.axi4_lite_top__DOT__u_axi4_lite_master0__DOT__state))
                               ? vlSelfRef.W_data : 0U)),32);
}
