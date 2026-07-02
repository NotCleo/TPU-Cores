/* SIM build: no bootloader, app linked at reset address 0x0. */
ENTRY(_start)
MEMORY { RAM (rwx) : ORIGIN = 0x00000000, LENGTH = 0x38000 }
SECTIONS {
    .text : { *(.text.init) *(.text*) } > RAM
    .rodata : { *(.rodata*) *(.srodata*) } > RAM
    .data : { *(.data*) *(.sdata*) } > RAM
    .bss (NOLOAD) : {
        _sbss = .;
        *(.bss*) *(.sbss*) *(COMMON)
        . = ALIGN(4);
        _ebss = .;
    } > RAM
}
