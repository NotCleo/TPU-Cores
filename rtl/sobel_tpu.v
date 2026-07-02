// ============================================================================
// sobel_tpu -- self-contained 3x3 convolution accelerator around an 8x8
//              output-stationary systolic array. AXI4-Lite slave, 256 KB window.
//
// Address map (byte offsets from the IP base address):
//   0x00000 CTRL    W : bit0 = START (ignored while busy)
//   0x00004 STATUS  R : bit0 = BUSY, bit1 = DONE (sticky, cleared by START)
//   0x00008 IMG_W   RW: padded image width  (default 242; (W-2) must be /8)
//   0x0000C IMG_H   RW: padded image height (default 242)
//   0x00010 POST    RW: [1:0] mode (0 |csel|, 1 |c0|+|c1|, 2 csel+128)
//                       [7:4] shift, [10:8] colsel
//   0x00014 CYCLES  R : clock cycles of the last run (start -> done)
//   0x00018 MAGIC   R : 0x53545055 "STPU" (sanity/hello register)
//   0x00200 +s*0x40+k*4 : kernel tap k (0..8) of filter slot s (0..7),
//                         signed 8-bit in wdata[7:0]  (dynamic -- not hardcoded)
//   0x10000..0x1FFFF : input  buffer BRAM, 64 KB (242x242 px, 4 px/word LE)
//   0x20000..0x2FFFF : output buffer BRAM, 64 KB (240x240 px, read-only)
//
// Engine (all fixed-function, runs autonomously once START is written):
//   per tile of 8 horizontally-adjacent output pixels:
//     FETCH   : 12 word reads pull the 3x16-byte input window into a
//               ping-pong bank (overlapped with the previous tile's compute)
//     COMPUTE : 23 cycles -- K=9 im2col taps streamed through the skewed
//               8x8 array; rows = 8 pixels, cols = 8 filter slots
//     DRAIN   : 8 cycles -- postproc (|Gx|+|Gy| >> shift, saturate) packs
//               4 px/word into the output BRAM
//     CLEAR   : 1 cycle  -- zero accumulators for the next tile
//   240x240 output = 7200 tiles => ~33 cycles/tile ~= 240K cycles ~= 2.4 ms
//   at 100 MHz (fetch fully hidden under compute+drain).
// ============================================================================

module sobel_tpu (
    (* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 clk CLK" *)
    (* X_INTERFACE_PARAMETER = "ASSOCIATED_BUSIF s_axi, ASSOCIATED_RESET resetn" *)
    input  wire        clk,
    (* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 resetn RST" *)
    (* X_INTERFACE_PARAMETER = "POLARITY ACTIVE_LOW" *)
    input  wire        resetn,

    // ---- AXI4-Lite slave --------------------------------------------------
    input  wire [17:0] s_axi_awaddr,
    input  wire [2:0]  s_axi_awprot,
    input  wire        s_axi_awvalid,
    output wire        s_axi_awready,
    input  wire [31:0] s_axi_wdata,
    input  wire [3:0]  s_axi_wstrb,
    input  wire        s_axi_wvalid,
    output wire        s_axi_wready,
    output wire [1:0]  s_axi_bresp,
    output reg         s_axi_bvalid,
    input  wire        s_axi_bready,
    input  wire [17:0] s_axi_araddr,
    input  wire [2:0]  s_axi_arprot,
    input  wire        s_axi_arvalid,
    output wire        s_axi_arready,
    output reg  [31:0] s_axi_rdata,
    output wire [1:0]  s_axi_rresp,
    output reg         s_axi_rvalid,
    input  wire        s_axi_rready
);
    localparam MAGIC = 32'h53545055;

    // =======================================================================
    // Configuration / status registers
    // =======================================================================
    reg  [9:0]  img_w, img_h;
    reg  [1:0]  post_mode;
    reg  [3:0]  post_shift;
    reg  [2:0]  post_colsel;
    reg         busy, done;
    reg  [31:0] cycles;
    reg  signed [7:0] ker [0:7][0:8];   // 8 filter slots x 9 taps

    // =======================================================================
    // AXI4-Lite write channel (independent AW/W capture, then commit)
    // =======================================================================
    reg         aw_got, w_got;
    reg  [17:0] awaddr_r;
    reg  [31:0] wdata_r;
    reg  [3:0]  wstrb_r;
    wire        wr_commit = aw_got & w_got;

    assign s_axi_awready = ~aw_got & ~s_axi_bvalid;
    assign s_axi_wready  = ~w_got  & ~s_axi_bvalid;
    assign s_axi_bresp   = 2'b00;

    wire wr_regs = wr_commit & (awaddr_r[17:16] == 2'b00);
    wire wr_ibuf = wr_commit & (awaddr_r[17:16] == 2'b01);
    wire start_pulse = wr_regs & ~awaddr_r[9] & (awaddr_r[4:2] == 3'd0)
                       & wdata_r[0] & ~busy;

    always @(posedge clk) begin
        if (!resetn) begin
            aw_got <= 1'b0; w_got <= 1'b0; s_axi_bvalid <= 1'b0;
        end else begin
            if (s_axi_awvalid & s_axi_awready) begin
                aw_got <= 1'b1; awaddr_r <= s_axi_awaddr;
            end
            if (s_axi_wvalid & s_axi_wready) begin
                w_got <= 1'b1; wdata_r <= s_axi_wdata; wstrb_r <= s_axi_wstrb;
            end
            if (wr_commit) begin
                aw_got <= 1'b0; w_got <= 1'b0; s_axi_bvalid <= 1'b1;
            end else if (s_axi_bvalid & s_axi_bready) begin
                s_axi_bvalid <= 1'b0;
            end
        end
    end

    // register writes (whole-word; wstrb ignored for the register region)
    integer wi;
    always @(posedge clk) begin
        if (!resetn) begin
            img_w <= 10'd242; img_h <= 10'd242;
            post_mode <= 2'd1; post_shift <= 4'd0; post_colsel <= 3'd0;
        end else if (wr_regs) begin
            if (awaddr_r[9]) begin
                if (awaddr_r[5:2] <= 4'd8)
                    ker[awaddr_r[8:6]][awaddr_r[5:2]] <= wdata_r[7:0];
            end else begin
                case (awaddr_r[4:2])
                    3'd2: img_w <= wdata_r[9:0];
                    3'd3: img_h <= wdata_r[9:0];
                    3'd4: begin
                        post_mode   <= wdata_r[1:0];
                        post_shift  <= wdata_r[7:4];
                        post_colsel <= wdata_r[10:8];
                    end
                    default: ;
                endcase
            end
        end
    end

    // =======================================================================
    // AXI4-Lite read channel (2-cycle: BRAM address -> data -> RVALID)
    // =======================================================================
    localparam R_IDLE = 2'd0, R_CAP = 2'd1, R_RESP = 2'd2;
    reg  [1:0]  r_state;
    reg  [17:0] raddr_r;

    assign s_axi_arready = (r_state == R_IDLE) & ~wr_commit;
    assign s_axi_rresp   = 2'b00;
    wire   ar_fire = s_axi_arvalid & s_axi_arready;

    reg [31:0] reg_rdata;
    always @* begin
        if (raddr_r[9])
            reg_rdata = (raddr_r[5:2] <= 4'd8)
                      ? {{24{ker[raddr_r[8:6]][raddr_r[5:2]][7]}},
                         ker[raddr_r[8:6]][raddr_r[5:2]]}
                      : 32'd0;
        else case (raddr_r[4:2])
            3'd1: reg_rdata = {30'd0, done, busy};
            3'd2: reg_rdata = {22'd0, img_w};
            3'd3: reg_rdata = {22'd0, img_h};
            3'd4: reg_rdata = {21'd0, post_colsel, post_shift, post_mode};
            3'd5: reg_rdata = cycles;
            3'd6: reg_rdata = MAGIC;
            default: reg_rdata = 32'd0;
        endcase
    end

    wire [31:0] ibuf_a_rdata, obuf_a_rdata;

    always @(posedge clk) begin
        if (!resetn) begin
            r_state <= R_IDLE; s_axi_rvalid <= 1'b0;
        end else case (r_state)
            R_IDLE: if (ar_fire) begin
                raddr_r <= s_axi_araddr;
                r_state <= R_CAP;
            end
            R_CAP: begin
                case (raddr_r[17:16])
                    2'b00:   s_axi_rdata <= reg_rdata;
                    2'b01:   s_axi_rdata <= ibuf_a_rdata;
                    default: s_axi_rdata <= obuf_a_rdata;
                endcase
                s_axi_rvalid <= 1'b1;
                r_state <= R_RESP;
            end
            R_RESP: if (s_axi_rready) begin
                s_axi_rvalid <= 1'b0;
                r_state <= R_IDLE;
            end
            default: r_state <= R_IDLE;
        endcase
    end

    // =======================================================================
    // Input buffer BRAM: 16K x 32 (64 KB). Port A = AXI R/W, Port B = engine
    // =======================================================================
    reg  [31:0] ibuf [0:16383];
    reg  [31:0] ibuf_a_q, ibuf_b_q;
    wire [13:0] ibuf_a_addr = wr_ibuf ? awaddr_r[15:2] : s_axi_araddr[15:2];
    wire [13:0] ibuf_b_addr;   // driven by fetch unit

    always @(posedge clk) begin // port A
        if (wr_ibuf) begin
            if (wstrb_r[0]) ibuf[ibuf_a_addr][7:0]   <= wdata_r[7:0];
            if (wstrb_r[1]) ibuf[ibuf_a_addr][15:8]  <= wdata_r[15:8];
            if (wstrb_r[2]) ibuf[ibuf_a_addr][23:16] <= wdata_r[23:16];
            if (wstrb_r[3]) ibuf[ibuf_a_addr][31:24] <= wdata_r[31:24];
        end
        ibuf_a_q <= ibuf[ibuf_a_addr];
    end
    always @(posedge clk) ibuf_b_q <= ibuf[ibuf_b_addr]; // port B (read only)
    assign ibuf_a_rdata = ibuf_a_q;

    // =======================================================================
    // Output buffer BRAM: 16K x 32. Port A = AXI read, Port B = engine write
    // =======================================================================
    reg  [31:0] obuf [0:16383];
    reg  [31:0] obuf_a_q;
    reg         obuf_we;
    reg  [13:0] obuf_waddr;
    reg  [31:0] obuf_wdata;

    always @(posedge clk) obuf_a_q <= obuf[s_axi_araddr[15:2]]; // port A
    always @(posedge clk) if (obuf_we) obuf[obuf_waddr] <= obuf_wdata; // port B
    assign obuf_a_rdata = obuf_a_q;

    // =======================================================================
    // Engine
    // =======================================================================
    localparam S_IDLE = 3'd0, S_PRIME = 3'd1, S_WAIT = 3'd2,
               S_COMPUTE = 3'd3, S_DRAIN = 3'd4, S_CLEAR = 3'd5;
    reg  [2:0]  state;

    // latched-at-start geometry
    reg  [9:0]  out_rows;      // img_h - 2
    reg  [6:0]  tiles_row;     // (img_w - 2) / 8
    reg  [19:0] ntiles;
    reg  [19:0] tile_cnt;      // tiles fully drained
    reg  [19:0] f_cnt;         // tiles fully fetched

    // fetch unit
    reg         f_run;
    reg         fetch_go;
    reg  [3:0]  fi;
    reg  [1:0]  cap_r, cap_w;
    reg         cap_v;
    reg  [16:0] f_rb0, f_rb1, f_rb2;   // byte addresses of the 3 window rows
    reg  [6:0]  f_tilex;
    reg  [127:0] bank [0:1][0:2];      // ping-pong 3x16-byte windows
    reg  [1:0]   boff [0:1][0:2];      // byte offset of pixel 0 in each row

    wire        f_sel = f_cnt[0];
    wire        c_sel = tile_cnt[0];
    wire [16:0] f_rb_sel = (fi[3:2] == 2'd0) ? f_rb0
                         : (fi[3:2] == 2'd1) ? f_rb1 : f_rb2;
    assign ibuf_b_addr = f_rb_sel[15:2] + {12'd0, fi[1:0]};

    always @(posedge clk) begin
        if (!resetn) begin
            f_run <= 1'b0; cap_v <= 1'b0;
        end else if (!f_run) begin
            cap_v <= 1'b0;
            if (fetch_go) begin
                f_run <= 1'b1;
                fi    <= 4'd0;
                boff[f_sel][0] <= f_rb0[1:0];
                boff[f_sel][1] <= f_rb1[1:0];
                boff[f_sel][2] <= f_rb2[1:0];
            end
        end else begin
            cap_v <= (fi < 4'd12);
            cap_r <= fi[3:2];
            cap_w <= fi[1:0];
            if (cap_v)
                bank[f_sel][cap_r][32*cap_w +: 32] <= ibuf_b_q;
            fi <= fi + 4'd1;
            if (fi == 4'd12) begin
                f_run <= 1'b0;
                f_cnt <= f_cnt + 20'd1;
                if (f_tilex == tiles_row - 7'd1) begin
                    f_tilex <= 7'd0;                 // next output row:
                    f_rb0 <= f_rb0 + 17'd10;         // advance 8 px + 2 pad px
                    f_rb1 <= f_rb1 + 17'd10;
                    f_rb2 <= f_rb2 + 17'd10;
                end else begin
                    f_tilex <= f_tilex + 7'd1;
                    f_rb0 <= f_rb0 + 17'd8;
                    f_rb1 <= f_rb1 + 17'd8;
                    f_rb2 <= f_rb2 + 17'd8;
                end
            end
        end
        if (start_pulse) begin
            f_rb0 <= 17'd0;
            f_rb1 <= {7'd0, img_w};
            f_rb2 <= {6'd0, img_w, 1'b0};   // 2*img_w
            f_tilex <= 7'd0;
            f_cnt <= 20'd0;
        end
    end

    // ---- compute / drain sequencing ---------------------------------------
    // Drain is 2-stage pipelined (9 cycles for 8 pixels): stage 1 registers
    // the accumulator column muxes (the 64:1 x 20-bit fan-in was the critical
    // path at 100 MHz), stage 2 runs postproc and packs the output word.
    reg  [4:0]  t_cnt;
    reg  [1:0]  dr, dc;
    reg  [3:0]  d_i;                    // 0..8: select pixel d_i, emit d_i-1
    reg  [13:0] out_wa;
    reg  [23:0] word_r;

    wire feeding = (state == S_COMPUTE) && (t_cnt < 5'd9);
    wire [3:0] kk = {2'd0, dr} + {1'd0, dr, 1'd0} + {2'd0, dc}; // 3*dr + dc

    wire [127:0] wrow = bank[c_sel][dr];
    wire [3:0]   base = {2'd0, boff[c_sel][dr]} + {2'd0, dc};

    wire [71:0] a_flat;
    wire [63:0] b_flat;
    wire [1279:0] acc_flat;

    genvar gi, gj;
    generate
        for (gi = 0; gi < 8; gi = gi + 1) begin : g_afeed
            wire [4:0] bidx = {1'b0, base} + gi;
            assign a_flat[gi*9 +: 9] = feeding ? {1'b0, wrow[8*bidx +: 8]} : 9'd0;
        end
        for (gj = 0; gj < 8; gj = gj + 1) begin : g_bfeed
            assign b_flat[gj*8 +: 8] = feeding ? ker[gj][kk] : 8'd0;
        end
    endgenerate

    wire arr_clear = (state == S_CLEAR) | start_pulse | ~resetn;

    // Registered feed: cuts the tile_cnt -> bank mux -> byte mux -> PE(0,0)
    // path (was critical at 100 MHz). Uniform 1-cycle delay on both operands
    // preserves systolic alignment; COMPUTE runs one cycle longer.
    reg [71:0] a_flat_r;
    reg [63:0] b_flat_r;
    always @(posedge clk) begin
        a_flat_r <= arr_clear ? 72'd0 : a_flat;
        b_flat_r <= arr_clear ? 64'd0 : b_flat;
    end

    systolic_array u_array (
        .clk      (clk),
        .clear    (arr_clear),
        .a_flat   (a_flat_r),
        .b_flat   (b_flat_r),
        .acc_flat (acc_flat)
    );

    // drain stage 1: registered accumulator selection for pixel d_i[2:0]
    reg signed [19:0] c0_r, c1_r, cs_r;
    always @(posedge clk) begin
        c0_r <= acc_flat[({d_i[2:0], 3'd0})*20 +: 20];
        c1_r <= acc_flat[({d_i[2:0], 3'd0} + 7'd1)*20 +: 20];
        cs_r <= acc_flat[({d_i[2:0], 3'd0} + {4'd0, post_colsel})*20 +: 20];
    end

    // drain stage 2: postproc on the previous cycle's selection (pixel d_i-1)
    wire [2:0] d_pix = d_i[2:0] - 3'd1;   // 3-bit wrap: d_i=8 -> pixel 7
    wire [7:0] px;

    postproc u_post (
        .c0 (c0_r), .c1 (c1_r), .csel (cs_r),
        .mode (post_mode), .shift (post_shift), .px (px)
    );

    always @(posedge clk) begin
        obuf_we <= 1'b0;    // default; overridden in S_DRAIN below
        if (!resetn) begin
            state <= S_IDLE; busy <= 1'b0; done <= 1'b0;
            fetch_go <= 1'b0; cycles <= 32'd0;
        end else begin
            fetch_go <= 1'b0;
            if (busy) cycles <= cycles + 32'd1;

            case (state)
                S_IDLE: if (start_pulse) begin
                    busy <= 1'b1; done <= 1'b0; cycles <= 32'd0;
                    out_rows  <= img_h - 10'd2;
                    tiles_row <= (img_w - 10'd2) >> 3;
                    tile_cnt  <= 20'd0;
                    out_wa    <= 14'd0;
                    state     <= S_PRIME;
                end
                S_PRIME: begin
                    ntiles   <= tiles_row * out_rows;
                    fetch_go <= 1'b1;      // prime: fetch tile 0
                    state    <= S_WAIT;
                end
                S_WAIT: if (!f_run && !fetch_go && (f_cnt > tile_cnt)) begin
                    t_cnt <= 5'd0; dr <= 2'd0; dc <= 2'd0;
                    fetch_go <= (f_cnt < ntiles);   // overlap: fetch next tile
                    state <= S_COMPUTE;
                end
                S_COMPUTE: begin
                    if (t_cnt < 5'd9) begin
                        if (dc == 2'd2) begin dc <= 2'd0; dr <= dr + 2'd1; end
                        else dc <= dc + 2'd1;
                    end
                    t_cnt <= t_cnt + 5'd1;
                    if (t_cnt == 5'd23) begin   // 22 + 1 for the feed register
                        d_i <= 4'd0;
                        state <= S_DRAIN;
                    end
                end
                S_DRAIN: begin
                    if (d_i != 4'd0) begin      // stage 2 emits pixel d_i-1
                        if (d_pix[1:0] == 2'd3) begin
                            obuf_we    <= 1'b1;
                            obuf_waddr <= out_wa;
                            obuf_wdata <= {px, word_r};
                            out_wa     <= out_wa + 14'd1;
                        end else begin
                            word_r[8*d_pix[1:0] +: 8] <= px;
                        end
                    end
                    d_i <= d_i + 4'd1;
                    if (d_i == 4'd8) state <= S_CLEAR;
                end
                S_CLEAR: begin
                    tile_cnt <= tile_cnt + 20'd1;
                    if (tile_cnt + 20'd1 == ntiles) begin
                        busy <= 1'b0; done <= 1'b1;
                        state <= S_IDLE;
                    end else
                        state <= S_WAIT;
                end
                default: state <= S_IDLE;
            endcase
        end
    end
endmodule
