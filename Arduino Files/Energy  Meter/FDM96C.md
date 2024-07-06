
# FDM-96C Multifunctional Power Meter Arduino Project

This repository contains Arduino files for interfacing with the FDM-96C Multifunctional Power Meter. The project focuses on reading various electrical parameters using the Modbus RTU protocol over RS485 communication.

## Table of Contents
- [Introduction](#introduction)
- [Hardware Requirements](#hardware-requirements)
- [Software Requirements](#software-requirements)
- [Wiring](#wiring)
- [Installation](#installation)
- [Usage](#usage)
- [Files](#files)
- [Contributing](#contributing)
- [License](#license)

## Introduction
The FDM-96C is a multifunctional power meter that can measure voltage, current, power, and other electrical parameters. This project provides Arduino code to read these parameters using the Modbus RTU protocol.

## Hardware Requirements
- Arduino board (e.g., Arduino Uno, Mega, etc.)
- FDM-96C Multifunctional Power Meter
- RS485 to TTL module
- Jumper wires
- Power supply

## Software Requirements
- [Arduino IDE](https://www.arduino.cc/en/software)
- [Modbus Master Library for Arduino](https://github.com/4-20ma/ModbusMaster)

## Wiring
Connect the hardware as follows:
- **RS485 Module to Arduino**
  - RO (Receiver Output) -> Arduino RX
  - DI (Driver Input) -> Arduino TX
  - DE (Driver Enable) -> Arduino digital pin (e.g., pin 3)
  - RE (Receiver Enable) -> Arduino digital pin (e.g., pin 2)
  - VCC -> 5V
  - GND -> GND

- **RS485 Module to FDM-96C**
  - A -> A
  - B -> B

## Installation
1. Install the Arduino IDE.
2. Install the Modbus Master Library:
   - Open the Arduino IDE.
   - Go to Sketch -> Include Library -> Manage Libraries.
   - Search for "ModbusMaster" and install it.

## Usage
1. Clone this repository or download the ZIP file and extract it.
2. Open the Arduino IDE and load the provided `.ino` file.
3. Adjust the `TX`, `RX`, `DE`, and `RE` pin definitions in the code if necessary.
4. Upload the code to your Arduino board.
5. Open the Serial Monitor to view the readings from the FDM-96C.

## Files
- `FDM96C.ino`: The main Arduino file for interfacing with the FDM-96C power meter.

## Contributing
Contributions are welcome! Please fork this repository and submit a pull request for any improvements.

## License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
