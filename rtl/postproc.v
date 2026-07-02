// Fused post-processing unit -- combinational, one pixel per cycle at drain.
//
// Must match host/golden.py postproc() bit-exactly:
//   mode 0 SINGLE_ABS : px = sat255( |csel| >> shift )
//   mode 1 MAG        : px = sat255( (|c0| + |c1|) >> shift )   (Sobel |Gx|+|Gy|)
//   mode 2 SIGNED_BIAS: px = clamp 0..255 ( (csel >>> shift) + 128 )
// shift is a logical right shift on the non-negative magnitudes (modes 0/1)
// and an arithmetic shift in mode 2.

module postproc (
    input  wire signed [19:0] c0,     // accumulator, filter slot 0 (Gx)
    input  wire signed [19:0] c1,     // accumulator, filter slot 1 (Gy)
    input  wire signed [19:0] csel,   // accumulator, slot POST.colsel
    input  wire        [1:0]  mode,
    input  wire        [3:0]  shift,
    output reg         [7:0]  px
);
    wire [19:0] abs0 = c0[19]   ? (~c0   + 20'd1) : c0;
    wire [19:0] abs1 = c1[19]   ? (~c1   + 20'd1) : c1;
    wire [19:0] abss = csel[19] ? (~csel + 20'd1) : csel;

    wire [20:0] mag_sum = {1'b0, abs0} + {1'b0, abs1};

    wire [20:0] v_abs = {1'b0, abss} >> shift;
    wire [20:0] v_mag = mag_sum >> shift;
    // mode 2: arithmetic shift then +128, then clamp to [0,255]
    wire signed [20:0] v_bias = ({csel[19], csel} >>> shift) + 21'sd128;

    always @* begin
        case (mode)
            2'd0:    px = (v_abs > 21'd255) ? 8'd255 : v_abs[7:0];
            2'd1:    px = (v_mag > 21'd255) ? 8'd255 : v_mag[7:0];
            2'd2:    px = (v_bias < 21'sd0)   ? 8'd0
                        : (v_bias > 21'sd255) ? 8'd255 : v_bias[7:0];
            default: px = 8'd0;
        endcase
    end
endmodule
