# Makefile for Verilator
VERILATOR = verilator
VFLAGS = --cc --exe --sv --trace --build -Wall --timing

# Sources
SRCS = axi4_lite_master.sv axi4_lite_slave.sv axi4_lite_top.sv main.cpp

# Top module
TOP = axi4_lite_top

# Build
build: obj_dir
	$(VERILATOR) $(VFLAGS) $(SRCS) --top-module $(TOP) -o sim

obj_dir:
	mkdir -p obj_dir

# Run the simulation
run: build
	./sim

# Clean
clean:
	rm -rf obj_dir sim *.vcd

.PHONY: all build run clean

