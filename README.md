# sobel-tpu

Sobel image-filtering accelerator SoC for the Digilent Arty A7-100T:
PicoRV32 (rv32im) + custom 8×8 output-stationary systolic array

**Full documentation: [docs/README.md](docs/README.md)** — architecture,
Vivado IPI walkthrough, bring-up runbook, metrics methodology

Quick start:
```bash
pip install -r host/requirements.txt
cd host && python3 prepare_image.py && python3 kernels.py && cd ..   # image + golden refs
make -C sim tpu          # RTL vs golden model (bit-exact) + TPU cycle count
make -C sim soc          # full-SoC sim: CPU + TPU cycle counts pre-board
make -C fw               # bootrom.coe + firmware.bin
vivado -mode batch -source vivado/build_all.tcl    # bitstream + reports
vivado -mode batch -source vivado/program.tcl      # program the board
cd host && python3 run_board.py --port /dev/ttyUSB1 --push-fw   # benchmark
```
