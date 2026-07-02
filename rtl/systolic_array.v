// 8x8 output-stationary systolic array with built-in input skew.
//
// Computes, per tile, the 8x8 matrix C = A x B where
//   A is 8 (rows = output pixels) x K (im2col patch elements, K = 9 taps)
//   B is K x 8 (cols = filter slots)
// The engine presents *unskewed* columns of A (a_flat: one 9-bit activation
// per row) and rows of B (b_flat: one int8 weight per filter column) for
// K consecutive cycles, then zeros. Diagonal skew registers inside this
// module delay row i by i cycles and column j by j cycles so that PE(i,j)
// sees element k of both operands at cycle k+i+j -- the classic systolic
// alignment. After K + 7 + 7 cycles (23 for K=9) every accumulator holds
// its finished dot product; with zero inputs thereafter the accumulators
// are self-holding (acc += 0), so results can be drained at leisure.
//
// acc_flat packs acc[i][j] at bit offset ((i*8+j)*20), 20-bit signed each.

module systolic_array (
    input  wire         clk,
    input  wire         clear,     // zero all accumulators, skew and pipe regs
    input  wire [71:0]  a_flat,    // 8 rows x 9-bit activation (row i at [i*9 +: 9])
    input  wire [63:0]  b_flat,    // 8 cols x 8-bit weight     (col j at [j*8 +: 8])
    output wire [1279:0] acc_flat  // 64 x 20-bit accumulators
);
    genvar gi, gj, gk;

    // ------------------------------------------------------------------
    // Skew registers: row i -> i-deep delay on a, column j -> j-deep on b
    // ------------------------------------------------------------------
    wire signed [8:0] a_skew [0:7];
    wire signed [7:0] b_skew [0:7];

    generate
        for (gi = 0; gi < 8; gi = gi + 1) begin : g_askew
            if (gi == 0) begin : g_pass
                assign a_skew[0] = a_flat[8:0];
            end else begin : g_dly
                reg signed [8:0] dly [0:gi-1];
                integer s;
                always @(posedge clk) begin
                    if (clear) begin
                        for (s = 0; s < gi; s = s + 1) dly[s] <= 9'sd0;
                    end else begin
                        dly[0] <= a_flat[gi*9 +: 9];
                        for (s = 1; s < gi; s = s + 1) dly[s] <= dly[s-1];
                    end
                end
                assign a_skew[gi] = dly[gi-1];
            end
        end
        for (gj = 0; gj < 8; gj = gj + 1) begin : g_bskew
            if (gj == 0) begin : g_pass
                assign b_skew[0] = b_flat[7:0];
            end else begin : g_dly
                reg signed [7:0] dly [0:gj-1];
                integer s;
                always @(posedge clk) begin
                    if (clear) begin
                        for (s = 0; s < gj; s = s + 1) dly[s] <= 8'sd0;
                    end else begin
                        dly[0] <= b_flat[gj*8 +: 8];
                        for (s = 1; s < gj; s = s + 1) dly[s] <= dly[s-1];
                    end
                end
                assign b_skew[gj] = dly[gj-1];
            end
        end
    endgenerate

    // ------------------------------------------------------------------
    // PE grid: a flows left->right, b flows top->down
    // ------------------------------------------------------------------
    // h wires: a-path, index [i][j] = input to PE(i,j); v wires: b-path
    wire signed [8:0] h [0:7][0:8];
    wire signed [7:0] v [0:8][0:7];

    generate
        for (gi = 0; gi < 8; gi = gi + 1) begin : g_edge_a
            assign h[gi][0] = a_skew[gi];
        end
        for (gj = 0; gj < 8; gj = gj + 1) begin : g_edge_b
            assign v[0][gj] = b_skew[gj];
        end

        for (gi = 0; gi < 8; gi = gi + 1) begin : g_row
            for (gj = 0; gj < 8; gj = gj + 1) begin : g_col
                pe u_pe (
                    .clk   (clk),
                    .clear (clear),
                    .a_in  (h[gi][gj]),
                    .b_in  (v[gi][gj]),
                    .a_out (h[gi][gj+1]),
                    .b_out (v[gi+1][gj]),
                    .acc   (acc_flat[(gi*8+gj)*20 +: 20])
                );
            end
        end
    endgenerate
endmodule
