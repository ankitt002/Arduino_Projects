# LED Binary Clock Project

This Arduino project creates a binary clock using LEDs to display the current time in binary format. The hours and minutes are represented by sets of LEDs, with each LED corresponding to a binary digit.

## Description

The project utilizes an Arduino board and a real-time clock (RTC) module to display the current time in binary format. The hours are represented by three LEDs (H0-H2), and the minutes are represented by four LEDs (M0-M3). Each LED is controlled individually to display the binary representation of the hours and minutes.

## Components Used

- Arduino board (e.g., Arduino Uno)
- RTC module (e.g., DS3231)
- LEDs
- Resistors (if necessary)
- Jumper wires

## Instructions

1. Connect the RTC module to the Arduino board using the I2C protocol (SCL and SDA pins).
2. Connect the LED pins for hours (H0-H2) to digital pins 2, 3, and 4, and the LED pins for minutes (M0-M3) to digital pins 5, 6, 7, and 8.
3. Upload the provided code to your Arduino board using the Arduino IDE or any compatible software.
4. Once uploaded, the LEDs will display the current time in binary format, updating every second.

## Code Explanation

- The code utilizes the RTClib library to communicate with the RTC module and obtain the current time.
- The hours and minutes are retrieved from the RTC and converted to binary format using bitwise operations.
- The `displayBinaryHours()` and `displayBinaryMinutes()` functions control the LEDs to display the binary representation of the hours and minutes, respectively.
- The `loop()` function continuously updates the LED display with the current time, refreshing every second.


