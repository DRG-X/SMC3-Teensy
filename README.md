# SMC3 for Teensy ⚡  
*Motion simulator motor control, but faster and less Arduino-brained.*

This repository is a **Teensy-compatible port of the original SMC3 Arduino firmware**, built for motion simulator rigs that need better timing, higher performance, and modern storage options.

The core SMC3 control logic is preserved.  
The hardware assumptions are not.

---

## What’s inside

Two independent firmware variants are provided:

### 🔹 EEPROM Version
- Stores configuration in **internal EEPROM**
- Fast read/write
- Limited write cycles (like all EEPROM)

### 🔹 SD Card Version
- Stores configuration on an **SD card**
- Easy backup and manual editing
- Slightly slower access, more flexible storage

Both versions support **up to 3 DC motors with PID control** and are compatible with **SimTools-style setups**.

---

## Why Teensy?

Arduino works.  
Teensy works **faster**.

This port adapts SMC3 for:
- Higher clock speeds
- Different timer behavior
- Teensy-specific PWM and I/O
- Cleaner separation between logic and storage

If you’re building a serious motion rig, Teensy just makes more sense.

---

## Hardware requirements

- Teensy board (tested on Teensy 4.x)
- DC motors with appropriate motor drivers
- Position feedback (potentiometers or encoders)
- External power supply (don’t be reckless)

---

## Differences from original SMC3

- Arduino-specific code replaced with Teensy equivalents
- Timing adjusted for higher-frequency execution
- Optional SD-based persistent storage
- Minor structural cleanup for readability and extensibility

Detailed notes are available in `docs/`.

---

## ⚠️ Disclaimer

This firmware is intended for **motion simulators and experimental setups**.  
High-power systems can be dangerous if configured incorrectly.

You are responsible for your hardware, wiring, and safety.

---

## Credits

- Original SMC3 firmware by the original author  
- Teensy port and extensions by **Deepansh Raj Goel**

This project is **not officially affiliated** with the original SMC3 project.

---

## License

MIT License.  
Do whatever you want. Just don’t blame others when physics fights back.
