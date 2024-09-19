# Weight Monitoring System

## Overview
The Weight Monitoring System is designed to monitor and track weight using an ESP32 microcontroller, load cell, and ultrasonic sensors. This project is ideal for applications requiring precise weight measurements and distance sensing.

## Features
- **Real-time Weight Monitoring**: Accurate weight measurement using a load cell and HX711 amplifier.
- **Distance Measurement**: Ultrasonic sensor for additional distance monitoring.
- **Data Logging**: Store weight and distance data for historical analysis.
- **Graphical Display**: Visualize data on an LCD screen.
- **Alerts and Notifications**: Set thresholds and receive alerts when limits are exceeded.

## Hardware Components
- **ESP32**: Main microcontroller.
- **Load Cell**: For weight measurement.
- **HX711 Amplifier**: To amplify the load cell signal.
- **Ultrasonic Sensor**: For distance measurement.
- **LCD Display**: To display weight and distance data.
- **Arduino**: Used to execute the code.

## Circuit Diagram
Refer to the `circuit Diagram.png` file in the repository for detailed connections.

## Installation
1. **Clone the Repository**:
   ```sh
   git clone https://github.com/Yogavani123/Weight-Monitoring-System.git
   cd Weight-Monitoring-System
   
## Connections
## Load Cell to HX711:
Red (VCC) to E+
Black (GND) to E-
White (Output -) to A-
Green (Output +) to A+
HX711 to ESP32:
GND to GND
DT to GPIO 13
SCK to GPIO 12
VCC to 3.3V
## Ultrasonic Sensor to ESP32:
VCC to 5V
GND to GND
Trig to GPIO 5
Echo to GPIO 18
## LCD Display to ESP32:
SDA to GPIO 21
SCL to GPIO 22
## Usage
## Connect the Hardware:
Ensure all components are connected as per the circuit diagram.
## Calibrate the Load Cell:
Follow the calibration instructions in the docs folder.
## Start Monitoring:
Power on the system and begin monitoring weight and distance.
## Contributing
We welcome contributions! Please read our Contributing Guidelines for more details.
