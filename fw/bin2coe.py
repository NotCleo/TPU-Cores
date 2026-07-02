#!/usr/bin/env python3
"""bin -> Xilinx .coe (32-bit words, little-endian) for BRAM initialization,
and bin -> plain hex word list for Verilog $readmemh."""
import sys


def words(data):
    data = data + b"\x00" * ((-len(data)) % 4)
    for i in range(0, len(data), 4):
        yield int.from_bytes(data[i:i + 4], "little")


def main():
    mode, src, dst = sys.argv[1], sys.argv[2], sys.argv[3]
    with open(src, "rb") as f:
        data = f.read()
    with open(dst, "w") as f:
        if mode == "coe":
            f.write("memory_initialization_radix=16;\n")
            f.write("memory_initialization_vector=\n")
            ws = list(words(data))
            f.write(",\n".join(f"{w:08x}" for w in ws) + ";\n")
        else:  # hex
            for w in words(data):
                f.write(f"{w:08x}\n")
    print(f"{dst}: {len(data)} bytes -> {(len(data) + 3) // 4} words")


if __name__ == "__main__":
    main()
