# Humidity & Temperature Monitoring System with DHT11 & STM32

This project demonstrates the development of a **Humidity & Temperature Monitoring System** using a **DHT11 sensor** and an **STM32F103C8T6 microcontroller**. The system measures atmospheric temperature and humidity in real-time and displays the data on a 16×2 LCD screen.

---

## Features
- **Temperature Monitoring**: Measures temperature from **0°C to 50°C** with ±1°C accuracy.
- **Humidity Monitoring**: Tracks humidity from **20% to 90%** with ±1% accuracy.
- **Real-Time Display**: Outputs sensor readings on a 16×2 LCD using I2C communication.
- **STM32 Integration**: Leverages the **STM32F103C8T6** microcontroller for efficient data processing and sensor interfacing.

---

## How It Works
1. The **DHT11 sensor** collects temperature and humidity data from the environment.
2. The **STM32F103C8T6** processes the data and sends it to a **16×2 LCD** for real-time display.
3. The LCD uses I2C communication to reduce pin usage and simplify hardware connections.

---

## Components Used
- **DHT11**: Humidity & Temperature sensor.
- **STM32F103C8T6**: Microcontroller for processing and control.
- **16×2 LCD Display**: Displays the temperature and humidity data.
- **Power Supply**: 3.3V/5V (depending on the configuration).

---

## Getting Started
### Prerequisites
- STM32CubeIDE for programming the STM32 microcontroller.
- J-Link debugger for uploading and debugging code.
- Basic knowledge of STM32 GPIO and I2C communication.

### Pin Assignments
<img width="711" alt="image" src="https://github.com/user-attachments/assets/4b0ebdc4-7029-4d67-a470-4dbbd28e6263" />
