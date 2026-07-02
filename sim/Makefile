# RTL simulation: TPU-only bit-exactness + cycle count (task: pre-board metrics)
#
#   make tpu   -> compile & run tb_tpu (iverilog), compare against golden model
#   make soc   -> full SoC sim: picorv32 + firmware + TPU (see tb_soc.v)
#   make clean

RTL      := ../rtl/pe.v ../rtl/systolic_array.v ../rtl/postproc.v ../rtl/sobel_tpu.v
HOST     := ../host
OUT      := $(HOST)/out
PICORV32 := ../../picorv32/picorv32.v

.PHONY: all tpu soc clean images

all: tpu

images:
	cd $(HOST) && python3 prepare_image.py

$(OUT)/image.hex:
	cd $(HOST) && python3 prepare_image.py

tpu: $(OUT)/image.hex
	iverilog -g2005-sv -o tb_tpu.vvp \
	  -DIMG_HEX=\"$(OUT)/image.hex\" -DOUT_BIN=\"tpu_out.bin\" \
	  tb_tpu.v $(RTL)
	vvp tb_tpu.vvp
	python3 compare.py tpu_out.bin $(OUT)/golden_int.bin $(OUT)/golden_float.png

# Verilator (not iverilog): the CPU baseline is ~90M cycles -- Verilator does
# it in under a minute, iverilog would take hours.
soc: $(OUT)/image.hex ../fw/build/firmware_sim.hex
	verilator --binary --timing -Wno-fatal -Wno-lint -Wno-style -Wno-TIMESCALEMOD -j 4 \
	  -DFW_HEX='"../fw/build/firmware_sim.hex"' -DOUT_BIN='"soc_tpu_out.bin"' \
	  -DCPU_BIN='"soc_cpu_out.bin"' \
	  --top-module tb_soc -o tb_soc_vl \
	  tb_soc.v $(RTL) ../rtl/picorv32_bd_wrapper.v $(PICORV32)
	./obj_dir/tb_soc_vl
	python3 compare.py soc_tpu_out.bin $(OUT)/golden_int.bin
	python3 compare.py soc_cpu_out.bin $(OUT)/golden_int.bin

../fw/build/firmware_sim.hex:
	$(MAKE) -C ../fw sim

clean:
	rm -rf obj_dir *.vvp *.vcd tpu_out.bin soc_tpu_out.bin soc_cpu_out.bin
