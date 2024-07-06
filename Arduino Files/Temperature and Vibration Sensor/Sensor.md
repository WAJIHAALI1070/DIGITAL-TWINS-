# Vibration and Temperature Sensor (Type 485) Arduino Project

This repository contains Arduino files for interfacing with the Vibration and Temperature Sensor (Type 485). The project focuses on reading vibration and temperature data using the Modbus RTU protocol over RS485 communication.

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
The Vibration and Temperature Sensor (Type 485) is designed to measure both vibration and temperature in industrial environments. This project provides Arduino code to read these parameters using the Modbus RTU protocol.

## Hardware Requirements
- ESP32 DEV MODUE 
- Vibration and Temperature Sensor (Type 485)
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
  - DE (Driver Enable) -> ESP32 GPIO PIN D4
  - RE (Receiver Enable) -> ESP32 GPIO PIN D5
  - VCC -> 3.3V
  - GND -> GND

- **RS485 Module to Sensor**
  - A -> A
  - B -> B

| Sensor Pin | RS485 to TTL Converter | ESP32 Pin   |
|------------|------------------------|-------------|
| A          | A                      | -           |
| B          | B                      | -           |
| GND        | GND                    | GND         |
| VCC        | VCC                    | 3.3         |
| TX2        | RX2                    | D4          |
| RX2        | TX2                    | D5          |


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
5. Open the Serial Monitor to view the readings from the sensor.

## Files
- VibrationTemperatureSensor.ino: The main Arduino file for interfacing with the Vibration and Temperature Sensor.
