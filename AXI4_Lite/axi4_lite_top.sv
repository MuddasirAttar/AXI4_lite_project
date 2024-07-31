module axi4_lite_top#(
    parameter DATA_WIDTH = 32,
    parameter ADDRESS = 32
    )(
        input  wire                     ACLK,
        input  wire                     ARESETN,
        input  wire                     read_s,
        input  wire                     write_s,
        input  wire [ADDRESS-1:0]       address,
        input  wire [DATA_WIDTH-1:0]    W_data
    );

    wire  M_ARREADY, S_RVALID, M_ARVALID, M_RREADY, S_AWREADY, S_BVALID, M_AWVALID, M_BREADY, M_WVALID, S_WREADY;
    wire [ADDRESS-1 : 0] M_ARADDR;
    wire [ADDRESS-1 : 0] M_AWADDR;
    wire [DATA_WIDTH-1:0] M_WDATA;
    wire [DATA_WIDTH-1:0] S_RDATA;
    wire [3:0] M_WSTRB;
    wire [1:0] S_RRESP, S_BRESP;

    axi4_lite_master u_axi4_lite_master0
    (
        .ACLK(ACLK),
        .ARESETN(ARESETN),
        .START_READ(read_s),
        .address(address),
        .W_data(W_data),
        .M_ARREADY(M_ARREADY),
        .M_RDATA(S_RDATA),
        .M_RRESP(S_RRESP),
        .M_RVALID(S_RVALID),
        .M_ARADDR(M_ARADDR),
        .M_ARVALID(M_ARVALID),
        .M_RREADY(M_RREADY),
        .START_WRITE(write_s),
        .M_AWREADY(S_AWREADY),
        .M_WVALID(M_WVALID),
        .M_WREADY(S_WREADY),
        .M_BRESP(S_BRESP),
        .M_BVALID(S_BVALID),
        .M_AWADDR(M_AWADDR),
        .M_AWVALID(M_AWVALID),
        .M_WDATA(M_WDATA),
        .M_WSTRB(M_WSTRB),
        .M_BREADY(M_BREADY)
    );

    axi4_lite_slave u_axi4_lite_slave0
    (
        .ACLK(ACLK),
        .ARESETN(ARESETN),
        .S_ARREADY(M_ARREADY),
        .S_RDATA(S_RDATA),
        .S_RRESP(S_RRESP),
        .S_RVALID(S_RVALID),
        .S_ARADDR(M_ARADDR),
        .S_ARVALID(M_ARVALID),
        .S_RREADY(M_RREADY),
        .S_AWREADY(S_AWREADY),
        .S_WVALID(M_WVALID),
        .S_WREADY(S_WREADY),
        .S_BRESP(S_BRESP),
        .S_BVALID(S_BVALID),
        .S_AWADDR(M_AWADDR),
        .S_AWVALID(M_AWVALID),
        .S_WDATA(M_WDATA),
        .S_WSTRB(M_WSTRB),
        .S_BREADY(M_BREADY)
    );
endmodule
