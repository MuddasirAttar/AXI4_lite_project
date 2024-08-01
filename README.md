
# AXI4-Lite Master-Slave Project


![block_level](https://github.com/user-attachments/assets/dc9d7d4e-b0eb-4f9f-ab77-7e7eec7ad250)

This repository contains Verilog code for an AXI4-Lite Master-Slave system, along with a testbench and a Makefile for simulation using Verilator.

## Overview

The AXI4-Lite Master-Slave project demonstrates a simple implementation of the AXI4-Lite protocol. It includes a master module that initiates read and write transactions and a slave module that responds to these transactions. The top-level module connects the master and slave, facilitating communication between them. A testbench is also provided to simulate and verify the functionality of the entire system.

## Tools

To work with this project, you will need the following tools:

- **Verilator**: An open-source Verilog simulator and linting tool.
- **Make**: A build automation tool that automatically builds executable programs and libraries from source code.

## How to Run

Follow these steps to clone the repository, build the project, and run the simulation:

1. **Clone the repository**:
   ```bash
   git clone https://github.com/yourusername/axi4-lite-master-slave.git
   cd axi4-lite-master-slave
   ```

2. **Build and run the simulation**:
   ```bash
   make clean
   make build
   ```

   This will compile the Verilog files and run the testbench using Verilator. The simulation results will be displayed in the terminal.

## File Descriptions

- **`axi4_lite_master.sv`**: Implements the master functionality of the AXI4-Lite interface, handling read and write transactions.
- **`axi4_lite_slave.sv`**: Implements the slave functionality of the AXI4-Lite interface, responding to read and write requests from the master.
- **`axi4_lite_top.sv`**: Connects the master and slave modules, facilitating communication between them.
- **`axi4_lite_top_tb.sv`**: A testbench for simulating the top-level AXI4-Lite system, providing stimulus and monitoring the responses.
- **`Makefile`**: Automates the process of building and running the Verilog simulation using Verilator.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
