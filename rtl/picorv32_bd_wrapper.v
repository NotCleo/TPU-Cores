// Thin wrapper around picorv32_axi so Vivado IP Integrator's "Add Module"
// (module-reference) flow infers a clean AXI4-Lite master interface named
// m_axi, with the PCPI/IRQ/trace ports tied off and the SoC parameters
// fixed in one place:
//
//   ENABLE_FAST_MUL/DIV = 1 -> real rv32im ISA with the fast (DSP) multiplier,
//                          a deliberately strong CPU baseline so the reported
//                          TPU speedup is honest (fw built with -march=rv32im)
//   BARREL_SHIFTER = 1  -> single-cycle shifts
//   ENABLE_COUNTERS(64) -> rdcycle[h] works: this is our CPU-side timer
//   PROGADDR_RESET = 0x0000_0000 -> boots from BRAM word 0 (boot ROM)
//   STACKADDR      = 0x0004_0000 -> top of the 256 KB BRAM
//
// Requires picorv32.v (from the picorv32 repo) in the project sources.

module picorv32_bd (
    (* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 clk CLK" *)
    (* X_INTERFACE_PARAMETER = "ASSOCIATED_BUSIF m_axi, ASSOCIATED_RESET resetn" *)
    input  wire        clk,
    (* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 resetn RST" *)
    (* X_INTERFACE_PARAMETER = "POLARITY ACTIVE_LOW" *)
    input  wire        resetn,
    output wire        trap,

    output wire        m_axi_awvalid,
    input  wire        m_axi_awready,
    output wire [31:0] m_axi_awaddr,
    output wire [2:0]  m_axi_awprot,
    output wire        m_axi_wvalid,
    input  wire        m_axi_wready,
    output wire [31:0] m_axi_wdata,
    output wire [3:0]  m_axi_wstrb,
    input  wire        m_axi_bvalid,
    output wire        m_axi_bready,
    output wire        m_axi_arvalid,
    input  wire        m_axi_arready,
    output wire [31:0] m_axi_araddr,
    output wire [2:0]  m_axi_arprot,
    input  wire        m_axi_rvalid,
    output wire        m_axi_rready,
    input  wire [31:0] m_axi_rdata
);
    picorv32_axi #(
        .ENABLE_COUNTERS   (1),
        .ENABLE_COUNTERS64 (1),
        .ENABLE_REGS_16_31 (1),
        .ENABLE_REGS_DUALPORT (1),
        .BARREL_SHIFTER    (1),
        .TWO_CYCLE_COMPARE (0),
        .TWO_CYCLE_ALU     (0),
        .COMPRESSED_ISA    (0),
        .CATCH_MISALIGN    (1),
        .CATCH_ILLINSN     (1),
        .ENABLE_MUL        (1),
        .ENABLE_FAST_MUL   (1),
        .ENABLE_DIV        (1),
        .ENABLE_IRQ        (0),
        .ENABLE_TRACE      (0),
        .PROGADDR_RESET    (32'h0000_0000),
        .PROGADDR_IRQ      (32'h0000_0010),
        .STACKADDR         (32'h0004_0000)
    ) u_cpu (
        .clk            (clk),
        .resetn         (resetn),
        .trap           (trap),

        .mem_axi_awvalid (m_axi_awvalid),
        .mem_axi_awready (m_axi_awready),
        .mem_axi_awaddr  (m_axi_awaddr),
        .mem_axi_awprot  (m_axi_awprot),
        .mem_axi_wvalid  (m_axi_wvalid),
        .mem_axi_wready  (m_axi_wready),
        .mem_axi_wdata   (m_axi_wdata),
        .mem_axi_wstrb   (m_axi_wstrb),
        .mem_axi_bvalid  (m_axi_bvalid),
        .mem_axi_bready  (m_axi_bready),
        .mem_axi_arvalid (m_axi_arvalid),
        .mem_axi_arready (m_axi_arready),
        .mem_axi_araddr  (m_axi_araddr),
        .mem_axi_arprot  (m_axi_arprot),
        .mem_axi_rvalid  (m_axi_rvalid),
        .mem_axi_rready  (m_axi_rready),
        .mem_axi_rdata   (m_axi_rdata),

        .pcpi_wr        (1'b0),
        .pcpi_rd        (32'b0),
        .pcpi_wait      (1'b0),
        .pcpi_ready     (1'b0),

        .irq            (32'b0)
    );
endmodule
