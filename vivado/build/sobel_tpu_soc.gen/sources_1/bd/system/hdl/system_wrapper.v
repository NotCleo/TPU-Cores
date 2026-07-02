//Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
//Copyright 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2023.2 (lin64) Build 4029153 Fri Oct 13 20:13:54 MDT 2023
//Date        : Thu Jul  2 21:21:37 2026
//Host        : Maverick running 64-bit Ubuntu 24.04.3 LTS
//Command     : generate_target system_wrapper.bd
//Design      : system_wrapper
//Purpose     : IP block netlist
//--------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

module system_wrapper
   (btn,
    ck_rst,
    clk100,
    led,
    uart_rxd_out,
    uart_txd_in);
  input [3:0]btn;
  input ck_rst;
  input clk100;
  output [3:0]led;
  output uart_rxd_out;
  input uart_txd_in;

  wire [3:0]btn;
  wire ck_rst;
  wire clk100;
  wire [3:0]led;
  wire uart_rxd_out;
  wire uart_txd_in;

  system system_i
       (.btn(btn),
        .ck_rst(ck_rst),
        .clk100(clk100),
        .led(led),
        .uart_rxd_out(uart_rxd_out),
        .uart_txd_in(uart_txd_in));
endmodule
