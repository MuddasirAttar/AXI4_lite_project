`timescale 1ns / 1ps
`default_nettype none

module axi4_lite_master #(
    parameter ADDRESS = 32,
    parameter DATA_WIDTH = 32
    )
    (
        // Global Signals
        input  wire                     ACLK,
        input  wire                     ARESETN,

        input  wire                     START_READ,
        input  wire                     START_WRITE,

        input  wire [ADDRESS-1 : 0]     address,
        input  wire [DATA_WIDTH-1:0]    W_data,

        // Read Address Channel INPUTS
        input  wire                     M_ARREADY,
        // Read Data Channel INPUTS
        /* verilator lint_off UNUSEDSIGNAL */
        input  wire [DATA_WIDTH-1:0]    M_RDATA,
        input  wire [1:0]               M_RRESP,
        /* verilator lint_on UNUSEDSIGNAL */
        input  wire                     M_RVALID,
        // Write Address Channel INPUTS
        input  wire                     M_AWREADY,
        input  wire                     M_WREADY,
        // Write Response Channel INPUTS
        /* verilator lint_off UNUSEDSIGNAL */
        input  wire [1:0]               M_BRESP,
        /* verilator lint_on UNUSEDSIGNAL */
        input  wire                     M_BVALID,
        // Read Address Channel OUTPUTS
        output wire [ADDRESS-1 : 0]     M_ARADDR,
        output wire                     M_ARVALID,
        // Read Data Channel OUTPUTS
        output wire                     M_RREADY,
        // Write Address Channel OUTPUTS
        output wire [ADDRESS-1 : 0]     M_AWADDR,
        output wire                     M_AWVALID,
        // Write Data  Channel OUTPUTS
        output wire [DATA_WIDTH-1:0]    M_WDATA,
        output wire [3:0]               M_WSTRB,
        output wire                     M_WVALID,
        // Write Response Channel OUTPUTS
        output wire                     M_BREADY
    );

    logic read_start;
    logic write_start;

    typedef enum logic [2 : 0] {IDLE, WRITE_CHANNEL, WRESP_CHANNEL, RADDR_CHANNEL, RDATA_CHANNEL} state_type;
    state_type state, next_state;

    // ar
    assign M_ARADDR  = (state == RADDR_CHANNEL) ? address : 32'h0;
    assign M_ARVALID = (state == RADDR_CHANNEL) ? 1'b1 : 1'b0;
    // r
    assign M_RREADY  = (state == RDATA_CHANNEL || state == RADDR_CHANNEL) ? 1'b1 : 1'b0;
    // aw
    assign M_AWVALID = (state == WRITE_CHANNEL) ? 1'b1 : 1'b0;
    assign M_AWADDR  = (state == WRITE_CHANNEL) ? address : 32'h0;
    // W
    assign M_WVALID  = (state == WRITE_CHANNEL) ? 1'b1 : 1'b0;
    assign M_WDATA   = (state == WRITE_CHANNEL) ? W_data : 32'h0;
    assign M_WSTRB   = (state == WRITE_CHANNEL) ? 4'b1111 : 4'b0;
    // B
    assign M_BREADY = ((state == WRITE_CHANNEL) || (state == WRESP_CHANNEL)) ? 1'b1 : 1'b0;

    always_ff @(posedge ACLK or negedge ARESETN) begin
        if (~ARESETN) begin
            state <= IDLE;
        end else begin
            state <= next_state;
        end
    end
    
    always_ff @(posedge ACLK or negedge ARESETN) begin
        if (~ARESETN) begin
            read_start <= 1'b0;
            write_start <= 1'b0;
        end else begin
            read_start <= START_READ;
            write_start <= START_WRITE;
        end
    end
    
    always_comb begin
        next_state = state; // Default to hold value
        case (state)
            IDLE : begin
                if (write_start) begin
                    next_state = WRITE_CHANNEL;
                end 
                else if (read_start) begin
                    next_state = RADDR_CHANNEL;
                end 
            end
            RADDR_CHANNEL : if (M_ARVALID && M_ARREADY) next_state = RDATA_CHANNEL;
            RDATA_CHANNEL : if (M_RVALID && M_RREADY) next_state = IDLE;
            WRITE_CHANNEL : if (M_AWVALID && M_AWREADY && M_WVALID && M_WREADY) next_state = WRESP_CHANNEL;
            WRESP_CHANNEL : if (M_BVALID && M_BREADY) next_state = IDLE;
            default: next_state = IDLE; // Add default case
        endcase
    end
endmodule



