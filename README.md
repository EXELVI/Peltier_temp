# Peltier Temperature Monitor ❄️🔥

[![Arduino](https://img.shields.io/badge/Arduino-Uno-blue.svg)](https://www.arduino.cc/)
[![GitHub issues](https://img.shields.io/github/issues/EXELVI/Peltier_temp)](https://github.com/EXELVI/Peltier_temp/issues)
[![GitHub stars](https://img.shields.io/github/stars/EXELVI/Peltier_temp)](https://github.com/EXELVI/Peltier_temp/stargazers)

A simple Arduino project to monitor temperature using a Peltier module and display it on an OLED screen. This project reads the temperature from a thermistor, calculates the resistance, and converts it to Celsius, displaying both values on an SSD1306 OLED display.


## 💡 Features

- **Real-time Temperature Monitoring**: Continuously monitors and displays the temperature in Celsius.
- **OLED Display Integration**: Outputs the temperature and resistance values on a 0.96" OLED screen.
- **Thermistor Resistance Calculation**: Calculates the resistance of the thermistor based on the voltage divider circuit.

## 📜 Requirements

- **Hardware**:
  - Arduino Uno or compatible
  - 0.96" OLED Display (SSD1306)
  - Thermistor
  - Peltier Module
  - Resistors, Wires, and Breadboard
  
- **Libraries**:
  - `SPI.h`
  - `Wire.h`
  - `Adafruit_GFX.h`
  - `Adafruit_SSD1306.h`

## 🛠️ Setup

1. **Wiring**: Connect the components as follows:
   - Thermistor to analog pin A0
   - OLED Display (SDA to A4, SCL to A5)
   - Other components as needed

2. **Install Libraries**: Ensure you have the necessary libraries installed in your Arduino IDE. You can install them through the Library Manager:
   - `Adafruit GFX Library`
   - `Adafruit SSD1306`

3. **Upload Code**: Copy the code from this repository into your Arduino IDE and upload it to your board.

## 📈 Usage

Once the setup is complete and the code is uploaded:

- The OLED display will show "Starting..." during initialization.
- After a brief delay, the current temperature (in Celsius) and the resistance (in Ohms) will be displayed.
- The temperature values will update continuously as the loop function executes.

## 🤝 Contributing

Feel free to contribute by opening issues or submitting pull requests. All contributions are welcome!