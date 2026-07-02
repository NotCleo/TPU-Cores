# Boot ROM entry -- lives at 0x0000_0000 (PicoRV32 PROGADDR_RESET), baked
# into the BRAM initialization (bootrom.coe) inside the bitstream.
    .section .text.init
    .global _start
_start:
    li  sp, 0x00040000        # top of 256 KB BRAM
    call bootmain
1:  j 1b
