# Program the Arty A7-100T over USB-JTAG:
#   /opt/Vivado/2023.2/bin/vivado -mode batch -source program.tcl
# (or run the same commands in the Hardware Manager Tcl console)
set here [file dirname [file normalize [info script]]]
set bit  $here/sobel_tpu.bit

open_hw_manager
connect_hw_server
open_hw_target
set dev [lindex [get_hw_devices xc7a100t*] 0]
current_hw_device $dev
set_property PROGRAM.FILE $bit $dev
program_hw_devices $dev
puts "programmed $bit -- DONE LED should be lit; BOOT banner on the UART"
close_hw_manager
