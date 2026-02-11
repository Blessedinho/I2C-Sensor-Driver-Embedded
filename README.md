# I2C Peripheral Driver (Bare-Metal)
**Context:** Microprocessors / Embedded Systems Lab

## 📌 Project Overview
This project implements a low-level driver for communicating with a peripheral sensor via the **I2C (Inter-Integrated Circuit) protocol**. It demonstrates how software interacts with hardware via memory-mapped I/O.

## ⚙️ Electrical Engineering Concepts
- **Serial Protocols:** Understanding Start/Stop bits, ACK/NACK, and Clock Stretching.
- **Register Mapping:** Manipulating specific CPU memory addresses to trigger hardware pins.
- **Data Conversion:** Reading raw hex values and converting them to human-readable units.

## 🛠️ Technical Implementation
- **Language:** C
- **Hardware Target:** Generic ARM Cortex-M architecture.
- **Protocol:** I2C Standard Mode (100 kbps).