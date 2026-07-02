/* Application: loaded by the boot ROM at 0x2000. Stack grows down from
 * 0x40000 (top of the 256 KB BRAM); keep ~32 KB headroom above _ebss. */
ENTRY(_start)
MEMORY { RAM (rwx) : ORIGIN = 0x00002000, LENGTH = 0x36000 }
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
