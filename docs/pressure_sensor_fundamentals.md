# Barometric Pressure Sensor Fundamentals

## Overview
The LPS22HB is a MEMS-based barometric pressure sensor capable of measuring
absolute atmospheric pressure with high resolution and stability.

---

## What Is Atmospheric Pressure?
Atmospheric pressure is the force exerted by the weight of air above a given
point. It varies with:
- Altitude
- Weather conditions
- Temperature

Typical sea-level pressure is approximately 1013.25 hPa.

---

## LPS22HB Measurement Output
The sensor internally:
- Samples pressure using a MEMS sensing element
- Applies factory calibration
- Outputs pressure data in hectopascals (hPa)

The BSP converts raw data into floating-point values.

---

## Resolution and Accuracy
- High resolution enables small pressure changes to be detected
- Suitable for applications such as:
  - Weather monitoring
  - Indoor navigation
  - Altitude estimation

---

## Temperature Compensation
Pressure measurements are temperature-compensated internally, improving
accuracy across environmental conditions.

---

## Sampling Rate
In this project:
- Pressure is sampled once per second
- Sampling rate is intentionally low to:
  - Reduce power consumption
  - Simplify firmware logic
  - Improve UART readability

---

## Design Implications
Pressure sensors are sensitive devices. Proper abstraction and validation are
important to ensure meaningful data is delivered to higher application layers.
