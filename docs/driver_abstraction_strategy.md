# Driver Abstraction Strategy

## Overview
This project uses a layered driver abstraction to separate application logic
from hardware-specific implementation details.

---

## Firmware Layers
The firmware stack is structured as:

Application → LPS22HB Driver → BSP → HAL → Hardware

Each layer has a clearly defined responsibility. 

---

## Application Layer
- Uses high-level sensor data
- Contains no I²C, BSP, or register-level code
- Focuses on system behavior and telemetry

---

## Driver Layer (LPS22HB Driver)
- Exposes a clean API:
  - LPS22HB_Init()
  - LPS22HB_Read()
- Converts BSP output into application-friendly structures
- Enables future backend replacement

---

## Board Support Package (BSP)
- Provided by ST
- Handles sensor-specific initialization
- Manages I²C transactions internally

---

## Why Not Use BSP Directly?
Direct BSP usage in application code:
- Increases coupling
- Reduces portability
- Makes refactoring difficult

Wrapping BSP calls inside a custom driver improves:
- Maintainability
- Readability
- Reusability

---

## Portability Benefits
This abstraction allows:
- Replacing BSP with a register-level driver
- Porting to a different STM32 board
- Mocking sensor input for testing

---

## Industry Relevance
Layered driver design is standard practice in:
- Industrial firmware
- Automotive ECUs
- IoT sensor platforms

This project intentionally mirrors that structure.
