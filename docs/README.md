# Sobel Image-Filtering Accelerator on Arty A7-100T
### PicoRV32 RISC-V SoC + custom 8×8 systolic-array "TPU" — single bitstream, bare metal, one USB cable

A 240×240 grayscale image is uploaded from the laptop over UART, filtered with a
3×3 Sobel operator **twice** — in software on a PicoRV32 soft CPU, and on a custom
8×8 output-stationary systolic array — and the results (bit-exact against a NumPy
golden model) are downloaded back with cycle-accurate performance counters.

```
laptop ── micro-USB ──► [Arty A7-100T]
  (power + JTAG bitstream + UART data, one cable)

           ┌──────────────────────────────────────────────────────────┐
 100 MHz   │  clk_wiz ──► 100 MHz system clock                        │
 xtal (E3)─┤  RESET btn (C2) ──► proc_sys_reset                       │
           │                                                          │
           │  PicoRV32 (rv32im, AXI4-Lite master)                     │
           │      │                                                   │
           │  SmartConnect 1×4                                        │
           │   ├── 0x0000_0000  AXI BRAM ctrl + 256 KB BRAM           │
           │   │                (boot ROM baked into bitstream)       │
           │   ├── 0x4000_0000  AXI GPIO   (4 btn in / 4 LED out)     │
           │   ├── 0x4060_0000  AXI UARTLite (230400 8N1)             │
           │   └── 0x4400_0000  sobel_tpu (custom RTL, AXI4-Lite)     │
           │            ├─ regs/kernels  +0x00000                     │
           │            ├─ input  BRAM   +0x10000 (64 KB, 242×242)    │
           │            ├─ output BRAM   +0x20000 (64 KB, 240×240)    │
           │            └─ 8×8 systolic array + patch fetch + postop  │
           └──────────────────────────────────────────────────────────┘
```

---

## 1. Design decisions (the "why" behind everything)

**Bare metal, not Linux.** PicoRV32 has **no MMU**, so it cannot run mainline
Linux at all — the `bbl.bin` + `riscv.dtb` flow you may have seen belongs to
RV64/MMU-capable cores (Rocket, VexRiscv-SMP, LiteX SoCs). Even on such a core,
building the SoC + DTS + kernel + userspace and debugging Ethernet would consume
days, not hours, and would add nothing to the accelerator story. Bare metal gives
deterministic cycle counts (`rdcycle`), a 556-byte bootloader, and zero moving
parts. If you ever want the Linux version, that's a different CPU (VexRiscv/LiteX
or MicroBlaze+PetaLinux) — the TPU IP would carry over unchanged.

**No DDR3/MIG, no Ethernet.** The entire working set (58,564 B padded input +
57,600 B output + ~120 KB firmware buffers) fits in on-chip BRAM (607.5 KB on the
-100T). MIG is the single most bring-up-hostile block in a first SoC; skipping it
removes the hardest pinout/timing/calibration risks. Ethernet solves a problem
(bandwidth) this project doesn't have — UART moves an image in ~2.5 s.

**Raw `.bin`, not JPEG.** JPEG decoding on a soft rv32 core is a project by
itself. The laptop does JPEG → grayscale → pad (Python/Pillow); the wire and the
FPGA see only raw bytes. Grayscale because the filter is 3×3×**1**: Sobel runs on
luminance (ITU-R 601: Y = 0.299R + 0.587G + 0.114B — Pillow's `convert("L")`).

**Padding: you were right.** 240×240 output with a 3×3 kernel needs a 242×242
input (1-pixel border). The pad is **edge-replicate**, not zeros — zero padding
creates a fake bright rim in a gradient image. So: 240×240×3 JPEG → 240×240×1
luma → **242×242×1** `image.bin` (58,564 bytes) → filter → 240×240 out. No border
loss.

**Kernel is dynamic.** 8 filter slots × 9 signed int8 taps live in TPU registers,
written over AXI at runtime (`kernel.bin`, 72 B, sent over UART). Sobel Gx/Gy
occupy slots 0/1; slots 2–7 are free (blur/sharpen/Laplacian demos included).
Nothing is hardcoded — one bitstream filters with any 3×3 int8 kernel.

**Sobel output = |Gx|+|Gy|.** The array computes Gx and Gy *simultaneously* (two
of its 8 filter columns); a fused post-op does |Gx|+|Gy| → shift → saturate to
uint8. This is the standard fast approximation of √(Gx²+Gy²); its accuracy is
quantified by the PSNR metric (≈28 dB vs the float reference — that number is a
property of the approximation, not an error in the hardware; the hardware is
bit-exact against the integer spec).

**One bitstream.** CPU and TPU live on the same AXI bus. This is an upgrade over
the reference `tpu-core` project, which benchmarked CPU and TPU in two separate
bitstreams glued by UART protocols.

**How data actually gets in/out.** The single micro-USB cable carries: (a) board
power, (b) JTAG — Vivado hardware manager loads the bitstream, (c) a completely
independent UART (FT2232 dual-channel). JTAG cannot conveniently write PicoRV32's
memory (no debug module in this core), so *all* data — firmware, kernels, image,
results — moves over the UART under `host/run_board.py`. The Arty enumerates as
two `ttyUSB` devices: the **second** one (usually `/dev/ttyUSB1`) is the UART.

---

## 2. Repository layout

```
sobel-tpu/
├── rtl/        pe.v, systolic_array.v, postproc.v, sobel_tpu.v (the accelerator)
│               picorv32_bd_wrapper.v (CPU config in one place)
├── sim/        tb_tpu.v (TPU-only, AXI BFM) · tb_soc.v (full SoC + firmware)
│               Makefile · compare.py
├── fw/         boot.S/boot.c (UART bootloader → bootrom.coe, baked in bitstream)
│               start.S/main.c/uart.c/print.c/sobel_sw.c (app → firmware.bin)
│               soc.h (memory map) · Makefile · linker scripts
├── host/       golden.py (bit-exact spec) · prepare_image.py · kernels.py
│               run_board.py (drives the whole benchmark) · requirements.txt
├── vivado/     build_all.tcl (scripted BD→bitstream) · arty_a7_100t.xdc
│               program.tcl · reports/ (generated)
└── docs/       this file
```

---

## 3. Resource budgeting — the method, then the numbers

Before designing, bound the problem against the datasheet (board manual /
Artix-7 datasheet). For the **XC7A100T**: 63,400 LUTs, 126,800 FFs,
**135 RAMB36** (607.5 KB), **240 DSP48E1**, 6 CMTs.

Estimate each block *before* building:

| block | estimate | reasoning |
|---|---|---|
| 8×8 MAC array | 64 DSPs | one 9×8 signed multiply-accumulate per PE maps to one DSP48E1 |
| CPU BRAM 256 KB | 64 RAMB36 | 256 KB ÷ 4 KB per RAMB36 |
| TPU in+out BRAM 2×64 KB | 32 RAMB36 | inferred from the two 16K×32 arrays |
| PicoRV32 | ~2–3 K LUT | known from its README |
| SmartConnect + BRAM ctrl + UART + GPIO | ~3–5 K LUT | typical AXI-Lite fabric |
| TPU control/fetch/skew | ~2–4 K LUT, ~3 K FF | window regs 2×384 FF + skew 2×~1 K |

Totals ≈ 10–15 K LUT (≈20 %), 96/135 RAMB36 (**71 % — BRAM is the binding
resource**), 64+4/240 DSP (≈28 %). Comfortable on the -100T; **does not fit an
-35T** (only 50 RAMB36) without shrinking the CPU RAM. After implementation,
verify against `vivado/reports/utilization.rpt` — the flow writes it
automatically. That "estimate → implement → check report" loop *is* the
resource-planning skill.

**Measured (post-route, Vivado 2023.2, XC7A100T, 100 MHz, WNS +0.550 ns):**

| resource | used | available | % |
|---|---|---|---|
| Slice LUTs | 4,289 | 63,400 | 6.8 % |
| Slice Registers | 4,567 | 126,800 | 3.6 % |
| Block RAM tiles | 96 | 135 | **71.1 %** |
| DSP48E1 | 133 | 240 | 55.4 % |

Total on-chip power 0.486 W (0.383 W dynamic + 0.103 W static). Notes: BRAM is
the binding resource exactly as estimated. DSPs came in at 133, not 64+5 — with
`(* use_dsp = "yes" *)` Vivado maps each PE's multiply *and* its 20-bit
accumulator into DSP48 resources (2 per PE). And the attribute matters: without
it, Vivado's auto threshold left the small 9×8 multiplies in fabric LUTs
(6.5 K extra LUTs and a failed timing path through the carry chains).

---

## 4. The TPU microarchitecture

**Mapping Sobel onto a systolic array.** A 3×3 convolution is a length-9 dot
product per pixel (im2col). As a GEMM: `C[8 px × 8 filters] = A[8×9] × B[9×8]`.
K = 9 exceeds the 8 rows of a weight-stationary array (the `tpu-core` mapping),
so this design is **output-stationary**: each PE privately accumulates one
(pixel, filter) pair while activations flow left→right and weights top→bottom.
Diagonal skew registers align element k of both operands at PE(i,j) on cycle
k+i+j. After K+7+7 = 23 cycles every accumulator holds a finished dot product.
Zeros are fed outside the K window, so accumulators self-hold (acc += 0) with no
valid-signal plumbing — one DSP48 per PE.

**Per tile of 8 output pixels** (240 ÷ 8 = 30 tiles/row, 7200 tiles/frame):

| phase | cycles | what happens |
|---|---|---|
| FETCH | 13 (hidden) | 12 word-reads pull the 3×16-byte window into a ping-pong bank while the *previous* tile computes |
| COMPUTE | 24 | 9 taps streamed through the registered feed + skewed array |
| DRAIN | 9 | 2-stage: registered accumulator select, then postproc (\|Gx\|+\|Gy\| → shift → sat) packing 4 px/word into output BRAM |
| CLEAR | 1 | zero accumulators |

Measured: **252,015 cycles / frame = 4.38 cycles/pixel = 2.520 ms @ 100 MHz**
(exact, from RTL simulation; the hardware CYCLES register reports the same).
Two of those cycles/tile are timing-closure pipeline stages added after the
first implementation run showed the accumulator-drain mux and the bank-select
feed as the critical paths at 100 MHz — a worked example of the
"close timing by pipelining, pay latency" trade.

**Why the TPU owns its buffers.** The IP contains its own input/output BRAMs
(AXI window +0x10000/+0x20000). The engine therefore never touches the system
bus while computing — no DMA/AXI-master complexity, no bus contention with the
CPU — at the cost of an explicit copy-in, which the firmware measures and
reports separately (honest end-to-end accounting).

**Numeric contract** (`host/golden.py` is the specification; RTL and C both
match it bit-exactly): uint8 pixels zero-extended to 9-bit signed × int8 taps →
20-bit accumulators (worst case 9·127·255 = 291,465 < 2¹⁹, never overflows).

---

## 5. Memory map (single source of truth: `fw/soc.h` = `build_all.tcl`)

| base | block | notes |
|---|---|---|
| `0x0000_0000` | 256 KB BRAM | boot ROM at 0x0 (in bitstream); app loaded at `0x2000`; stack top `0x4_0000` |
| `0x4000_0000` | AXI GPIO | ch1 +0x0: btn[3:0] in · ch2 +0x8: led[3:0] out |
| `0x4060_0000` | AXI UARTLite | RX +0, TX +4, STAT +8 (bit0 rx-valid, bit3 tx-full) |
| `0x4400_0000` | sobel_tpu | CTRL 0x00 · STATUS 0x04 · IMG_W/H 0x08/0x0C · POST 0x10 · CYCLES 0x14 · MAGIC 0x18 ("STPU") · kernels 0x200+s·0x40+t·4 · ibuf +0x10000 · obuf +0x20000 |

---

## 6. Vivado: scripted build (recommended) and manual IPI walkthrough

### 6.1 Scripted (what you'll actually run)

```bash
make -C fw                       # bootrom.coe + firmware.bin
cd vivado
/opt/Vivado/2023.2/bin/vivado -mode batch -source build_all.tcl
# → vivado/sobel_tpu.bit + reports/{utilization,timing,power}.rpt  (~20-40 min)
```

### 6.2 Manual IPI walkthrough (the same design, built by hand — for learning)

1. **Project**: New Project → RTL project, part `xc7a100tcsg324-1` (no board
   files needed). Add sources: the five files in `rtl/` **plus**
   `picorv32/picorv32.v`. Add constraints: `vivado/arty_a7_100t.xdc`.
2. **Create Block Design** (`system`). IP integrator canvas opens.
3. **CPU and TPU without packaging**: right-click canvas → **Add Module…** →
   pick `picorv32_bd`, again for `sobel_tpu`. This is the *module reference*
   flow: Vivado scans the RTL, sees ports named `m_axi_*` / `s_axi_*`, and
   infers AXI interfaces automatically (the `X_INTERFACE_INFO` attributes in the
   wrappers make clock/reset association explicit). The alternative — Tools →
   Create and Package New IP — produces a versioned, reusable IP core; it's what
   you'd do to ship the TPU to another team, and pure overhead for a one-repo
   project.
4. **Clocking Wizard** (`clk_wiz`): double-click to configure → Input 100 MHz;
   one output, 100 MHz; **Reset: unused**, Locked: used. (Board input E3 is a
   clean oscillator; the MMCM here mainly buys you an easy knob — if timing ever
   failed you'd retarget to 50 MHz by changing one number.)
5. **Processor System Reset** (`proc_sys_reset`): `ext_reset_in` polarity
   active-Low (the red RESET button idles high). Connect `slowest_sync_clk` ←
   clk_wiz `clk_out1`, `dcm_locked` ← clk_wiz `locked`.
6. **AXI SmartConnect**: 1 slave port, 4 master ports, 1 clock. (SmartConnect
   vs the older AXI Interconnect: same job; SmartConnect is the current tool's
   default and auto-adapts widths/protocols.)
7. **AXI BRAM Controller**: Single-port BRAM, data width 32. Add a **Block
   Memory Generator**: mode *BRAM Controller*, and in *Other Options* → load
   init file → `fw/build/bootrom.coe`, check *Fill Remaining Memory Locations*
   = 0. Connect `bram_ctrl/BRAM_PORTA → bram/BRAM_PORTA` (Run Connection
   Automation offers this).
8. **AXI Uartlite**: 230400 baud, 8 data bits, no parity. **AXI GPIO**: dual
   channel — ch1 width 4, *All Inputs* (buttons); ch2 width 4, *All Outputs*
   (LEDs).
9. **External ports**: make `clk_in1` external and rename to `clk100`; same for
   `ck_rst` (reset button), `uart/rx → uart_txd_in`, `uart/tx → uart_rxd_out`,
   `gpio_io_i → btn[3:0]`, `gpio2_io_o → led[3:0]`. Port names must equal the
   XDC `get_ports` names — that's the whole pin-planning contract (§7).
10. **Wire everything**: clk_wiz `clk_out1` → every `*_aclk`/`clk`;
    `peripheral_aresetn` → every `*_aresetn`/`resetn`; `cpu/m_axi →
    axi_smc/S00_AXI`; `M00→bram_ctrl`, `M01→uart`, `M02→gpio`, `M03→tpu/s_axi`.
11. **Address Editor** (this is where "what is mapped where" is decided — the
    CPU has one flat 32-bit space and each slave gets a window): BRAM
    `0x0000_0000`/256K, GPIO `0x4000_0000`/64K, UART `0x4060_0000`/64K, TPU
    `0x4400_0000`/**256K** (the TPU's 18 address bits = regs + two 64 KB BRAM
    windows). Any change here must be mirrored in `fw/soc.h`.
12. **Validate** (F6) — expect zero errors. Sources → right-click `system.bd` →
    **Create HDL Wrapper** (Let Vivado manage) → set `system_wrapper` as top.
13. **Generate Bitstream** (runs synth + impl). Then check §8's reports.

### 6.3 What runs where — the mapping cheat-sheet

| thing | lives in | put there by |
|---|---|---|
| boot ROM (556 B) | BRAM init contents | `bootrom.coe` inside the bitstream |
| application firmware | BRAM @ `0x2000` | boot ROM, received over UART |
| image (padded) | app `.bss` + TPU ibuf | UART 'I' command, then measured copy |
| kernels | TPU registers | UART 'K' command → AXI writes |
| CPU result | app `.bss` @ RAM | `sobel_sw.c` |
| TPU result | TPU obuf BRAM | drain unit; CPU only reads it out |

---

## 7. Pin planning explainer

An FPGA pin constraint is just a 3-way match: **schematic net → package pin →
your top-level port name**. The board manual/schematic says the 100 MHz
oscillator drives pin `E3`, the FT2232 UART TX/RX are `A9`/`D10`, buttons are
`D9 C9 B9 B8`, LEDs `H5 J5 T9 T10`, reset is `C2` — all 3.3 V banks, hence
`IOSTANDARD LVCMOS33`. `arty_a7_100t.xdc` binds those to the BD wrapper's port
names. This design uses 14 pins total; DDR/Ethernet pinout (the painful part of
Arty designs) is entirely avoided. If a port name in the BD doesn't exactly
match a `get_ports` name in the XDC, you get an "unconstrained port" DRC —
that's the first thing to check on any pin problem. The `create_clock` line
declares the 100 MHz input to the timing engine; everything downstream of the
MMCM is derived automatically.

---

## 8. Bring-up runbook (board day)

```bash
# 0. once: pip install -r host/requirements.txt ; sudo usermod -aG dialout $USER
# 1. prepare an image (or omit --image for the built-in test pattern)
cd host && python3 prepare_image.py --image yourphoto.jpg && python3 kernels.py && cd ..
# 2. build firmware (seconds) -- bitstream already contains only the boot ROM
make -C fw
# 3. program the FPGA (cable = power + JTAG + UART)
/opt/Vivado/2023.2/bin/vivado -mode batch -source vivado/program.tcl
# 4. run everything: push firmware, upload, benchmark both engines, download,
#    verify bit-exactness, print the metrics table
cd host && python3 run_board.py --port /dev/ttyUSB1 --push-fw
#    (press the red RESET button when it says so; LED0 on = boot ROM waiting)
# 5. optional: watch it by hand -- picocom -b 230400 /dev/ttyUSB1
#    then BTN0 = CPU run, BTN1 = TPU run, results printed to the terminal
```

Firmware iteration loop: edit `fw/*.c` → `make -C fw` → press RESET →
`run_board.py --push-fw` — **Vivado is never re-run** (that's the point of the
boot ROM).

**Troubleshooting.**
- *No `BOOT` banner*: wrong tty (use the second one), or bitstream not loaded
  (DONE LED), or another program holds the port (close Vivado's serial console).
- *`ERR` from bootloader*: line noise/stale bytes — just rerun; the loader
  re-arms itself.
- *`TPU MAGIC mismatch`*: address map drift — diff `fw/soc.h` vs the BD Address
  Editor.
- *Timing fails at 100 MHz* (check `reports/timing.rpt`, WNS ≥ 0): retarget
  clk_wiz to 50 MHz and rerun — every cycle-count result is unchanged, only ms
  double.
- *Garbled UART*: baud mismatch — firmware/host assume 230400 (set in the
  UARTLite IP, fixed at synthesis).

---

## 9. Metrics methodology — measured without the board

Everything except wall-clock UART time is measurable pre-hardware; board runs
should reproduce these numbers exactly (same RTL, same firmware, and the sim's
RAM model approximates the SmartConnect+BRAM latency):

- **TPU latency**: RTL sim (`sim/ make tpu`) + the hardware CYCLES register.
- **CPU latency**: full-SoC sim (`sim/ make soc`) — real PicoRV32 executing the
  real firmware, `rdcycle` deltas printed over the simulated UART.
- **Correctness**: both outputs bit-exact vs `golden.py` (and each other).
- **PSNR**: vs the float √(Gx²+Gy²) reference — quantifies the |Gx|+|Gy|
  approximation (~28 dB; image-dependent).
- **Utilization/timing/power**: Vivado post-route reports (no board needed).

Ops accounting: 240·240 px × 2 kernels × 9 MACs × 2 ops = **2.074 MOP/frame**.
Peak array throughput: 64 MACs × 100 MHz × 2 = **12.8 GOPS**; the Sobel workload
can use at most 2 of 8 filter columns (K=9, N=2 of 8 ⇒ 18/64 useful MACs during
feed), so low *effective* GOPS on this workload is a mapping property, not a
design flaw — quote effective and peak together, and note the array runs 8
filters for free in the same 2.4 ms.

### Measured results (full-SoC Verilator simulation @ 100 MHz, real photo,
### real firmware on the real PicoRV32 RTL; all outputs bit-exact vs golden)

| engine | cycles | ms | cycles/px | effective GOPS |
|---|---|---|---|---|
| CPU generic (rv32im, dynamic kernels — same math as TPU) | 71,492,284 | 714.9 | 1,241 | 0.0029 |
| CPU optimized (hardcoded Sobel, sliding window, 3 loads/px) | 15,430,757 | 154.3 | 267.9 | 0.0134 |
| TPU end-to-end (copy-in + compute) | 998,804 | 9.99 | 17.3 | 0.208 |
| — copy-in (CPU word-copies 58 KB over AXI) | 746,734 | 7.47 | | |
| — compute (rdcycle around start→done, incl. polling) | 252,070 | 2.521 | | |
| **TPU compute (hardware CYCLES counter)** | **252,015** | **2.520** | **4.38** | **0.823** |

**Speedups:** vs CPU generic **283.7× compute / 71.6× end-to-end**; vs the
hand-optimized CPU **61.2× compute / 15.4× end-to-end**.

Reading the numbers honestly: (1) the CPU is fetch-latency bound — every
instruction crosses SmartConnect+BRAM-controller AXI latency, which is the
realistic cost of this SoC topology, not an artificially weak baseline (the
ISA-level optimized version is quoted too). (2) End-to-end is dominated by the
copy-in: the CPU hand-carries 14,641 words into the TPU's input BRAM (~51
cycles/word, again mostly instruction fetches). The obvious future work — an
AXI DMA or letting the UART handler write straight into the TPU buffer — would
collapse that 7.5 ms and push end-to-end speedup toward the compute number.
(3) Cycle counts are image-independent (fixed dataflow, zero data-dependent
branches in the TPU — its variance is exactly 0).

---

## 10. CV entry

Ready-to-paste LaTeX (matching the `\item \href{...} \hfill` + 3-bullet style):
**`docs/cv_entry.tex`** — all numbers already filled from the measured results
above. On the honesty question: the entry says *"verified bit-exact in
cycle-accurate full-SoC simulation"* and *"closed post-route timing"* — both
true today, no board required, and cycle counts/utilization/power are exactly
what the board will report (same RTL, same firmware, deterministic dataflow).
When the board arrives and `run_board.py` reproduces the table, append
"validated on hardware".

---

## 11. FAQ recap

- **"Would Linux make my life easier?"** No — impossible on this core (no MMU),
  and on a Linux-capable core it would cost days for zero accelerator insight.
- **"One bitstream?"** Yes. Buttons select CPU/TPU runs; the host script does
  the same over UART.
- **"How do I upload images?"** UART (same USB cable as JTAG/power), 230400
  baud, ~2.5 s per image, checksummed.
- **"Kernel hardcoded?"** No — 72 bytes of int8 taps written to TPU registers
  at runtime.
- **"Can I gauge metrics without the board?"** Yes — every number except UART
  wall-clock comes from simulation + Vivado reports (see §9).
