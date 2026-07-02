// TPU-only testbench: drives the real sobel_tpu over its AXI4-Lite port.
//
//  1. preload the real 242x242 image into the input BRAM ($readmemh)
//  2. sanity-check MAGIC over AXI, exercise an AXI ibuf write/readback
//  3. load Sobel Gx (slot 0) + Gy (slot 1) kernels over AXI
//  4. configure POST (mode=1 |Gx|+|Gy|, shift=0), pulse START
//  5. poll STATUS, read the hardware CYCLES counter
//  6. dump the output BRAM to tpu_out.bin (compared to golden by Makefile)
//
// TB drives/samples everything on negedge clk to avoid races with the DUT.

`timescale 1ns / 1ps

module tb_tpu;
    reg clk = 0;
    reg resetn = 0;
    always #5 clk = ~clk;          // 100 MHz

    // AXI master signals
    reg  [17:0] awaddr;  reg awvalid;  wire awready;
    reg  [31:0] wdata;   reg [3:0] wstrb; reg wvalid; wire wready;
    wire [1:0]  bresp;   wire bvalid; reg bready;
    reg  [17:0] araddr;  reg arvalid; wire arready;
    wire [31:0] rdata;   wire [1:0] rresp; wire rvalid; reg rready;

    sobel_tpu dut (
        .clk(clk), .resetn(resetn),
        .s_axi_awaddr(awaddr), .s_axi_awprot(3'b0), .s_axi_awvalid(awvalid), .s_axi_awready(awready),
        .s_axi_wdata(wdata), .s_axi_wstrb(wstrb), .s_axi_wvalid(wvalid), .s_axi_wready(wready),
        .s_axi_bresp(bresp), .s_axi_bvalid(bvalid), .s_axi_bready(bready),
        .s_axi_araddr(araddr), .s_axi_arprot(3'b0), .s_axi_arvalid(arvalid), .s_axi_arready(arready),
        .s_axi_rdata(rdata), .s_axi_rresp(rresp), .s_axi_rvalid(rvalid), .s_axi_rready(rready)
    );

    // ------------------------------------------------------------------
    // AXI4-Lite BFM (relies on this slave deasserting ready for >=1 cycle
    // after accept, which sobel_tpu does)
    // ------------------------------------------------------------------
    task axi_write(input [17:0] a, input [31:0] d);
        reg aw_ok, w_ok, aw_r, w_r;
        begin
            @(negedge clk);
            awaddr = a; awvalid = 1; wdata = d; wstrb = 4'hF; wvalid = 1; bready = 1;
            aw_ok = 0; w_ok = 0;
            while (!(aw_ok && w_ok)) begin
                aw_r = awready; w_r = wready;
                @(negedge clk);
                if (!aw_ok && aw_r) begin aw_ok = 1; awvalid = 0; end
                if (!w_ok  && w_r)  begin w_ok  = 1; wvalid  = 0; end
            end
            while (!bvalid) @(negedge clk);
            @(negedge clk);
            bready = 0;
        end
    endtask

    task axi_read(input [17:0] a, output [31:0] d);
        reg ar_ok, ar_r;
        begin
            @(negedge clk);
            araddr = a; arvalid = 1; rready = 1;
            ar_ok = 0;
            while (!ar_ok) begin
                ar_r = arready;
                @(negedge clk);
                if (ar_r) begin ar_ok = 1; arvalid = 0; end
            end
            while (!rvalid) @(negedge clk);
            d = rdata;
            @(negedge clk);
            rready = 0;
        end
    endtask

    // ------------------------------------------------------------------
    // register offsets
    // ------------------------------------------------------------------
    localparam A_CTRL = 18'h00000, A_STATUS = 18'h00004, A_IMGW = 18'h00008,
               A_IMGH = 18'h0000C, A_POST = 18'h00010, A_CYCLES = 18'h00014,
               A_MAGIC = 18'h00018, A_KER = 18'h00200,
               A_IBUF = 18'h10000, A_OBUF = 18'h20000;

    integer i, fout, errors;
    reg [31:0] rd, rd2, cyc;
    reg signed [7:0] kgx [0:8];
    reg signed [7:0] kgy [0:8];

    initial begin
        awvalid = 0; wvalid = 0; bready = 0; arvalid = 0; rready = 0;
        errors = 0;

        // Sobel kernels -- must match host/golden.py
        kgx[0]=-1; kgx[1]= 0; kgx[2]= 1; kgx[3]=-2; kgx[4]=0; kgx[5]=2; kgx[6]=-1; kgx[7]=0; kgx[8]=1;
        kgy[0]=-1; kgy[1]=-2; kgy[2]=-1; kgy[3]= 0; kgy[4]=0; kgy[5]=0; kgy[6]= 1; kgy[7]=2; kgy[8]=1;

        $readmemh(`IMG_HEX, dut.ibuf);

        repeat (10) @(negedge clk);
        resetn = 1;
        repeat (5) @(negedge clk);

        // hello: MAGIC register
        axi_read(A_MAGIC, rd);
        if (rd !== 32'h53545055) begin
            $display("FAIL: MAGIC = %08x", rd); errors = errors + 1;
        end else $display("MAGIC ok (STPU)");

        // AXI write/readback into a scratch ibuf word (beyond the image)
        axi_write(A_IBUF + 18'h0F000, 32'hA5C3_1E7B);
        axi_read (A_IBUF + 18'h0F000, rd);
        if (rd !== 32'hA5C3_1E7B) begin
            $display("FAIL: ibuf AXI readback %08x", rd); errors = errors + 1;
        end else $display("ibuf AXI write/read ok");

        // kernels: slot s at A_KER + s*0x40 + tap*4
        for (i = 0; i < 9; i = i + 1) begin
            axi_write(A_KER + 18'h00 + i*4, {{24{kgx[i][7]}}, kgx[i]});
            axi_write(A_KER + 18'h40 + i*4, {{24{kgy[i][7]}}, kgy[i]});
        end

        axi_write(A_IMGW, 32'd242);
        axi_write(A_IMGH, 32'd242);
        axi_write(A_POST, 32'h0000_0001);   // mode=1 (|Gx|+|Gy|), shift=0

        $display("starting TPU...");
        axi_write(A_CTRL, 32'h1);

        rd = 0;
        while (!rd[1]) axi_read(A_STATUS, rd);   // wait DONE

        axi_read(A_CYCLES, cyc);
        $display("TPU done: %0d cycles for 240x240 (%.2f cycles/px, %.3f ms @100MHz)",
                 cyc, cyc / 57600.0, cyc / 100_000.0);

        // spot-check the AXI read path into obuf against the internal array
        for (i = 0; i < 8; i = i + 1) begin
            axi_read(A_OBUF + i*1801*4, rd);
            rd2 = dut.obuf[i*1801];
            if (rd !== rd2) begin
                $display("FAIL: obuf AXI read word %0d: %08x != %08x", i*1801, rd, rd2);
                errors = errors + 1;
            end
        end

        // dump result for the golden comparison
        fout = $fopen(`OUT_BIN, "wb");
        for (i = 0; i < 14400; i = i + 1) begin
            rd = dut.obuf[i];
            $fwrite(fout, "%c%c%c%c", rd[7:0], rd[15:8], rd[23:16], rd[31:24]);
        end
        $fclose(fout);

        if (errors == 0) $display("TB PASS (RTL output written to %s)", `OUT_BIN);
        else             $display("TB FAIL: %0d errors", errors);
        $finish;
    end

    initial begin
        #60_000_000;   // 6M cycles watchdog
        $display("TB TIMEOUT");
        $finish;
    end
endmodule
