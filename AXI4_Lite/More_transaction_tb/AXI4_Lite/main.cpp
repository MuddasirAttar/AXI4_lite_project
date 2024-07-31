#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vaxi4_lite_top.h"

vluint64_t sim_time = 0;

void apply_stimulus(Vaxi4_lite_top* dut) {
    // Reset
    if (sim_time < 10) {
        dut->ARESETN = 0;
    } else {
        dut->ARESETN = 1;
    }

    // Write operation 1
    if (sim_time == 20) {
        dut->write_s = 1;
        dut->address = 0x00000010;
        dut->W_data  = 0xDEADBEEF;
    } else if (sim_time == 30) {
        dut->write_s = 0;
    }

    // Write operation 2
    if (sim_time == 40) {
        dut->write_s = 1;
        dut->address = 0x00000020;
        dut->W_data  = 0xCAFEBABE;
    } else if (sim_time == 50) {
        dut->write_s = 0;
    }

    // Read operation 1
    if (sim_time == 60) {
        dut->read_s = 1;
        dut->address = 0x00000010;
    } else if (sim_time == 70) {
        dut->read_s = 0;
    }

    // Read operation 2
    if (sim_time == 80) {
        dut->read_s = 1;
        dut->address = 0x00000020;
    } else if (sim_time == 90) {
        dut->read_s = 0;
    }

    // Another Write operation
    if (sim_time == 100) {
        dut->write_s = 1;
        dut->address = 0x00000030;
        dut->W_data  = 0xBEEFCAFE;
    } else if (sim_time == 110) {
        dut->write_s = 0;
    }

    // Read the last written value
    if (sim_time == 120) {
        dut->read_s = 1;
        dut->address = 0x00000030;
    } else if (sim_time == 130) {
        dut->read_s = 0;
    }
}

int main(int argc, char** argv, char** env) {
    Verilated::commandArgs(argc, argv);
    Vaxi4_lite_top* dut = new Vaxi4_lite_top;

    Verilated::traceEverOn(true);
    VerilatedVcdC* m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 99); // Trace 99 levels of hierarchy
    m_trace->open("waveform.vcd");

    dut->ACLK = 0;
    dut->ARESETN = 0;

    while (sim_time <= 150) { // Run for 150 time units
        dut->ACLK = !dut->ACLK; // Toggle clock
        apply_stimulus(dut); // Apply stimulus
        dut->eval(); // Evaluate the DUT
        m_trace->dump(sim_time); // Dump simulation data
        sim_time++; // Increment simulation time
        Verilated::timeInc(1); // Increment Verilator time
    }

    dut->final();
    m_trace->close();

    delete m_trace;
    delete dut;
    return 0;
}

