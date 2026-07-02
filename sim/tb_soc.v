// Full-SoC pre-board simulation: real picorv32_axi (via picorv32_bd wrapper),
// real sobel_tpu, real firmware (SIM build, image embedded) -- only RAM,
// UART, and GPIO are behavioral. Gives exact rdcycle numbers for the CPU
// baseline and the TPU offload path before touching hardware.
//
// Address decode (matches vivado/build_all.tcl):
//   0x0000_0000 RAM (256 KB, behavioral, extra read latency to approximate
//               SmartConnect + AXI BRAM controller)
//   0x4000_0000 GPIO stub (buttons read 0)
//   0x4060_0000 UART stub (TX prints to stdout, never full)
//   0x4070_0000 SIM_CTRL (fw hands over result pointer / done flag)
//   0x4400_0000 sobel_tpu (real RTL)

`timescale 1ns / 1ps

module tb_soc;
    reg clk = 0;
    reg resetn = 0;
    always #5 clk = ~clk;

    // CPU master
    wire        awvalid, wvalid, bready, arvalid, rready;
    wire [31:0] awaddr, wdata, araddr;
    wire [2:0]  awprot, arprot;
    wire [3:0]  wstrb;
    wire        awready, wready, bvalid, arready, rvalid;
    wire [31:0] rdata;
    wire        trap;

    picorv32_bd u_cpu (
        .clk(clk), .resetn(resetn), .trap(trap),
        .m_axi_awvalid(awvalid), .m_axi_awready(awready), .m_axi_awaddr(awaddr), .m_axi_awprot(awprot),
        .m_axi_wvalid(wvalid), .m_axi_wready(wready), .m_axi_wdata(wdata), .m_axi_wstrb(wstrb),
        .m_axi_bvalid(bvalid), .m_axi_bready(bready),
        .m_axi_arvalid(arvalid), .m_axi_arready(arready), .m_axi_araddr(araddr), .m_axi_arprot(arprot),
        .m_axi_rvalid(rvalid), .m_axi_rready(rready), .m_axi_rdata(rdata)
    );

    // ------------------------------------------------------------------
    // route by address: TPU vs behavioral slave (single-outstanding master)
    // ------------------------------------------------------------------
    wire aw_tpu = (awaddr[31:24] == 8'h44);
    wire ar_tpu = (araddr[31:24] == 8'h44);

    wire t_awready, t_wready, t_bvalid, t_arready, t_rvalid;
    wire [31:0] t_rdata;
    wire [1:0]  t_bresp, t_rresp;
    wire b_awready, b_wready, b_bvalid, b_arready, b_rvalid;
    reg  [31:0] b_rdata;

    sobel_tpu u_tpu (
        .clk(clk), .resetn(resetn),
        .s_axi_awaddr(awaddr[17:0]), .s_axi_awprot(awprot),
        .s_axi_awvalid(awvalid & aw_tpu), .s_axi_awready(t_awready),
        .s_axi_wdata(wdata), .s_axi_wstrb(wstrb),
        .s_axi_wvalid(wvalid & aw_tpu), .s_axi_wready(t_wready),
        .s_axi_bresp(t_bresp), .s_axi_bvalid(t_bvalid), .s_axi_bready(bready),
        .s_axi_araddr(araddr[17:0]), .s_axi_arprot(arprot),
        .s_axi_arvalid(arvalid & ar_tpu), .s_axi_arready(t_arready),
        .s_axi_rdata(t_rdata), .s_axi_rresp(t_rresp),
        .s_axi_rvalid(t_rvalid), .s_axi_rready(rready)
    );

    assign awready = aw_tpu ? t_awready : b_awready;
    assign wready  = aw_tpu ? t_wready  : b_wready;
    assign arready = ar_tpu ? t_arready : b_arready;
    assign bvalid  = t_bvalid | b_bvalid;
    assign rvalid  = t_rvalid | b_rvalid;
    assign rdata   = t_rvalid ? t_rdata : b_rdata;

    // ------------------------------------------------------------------
    // behavioral slave: RAM + UART + GPIO + SIM_CTRL
    // ------------------------------------------------------------------
    localparam RLAT = 3;   // extra read wait-states ~ SmartConnect + BRAM ctrl

    reg [31:0] ram [0:65535];   // 256 KB

    reg        bb_valid;  assign b_bvalid = bb_valid;
    reg        rb_valid;  assign b_rvalid = rb_valid;
    reg [1:0]  wr_st;
    reg [2:0]  rd_st;
    reg [31:0] raddr_l;
    reg [31:0] sim_ptr;

    wire b_aw_fire = awvalid & ~aw_tpu & b_awready;
    wire b_ar_fire = arvalid & ~ar_tpu & b_arready;
    assign b_awready = (wr_st == 0) & awvalid & wvalid & ~aw_tpu;
    assign b_wready  = b_awready;
    assign b_arready = (rd_st == 0) & ~b_aw_fire;

    integer bi;
    always @(posedge clk) begin
        if (!resetn) begin
            bb_valid <= 0; rb_valid <= 0; wr_st <= 0; rd_st <= 0;
        end else begin
            // ---- write ----
            if (b_aw_fire) begin
                if (awaddr[31:28] == 4'h0) begin
                    if (wstrb[0]) ram[awaddr[19:2]][7:0]   <= wdata[7:0];
                    if (wstrb[1]) ram[awaddr[19:2]][15:8]  <= wdata[15:8];
                    if (wstrb[2]) ram[awaddr[19:2]][23:16] <= wdata[23:16];
                    if (wstrb[3]) ram[awaddr[19:2]][31:24] <= wdata[31:24];
                end else if (awaddr == 32'h4060_0004) begin
                    $write("%c", wdata[7:0]);
                    $fflush;
                end else if (awaddr == 32'h4070_0000) begin
                    sim_ptr <= wdata;
                end else if (awaddr == 32'h4070_0004) begin
                    dump_and_finish;
                end
                wr_st <= 1;
            end else if (wr_st == 1) begin
                bb_valid <= 1; wr_st <= 2;
            end else if (wr_st == 2 && bready) begin
                bb_valid <= 0; wr_st <= 0;
            end
            // ---- read ----
            if (b_ar_fire) begin
                raddr_l <= araddr; rd_st <= 1;
            end else if (rd_st != 0 && rd_st < RLAT) begin
                rd_st <= rd_st + 1;
            end else if (rd_st == RLAT) begin
                if (raddr_l[31:28] == 4'h0)
                    b_rdata <= ram[raddr_l[19:2]];
                else if (raddr_l == 32'h4060_0008)
                    b_rdata <= 32'h0;      // uart: rx empty, tx not full
                else
                    b_rdata <= 32'h0;      // gpio buttons etc.
                rb_valid <= 1; rd_st <= RLAT + 1;
            end else if (rd_st == RLAT + 1 && rready) begin
                rb_valid <= 0; rd_st <= 0;
            end
        end
    end

    task dump_and_finish;
        integer i, f1, f2;
        reg [31:0] w;
        begin
            f1 = $fopen(`CPU_BIN, "wb");
            for (i = 0; i < 14400; i = i + 1) begin
                w = ram[(sim_ptr >> 2) + i];
                $fwrite(f1, "%c%c%c%c", w[7:0], w[15:8], w[23:16], w[31:24]);
            end
            $fclose(f1);
            f2 = $fopen(`OUT_BIN, "wb");
            for (i = 0; i < 14400; i = i + 1) begin
                w = u_tpu.obuf[i];
                $fwrite(f2, "%c%c%c%c", w[7:0], w[15:8], w[23:16], w[31:24]);
            end
            $fclose(f2);
            $display("\n[tb_soc] dumped %s and %s at cycle %0d",
                     `CPU_BIN, `OUT_BIN, $time / 10);
            $finish;
        end
    endtask

    always @(posedge clk)
        if (resetn && trap) begin
            $display("\n[tb_soc] CPU TRAP at cycle %0d -- firmware crashed", $time / 10);
            $finish;
        end

    initial begin
        $readmemh(`FW_HEX, ram);
        repeat (20) @(posedge clk);
        resetn = 1;
    end

    initial begin
        #1_000_000_000;   // 100M cycles
        $display("\n[tb_soc] TIMEOUT");
        $finish;
    end
endmodule
