# Firmware build. Products:
#   build/bootrom.coe      -> BRAM init inside the bitstream (Vivado build)
#   build/firmware.bin     -> pushed over UART by host/run_board.py
#   build/firmware_sim.hex -> full-RAM image for sim/tb_soc.v ($readmemh)
#
# Toolchain: Ubuntu's riscv64-unknown-elf-gcc has rv32 multilibs.
CROSS   := riscv64-unknown-elf-
CC      := $(CROSS)gcc
OBJCOPY := $(CROSS)objcopy
OBJDUMP := $(CROSS)objdump

ARCH    := -march=rv32im -mabi=ilp32
CFLAGS  := $(ARCH) -O2 -Wall -Wextra -ffreestanding -nostdlib -fno-builtin
LDFLAGS := -nostartfiles -Wl,--no-warn-rwx-segments -lgcc

APP_SRC  := start.S main.c uart.c print.c sobel_sw.c
BOOT_SRC := boot.S boot.c uart.c

.PHONY: all sim clean size
all: build/bootrom.coe build/firmware.bin size
sim: build/firmware_sim.hex

build:
	mkdir -p build

build/bootrom.elf: $(BOOT_SRC) bootrom.ld soc.h | build
	$(CC) $(CFLAGS) -T bootrom.ld $(BOOT_SRC) $(LDFLAGS) -o $@

build/firmware.elf: $(APP_SRC) app.ld soc.h | build
	$(CC) $(CFLAGS) -T app.ld $(APP_SRC) $(LDFLAGS) -o $@

# SIM build embeds the test image and self-runs (no UART protocol needed)
build/firmware_sim.elf: $(APP_SRC) sim.ld soc.h ../host/out/image_c.h | build
	$(CC) $(CFLAGS) -DSIM -I../host/out -T sim.ld $(APP_SRC) $(LDFLAGS) -o $@

../host/out/image_c.h:
	cd ../host && python3 prepare_image.py

build/%.bin: build/%.elf
	$(OBJCOPY) -O binary $< $@

build/bootrom.coe: build/bootrom.bin
	python3 bin2coe.py coe $< $@

build/firmware_sim.hex: build/firmware_sim.bin
	python3 bin2coe.py hex $< $@

size: build/bootrom.elf build/firmware.elf
	@echo "--- bootrom ---"; $(CROSS)size build/bootrom.elf
	@echo "--- firmware ---"; $(CROSS)size build/firmware.elf

disasm: build/firmware.elf
	$(OBJDUMP) -d $< | less

clean:
	rm -rf build
