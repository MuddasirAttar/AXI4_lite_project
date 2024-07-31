module axi4_lite_top_tb();

    logic           ACLK_tb;
    logic           ARESETN_tb;
    logic           read_s_tb;
    logic           write_s_tb;
    logic [31:0]    address_tb;
    logic [31:0]    W_data_tb;
    
    axi4_lite_top u_axi4_lite_top0(
        .ACLK(ACLK_tb),
        .ARESETN(ARESETN_tb),
        .read_s(read_s_tb),
        .write_s(write_s_tb),
        .address(address_tb),
        .W_data(W_data_tb)
    );

    initial begin
        ACLK_tb = 0;
        ARESETN_tb = 0;
        read_s_tb = 0;  
        write_s_tb = 0;                           
        #5 ARESETN_tb = 1;
        #15 write_s_tb = 1;
        address_tb = 5;
        W_data_tb = 4;
        #10 write_s_tb = 0;
        #20 write_s_tb = 0;
        read_s_tb = 0;
        #30 read_s_tb = 1;
        address_tb = 5;
        #10 read_s_tb = 0;
        #40 $finish;            
    end
    
    always_ff #5 ACLK_tb <= ~ACLK_tb;
endmodule

`default_nettype wire
