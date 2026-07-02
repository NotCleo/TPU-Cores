// Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
// Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2023.2 (lin64) Build 4029153 Fri Oct 13 20:13:54 MDT 2023
// Date        : Thu Jul  2 21:22:24 2026
// Host        : Maverick running 64-bit Ubuntu 24.04.3 LTS
// Command     : write_verilog -force -mode synth_stub -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
//               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ system_cpu_0_stub.v
// Design      : system_cpu_0
// Purpose     : Stub declaration of top-level module interface
// Device      : xc7a100tcsg324-1
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
(* X_CORE_INFO = "picorv32_bd,Vivado 2023.2" *)
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix(clk, resetn, trap, m_axi_awvalid, m_axi_awready, 
  m_axi_awaddr, m_axi_awprot, m_axi_wvalid, m_axi_wready, m_axi_wdata, m_axi_wstrb, 
  m_axi_bvalid, m_axi_bready, m_axi_arvalid, m_axi_arready, m_axi_araddr, m_axi_arprot, 
  m_axi_rvalid, m_axi_rready, m_axi_rdata)
/* synthesis syn_black_box black_box_pad_pin="resetn,trap,m_axi_awvalid,m_axi_awready,m_axi_awaddr[31:0],m_axi_awprot[2:0],m_axi_wvalid,m_axi_wready,m_axi_wdata[31:0],m_axi_wstrb[3:0],m_axi_bvalid,m_axi_bready,m_axi_arvalid,m_axi_arready,m_axi_araddr[31:0],m_axi_arprot[2:0],m_axi_rvalid,m_axi_rready,m_axi_rdata[31:0]" */
/* synthesis syn_force_seq_prim="clk" */;
  input clk /* synthesis syn_isclock = 1 */;
  input resetn;
  output trap;
  output m_axi_awvalid;
  input m_axi_awready;
  output [31:0]m_axi_awaddr;
  output [2:0]m_axi_awprot;
  output m_axi_wvalid;
  input m_axi_wready;
  output [31:0]m_axi_wdata;
  output [3:0]m_axi_wstrb;
  input m_axi_bvalid;
  output m_axi_bready;
  output m_axi_arvalid;
  input m_axi_arready;
  output [31:0]m_axi_araddr;
  output [2:0]m_axi_arprot;
  input m_axi_rvalid;
  output m_axi_rready;
  input [31:0]m_axi_rdata;
endmodule
