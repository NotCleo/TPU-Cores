# ============================================================================
# build_all.tcl -- fully scripted Vivado 2023.2 build of the sobel-tpu SoC.
#
#   /opt/Vivado/2023.2/bin/vivado -mode batch -source build_all.tcl
#
# Creates the project, builds the block design programmatically (the exact
# same design docs/README.md walks through by hand in the IPI GUI), assigns
# the address map, runs synthesis -> implementation -> bitstream, and writes
# utilization / timing / power reports into vivado/reports/.
#
# Products:  vivado/build/         (project)
#            vivado/sobel_tpu.bit  (final bitstream)
#            vivado/reports/*.rpt
#
# Prereq: fw/build/bootrom.coe must exist (run `make` in fw/ first) -- it is
# baked into the 256 KB BRAM as the boot ROM.
# ============================================================================

set here      [file dirname [file normalize [info script]]]
set repo      [file normalize $here/..]
set proj_dir  $here/build
set part      xc7a100tcsg324-1
set coe_file  $repo/fw/build/bootrom.coe

if {![file exists $coe_file]} {
    error "bootrom.coe not found -- run 'make' in $repo/fw first"
}
file mkdir $here/reports

create_project sobel_tpu_soc $proj_dir -part $part -force

# ---- RTL sources (module-reference cells pull from these) ------------------
add_files [list \
    $repo/rtl/pe.v \
    $repo/rtl/systolic_array.v \
    $repo/rtl/postproc.v \
    $repo/rtl/sobel_tpu.v \
    $repo/rtl/picorv32_bd_wrapper.v \
    $repo/../picorv32/picorv32.v]
add_files -fileset constrs_1 $here/arty_a7_100t.xdc
update_compile_order -fileset sources_1

# ============================================================================
# Block design
# ============================================================================
create_bd_design "system"

# ---- external ports --------------------------------------------------------
create_bd_port -dir I -type clk -freq_hz 100000000 clk100
create_bd_port -dir I -type rst ck_rst
set_property CONFIG.POLARITY ACTIVE_LOW [get_bd_ports ck_rst]
create_bd_port -dir I uart_txd_in
create_bd_port -dir O uart_rxd_out
create_bd_port -dir I -from 3 -to 0 btn
create_bd_port -dir O -from 3 -to 0 led

# ---- clocking + reset ------------------------------------------------------
create_bd_cell -type ip -vlnv xilinx.com:ip:clk_wiz:6.0 clk_wiz_0
set_property -dict [list \
    CONFIG.PRIM_IN_FREQ {100.000} \
    CONFIG.CLKOUT1_REQUESTED_OUT_FREQ {100.000} \
    CONFIG.USE_LOCKED {true} \
    CONFIG.USE_RESET {false}] [get_bd_cells clk_wiz_0]

create_bd_cell -type ip -vlnv xilinx.com:ip:proc_sys_reset:5.0 rst_0
set_property CONFIG.C_EXT_RESET_HIGH {0} [get_bd_cells rst_0]

# ---- CPU + TPU as module references (no IP packaging needed) ---------------
create_bd_cell -type module -reference picorv32_bd cpu
create_bd_cell -type module -reference sobel_tpu tpu

# ---- Xilinx peripherals -----------------------------------------------------
create_bd_cell -type ip -vlnv xilinx.com:ip:smartconnect:1.0 axi_smc
set_property -dict [list CONFIG.NUM_SI {1} CONFIG.NUM_MI {4}] [get_bd_cells axi_smc]

create_bd_cell -type ip -vlnv xilinx.com:ip:axi_bram_ctrl:4.1 bram_ctrl
set_property -dict [list CONFIG.SINGLE_PORT_BRAM {1} CONFIG.DATA_WIDTH {32}] \
    [get_bd_cells bram_ctrl]

create_bd_cell -type ip -vlnv xilinx.com:ip:blk_mem_gen:8.4 bram
set_property -dict [list \
    CONFIG.use_bram_block {BRAM_Controller} \
    CONFIG.Load_Init_File {true} \
    CONFIG.Coe_File "$coe_file" \
    CONFIG.Fill_Remaining_Memory_Locations {true} \
    CONFIG.Remaining_Memory_Locations {0}] [get_bd_cells bram]

create_bd_cell -type ip -vlnv xilinx.com:ip:axi_uartlite:2.0 uart
set_property -dict [list CONFIG.C_BAUDRATE {230400} CONFIG.C_DATA_BITS {8}] \
    [get_bd_cells uart]

create_bd_cell -type ip -vlnv xilinx.com:ip:axi_gpio:2.0 gpio
set_property -dict [list \
    CONFIG.C_GPIO_WIDTH {4}  CONFIG.C_ALL_INPUTS {1} \
    CONFIG.C_IS_DUAL {1} \
    CONFIG.C_GPIO2_WIDTH {4} CONFIG.C_ALL_OUTPUTS_2 {1}] [get_bd_cells gpio]

# ---- clock & reset nets -----------------------------------------------------
connect_bd_net [get_bd_ports clk100] [get_bd_pins clk_wiz_0/clk_in1]
set clk [get_bd_pins clk_wiz_0/clk_out1]
foreach p {cpu/clk tpu/clk axi_smc/aclk bram_ctrl/s_axi_aclk \
           uart/s_axi_aclk gpio/s_axi_aclk rst_0/slowest_sync_clk} {
    connect_bd_net $clk [get_bd_pins $p]
}
connect_bd_net [get_bd_pins clk_wiz_0/locked] [get_bd_pins rst_0/dcm_locked]
connect_bd_net [get_bd_ports ck_rst] [get_bd_pins rst_0/ext_reset_in]
set rstn [get_bd_pins rst_0/peripheral_aresetn]
foreach p {cpu/resetn tpu/resetn axi_smc/aresetn bram_ctrl/s_axi_aresetn \
           uart/s_axi_aresetn gpio/s_axi_aresetn} {
    connect_bd_net $rstn [get_bd_pins $p]
}

# ---- AXI topology: cpu -> smartconnect -> 4 slaves --------------------------
connect_bd_intf_net [get_bd_intf_pins cpu/m_axi]      [get_bd_intf_pins axi_smc/S00_AXI]
connect_bd_intf_net [get_bd_intf_pins axi_smc/M00_AXI] [get_bd_intf_pins bram_ctrl/S_AXI]
connect_bd_intf_net [get_bd_intf_pins axi_smc/M01_AXI] [get_bd_intf_pins uart/S_AXI]
connect_bd_intf_net [get_bd_intf_pins axi_smc/M02_AXI] [get_bd_intf_pins gpio/S_AXI]
connect_bd_intf_net [get_bd_intf_pins axi_smc/M03_AXI] [get_bd_intf_pins tpu/s_axi]
connect_bd_intf_net [get_bd_intf_pins bram_ctrl/BRAM_PORTA] [get_bd_intf_pins bram/BRAM_PORTA]

# ---- board I/O ---------------------------------------------------------------
connect_bd_net [get_bd_ports uart_txd_in]  [get_bd_pins uart/rx]
connect_bd_net [get_bd_ports uart_rxd_out] [get_bd_pins uart/tx]
connect_bd_net [get_bd_ports btn] [get_bd_pins gpio/gpio_io_i]
connect_bd_net [get_bd_ports led] [get_bd_pins gpio/gpio2_io_o]

# ---- address map (must match fw/soc.h) --------------------------------------
proc seg_of {candidates} {
    foreach n $candidates {
        set s [get_bd_addr_segs -quiet $n]
        if {$s ne ""} { return $s }
    }
    error "no address segment found among: $candidates"
}
assign_bd_address -target_address_space [get_bd_addr_spaces cpu/m_axi] \
    [seg_of {bram_ctrl/S_AXI/Mem0}]              -offset 0x00000000 -range 256K
assign_bd_address -target_address_space [get_bd_addr_spaces cpu/m_axi] \
    [seg_of {gpio/S_AXI/Reg}]                    -offset 0x40000000 -range 64K
assign_bd_address -target_address_space [get_bd_addr_spaces cpu/m_axi] \
    [seg_of {uart/S_AXI/Reg}]                    -offset 0x40600000 -range 64K
assign_bd_address -target_address_space [get_bd_addr_spaces cpu/m_axi] \
    [seg_of {tpu/s_axi/reg0 tpu/s_axi/Reg tpu/s_axi/mem0}] \
                                                 -offset 0x44000000 -range 256K

validate_bd_design
save_bd_design

# ---- HDL wrapper as top ------------------------------------------------------
make_wrapper -files [get_files system.bd] -top
add_files -norecurse $proj_dir/sobel_tpu_soc.gen/sources_1/bd/system/hdl/system_wrapper.v
set_property top system_wrapper [current_fileset]
update_compile_order -fileset sources_1

# ============================================================================
# Synthesis -> implementation -> bitstream -> reports
# ============================================================================
launch_runs synth_1 -jobs 4
wait_on_run synth_1
if {[get_property PROGRESS [get_runs synth_1]] != "100%"} { error "synthesis failed" }

launch_runs impl_1 -to_step write_bitstream -jobs 4
wait_on_run impl_1
if {[get_property PROGRESS [get_runs impl_1]] != "100%"} { error "implementation failed" }

open_run impl_1
report_utilization    -file $here/reports/utilization.rpt
report_utilization    -hierarchical -file $here/reports/utilization_hier.rpt
report_timing_summary -file $here/reports/timing.rpt
report_power          -file $here/reports/power.rpt

file copy -force $proj_dir/sobel_tpu_soc.runs/impl_1/system_wrapper.bit $here/sobel_tpu.bit

set wns [get_property SLACK [get_timing_paths -max_paths 1 -nworst 1 -setup]]
puts "=============================================="
puts " BITSTREAM : $here/sobel_tpu.bit"
puts " Setup WNS : $wns ns  (>= 0 means 100 MHz closed)"
puts " Reports   : $here/reports/"
puts "=============================================="
