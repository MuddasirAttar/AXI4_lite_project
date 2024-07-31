`timescale 1ns / 1ps
`default_nettype none

module axi4_lite_slave #(
    parameter ADDRESS = 32,
    parameter DATA_WIDTH = 32
    )
    (
        // Global Signals
        input  wire                     ACLK,
        input  wire                     ARESETN,

        //// Read Address Channel INPUTS
        input  wire [ADDRESS-1:0]       S_ARADDR,
        input  wire                     S_ARVALID,
        // Read Data Channel INPUTS
        input  wire                     S_RREADY,
        // Write Address Channel INPUTS
        /* verilator lint_off UNUSEDSIGNAL */
        input  wire [ADDRESS-1:0]       S_AWADDR,
        input  wire                     S_AWVALID,
        input  wire [3:0]               S_WSTRB,
        /* verilator lint_on UNUSEDSIGNAL */
        input  wire [DATA_WIDTH-1:0]    S_WDATA,
        input  wire                     S_WVALID,
        // Write Response Channel INPUTS
        input  wire                     S_BREADY,    

        // Read Address Channel OUTPUTS
        output wire                     S_ARREADY,
        // Read Data Channel OUTPUTS
        output wire [DATA_WIDTH-1:0]    S_RDATA,
        output wire [1:0]               S_RRESP,
        output wire                     S_RVALID,
        // Write Address Channel OUTPUTS
        output wire                     S_AWREADY,
        output wire                     S_WREADY,
        // Write Response Channel OUTPUTS
        output wire [1:0]               S_BRESP,
        output wire                     S_BVALID
    );

    localparam no_of_registers = 32;

    logic [DATA_WIDTH-1 : 0] register [no_of_registers-1 : 0];
    /* verilator lint_off UNUSEDSIGNAL */
    logic [ADDRESS-1 : 0]    addr;
    /* verilator lint_on UNUSEDSIGNAL */
    logic  write_addr;
    logic  write_data;

    typedef enum logic [2 : 0] {IDLE, WRITE_CHANNEL, WRESP_CHANNEL, RADDR_CHANNEL, RDATA_CHANNEL} state_type;
    state_type state, next_state;

    // AR
    assign S_ARREADY = (state == RADDR_CHANNEL) ? 1'b1 : 1'b0;
    // 
    assign S_RVALID = (state == RDATA_CHANNEL) ? 1'b1 : 1'b0;
    assign S_RDATA  = (state == RDATA_CHANNEL) ? register[addr[4:0]] : 32'b0;
    assign S_RRESP  = (state == RDATA_CHANNEL) ? 2'b00 : 2'b0;
    // AW
    assign S_AWREADY = (state == WRITE_CHANNEL) ? 1'b1 : 1'b0;
    // W
    assign S_WREADY = (state == WRITE_CHANNEL) ? 1'b1 : 1'b0;
    assign write_addr = S_AWVALID && S_AWREADY;
    assign write_data = S_WREADY && S_WVALID;
    // B
    assign S_BVALID = (state == WRESP_CHANNEL) ? 1'b1 : 1'b0;
    assign S_BRESP  = (state == WRESP_CHANNEL) ? 2'b00 : 2'b0;

    integer i;

    always_ff @(posedge ACLK or negedge ARESETN) begin
        // Reset the register array
        if (~ARESETN) begin
            for (i = 0; i < no_of_registers; i++) begin
                register[i] <= 32'b0;
            end
        end else begin
            if (state == WRITE_CHANNEL) begin
                register[S_AWADDR[4:0]] <= S_WDATA;
            end else if (state == RADDR_CHANNEL) begin
                addr <= S_ARADDR;
            end
        end
    end

    always_ff @(posedge ACLK or negedge ARESETN) begin
        if (~ARESETN) begin
            state <= IDLE;
        end else begin
            state <= next_state;
        end
    end

    always_comb begin
        next_state = state; // Default to hold value
        case (state)
            IDLE : begin
                if (S_AWVALID) begin
                    next_state = WRITE_CHANNEL;
                end 
                else if (S_ARVALID) begin
                    next_state = RADDR_CHANNEL;
                end 
            end
            RADDR_CHANNEL : if (S_ARVALID && S_ARREADY) next_state = RDATA_CHANNEL;
            RDATA_CHANNEL : if (S_RVALID && S_RREADY) next_state = IDLE;
            WRITE_CHANNEL : if (write_addr && write_data) next_state = WRESP_CHANNEL;
            WRESP_CHANNEL : if (S_BVALID && S_BREADY) next_state = IDLE;
            default: next_state = IDLE; // Add default case
        endcase
    end
endmodule

