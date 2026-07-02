// Processing Element -- output-stationary MAC cell of the 8x8 systolic array.
//
// Dataflow: activation `a` (9-bit signed: uint8 pixel zero-extended) enters
// from the left and is passed one PE to the right per cycle; weight `b`
// (int8 kernel tap) enters from the top and is passed one PE down per cycle.
// Every cycle the PE accumulates a_in*b_in into its private accumulator.
// Feeding zeros outside the K-tap window makes explicit valid gating
// unnecessary (0*x contributes nothing), which keeps the cell at exactly
// one DSP48E1: (9x8 signed multiply) + (20-bit accumulate).
//
// Accumulator width: worst case |acc| <= 9 taps * 127 * 255 = 291,465
// < 2^19, so 20-bit signed never overflows for any int8 kernel.

(* use_dsp = "yes" *)   // 9x8 mult is below Vivado's auto-DSP threshold;
                        // force it so mult+acc land in one DSP48E1
module pe (
    input  wire               clk,
    input  wire               clear,   // synchronous: zero acc + pass-through regs
    input  wire signed [8:0]  a_in,
    input  wire signed [7:0]  b_in,
    output reg  signed [8:0]  a_out,
    output reg  signed [7:0]  b_out,
    output reg  signed [19:0] acc
);
    wire signed [16:0] prod = a_in * b_in;

    always @(posedge clk) begin
        if (clear) begin
            a_out <= 9'sd0;
            b_out <= 8'sd0;
            acc   <= 20'sd0;
        end else begin
            a_out <= a_in;
            b_out <= b_in;
            acc   <= acc + {{3{prod[16]}}, prod};
        end
    end
endmodule
