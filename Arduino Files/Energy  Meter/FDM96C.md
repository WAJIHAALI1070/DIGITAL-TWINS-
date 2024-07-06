
# FDM-96C Multifunctional Power Meter Arduino Project
The FDM-96C Multifunctional Power Meter is an advanced instrument designed to measure and monitor various electrical parameters in a power system. It is widely used in industrial and commercial applications for its accuracy and reliability.
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
- ESP32 Dev Module
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
  - RO (Receiver Output) -> ESP32 RX2
  - DI (Driver Input) -> ESP32 TX2
  - DE (Driver Enable) -> ESP32 GPIO PINS D4
  - RE (Receiver Enable) -> ESP32 GPIO PINS D5 
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
3. Adjust the `TX2`, `RX2`, `DE`, and `RE` pin definitions in the code if necessary.
4. Upload the code to your Arduino board.
5. Open the Serial Monitor to view the readings from the FDM-96C.

## Files
- `Energy_Meter_Voltages.ino`: The main Arduino file for interfacing with the FDM-96C power meter.
