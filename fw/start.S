# Application entry. Board build: linked at 0x2000, entered by the boot ROM.
# SIM build: linked at 0x0, entered directly at reset (no bootloader in sim).
    .section .text.init
    .global _start
_start:
    li  sp, 0x00040000        # fresh stack at top of RAM
    # zero .bss (image/output buffers live here)
    la  t0, _sbss
    la  t1, _ebss
1:  bgeu t0, t1, 2f
    sw  zero, 0(t0)
    addi t0, t0, 4
    j   1b
2:  call main
3:  j 3b
