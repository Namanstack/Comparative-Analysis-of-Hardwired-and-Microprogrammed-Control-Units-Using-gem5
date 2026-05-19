# Comparative Analysis of Hardwired and Microprogrammed Control Units Using gem5

## Overview
This project presents a comparative analysis of Hardwired and Microprogrammed Control Units using the gem5 architectural simulator. Two CPU models were analyzed:

- TimingSimpleCPU (Hardwired Control Unit)
- O3CPU (Microprogrammed Control Unit)

The study compares execution behavior using benchmark programs and evaluates performance using execution time, CPI, IPC, and total cycles.

## Objectives
- Simulate hardwired and microprogrammed control units using gem5
- Analyze CPU performance metrics
- Compare execution efficiency under different workloads
- Study trade-offs between speed and flexibility

## Benchmarks Used
- Hello (baseline)
- Fibonacci
- Matrix Multiplication
- Sorting

## Performance Metrics
- Execution Time
- CPI (Cycles Per Instruction)
- IPC (Instructions Per Cycle)
- Number of Cycles

## Tools Used
- gem5 Simulator
- Python
- Linux Environment

## Key Findings
- O3CPU showed lower execution time and CPI
- Higher IPC observed in O3CPU
- Matrix multiplication showed highest speed improvement
- Sorting workload produced higher CPI due to branch-heavy behavior

## Future Scope
- Power and energy analysis
- Additional CPU model comparisons
- Cache parameter tuning
- Branch prediction analysis

