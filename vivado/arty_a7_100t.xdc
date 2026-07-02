# Arty A7-100T pin constraints for the sobel-tpu SoC (subset of the Digilent
# master XDC -- only the 14 pins this design actually uses).
# Pin planning here is just: match each top-level port of the generated BD
# wrapper (system_wrapper) to the FPGA package pin the board schematic wired
# that function to, and declare the I/O standard of the bank (all 3.3 V).

# 100 MHz crystal oscillator -> clk_wiz input
set_property -dict {PACKAGE_PIN E3 IOSTANDARD LVCMOS33} [get_ports clk100]
create_clock -period 10.000 -name sys_clk [get_ports clk100]

# red RESET button (active low) -> proc_sys_reset ext_reset_in
set_property -dict {PACKAGE_PIN C2 IOSTANDARD LVCMOS33} [get_ports ck_rst]

# USB-UART bridge (FT2232HQ channel B). Names are from the DTE (PC) view:
#   uart_txd_in  = PC transmits, FPGA receives  (A9)
#   uart_rxd_out = FPGA transmits, PC receives  (D10)
set_property -dict {PACKAGE_PIN A9  IOSTANDARD LVCMOS33} [get_ports uart_txd_in]
set_property -dict {PACKAGE_PIN D10 IOSTANDARD LVCMOS33} [get_ports uart_rxd_out]

# user push buttons BTN0..BTN3
set_property -dict {PACKAGE_PIN D9 IOSTANDARD LVCMOS33} [get_ports {btn[0]}]
set_property -dict {PACKAGE_PIN C9 IOSTANDARD LVCMOS33} [get_ports {btn[1]}]
set_property -dict {PACKAGE_PIN B9 IOSTANDARD LVCMOS33} [get_ports {btn[2]}]
set_property -dict {PACKAGE_PIN B8 IOSTANDARD LVCMOS33} [get_ports {btn[3]}]

# user LEDs LD4..LD7
set_property -dict {PACKAGE_PIN H5 IOSTANDARD LVCMOS33} [get_ports {led[0]}]
set_property -dict {PACKAGE_PIN J5 IOSTANDARD LVCMOS33} [get_ports {led[1]}]
set_property -dict {PACKAGE_PIN T9 IOSTANDARD LVCMOS33} [get_ports {led[2]}]
set_property -dict {PACKAGE_PIN T10 IOSTANDARD LVCMOS33} [get_ports {led[3]}]

# configuration bank voltage (silences DRC NSTD/UCIO-type warnings)
set_property CFGBVS VCCO [current_design]
set_property CONFIG_VOLTAGE 3.3 [current_design]

# async inputs, timing-irrelevant
set_false_path -from [get_ports {btn[*]}]
set_false_path -from [get_ports uart_txd_in]
set_false_path -to [get_ports {led[*]}]
set_false_path -to [get_ports uart_rxd_out]
set_false_path -from [get_ports ck_rst]
