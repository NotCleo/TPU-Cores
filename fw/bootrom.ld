/* Boot ROM: first 8 KB of the 256 KB BRAM (bitstream-initialized). */
ENTRY(_start)
MEMORY { ROM (rwx) : ORIGIN = 0x00000000, LENGTH = 0x2000 }
SECTIONS {
    .text : { *(.text.init) *(.text*) } > ROM
    .rodata : { *(.rodata*) *(.srodata*) } > ROM
    /* no .data/.bss allowed: keep the loader warm-reset safe */
    .data : { *(.data*) *(.sdata*) } > ROM
    ASSERT(SIZEOF(.data) == 0, "bootrom must not use .data")
    .bss : { *(.bss*) *(.sbss*) *(COMMON) } > ROM
    ASSERT(SIZEOF(.bss) == 0, "bootrom must not use .bss")
}
