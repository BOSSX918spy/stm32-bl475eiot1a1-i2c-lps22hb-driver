# STM32 B-L475E-IOT01A I²C LPS22HB Pressure Sensor Driver

## Overview
This project implements a reusable I²C driver for the on-board LPS22HB
barometric pressure sensor on the STM32 B-L475E-IOT01A Discovery board.
Pressure data is acquired via I²C and transmitted over UART for real-time
monitoring and validation.

The design follows a layered firmware architecture aligned with
production embedded systems.

---

## Target Platform
- Board: B-L475E-IOT01A
- MCU: STM32L475VGT6
- Sensor: LPS22HB (Barometric Pressure)
- I²C: PB8 (SCL), PB9 (SDA)
- UART: PB6 (TX), PB7 (RX)

---

## Design Objectives
- Abstract pressure sensor access behind a clean driver API
- Avoid direct BSP usage in application code
- Demonstrate multi-sensor I²C usage on a shared bus
- Provide formatted UART telemetry output

---

## Firmware Architecture
Application → LPS22HB Driver → BSP → HAL → Hardware

This architecture improves portability, readability, and long-term
maintainability.

---

## Build and Run
1. Generate code using STM32CubeMX
2. Build and flash the firmware
3. Open ST-LINK Virtual COM Port (115200 baud)
4. Observe real-time pressure readings in the terminal

---

## Possible Extensions
- Altitude calculation from pressure data
- Low-power periodic sensing
- Sensor fusion with temperature data
- Direct register-level LPS22HB driver

---

## Author
**Gurnoor Singh**  
Embedded Systems | Firmware Development
