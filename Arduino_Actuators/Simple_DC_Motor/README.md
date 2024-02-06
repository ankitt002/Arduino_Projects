# Simple DC Motor Control Project

This Arduino project demonstrates how to control a DC motor using the Adafruit motor shield V1 library. The DC motor rotates in one direction for 2 seconds, stops for 1 second, and then rotates in the opposite direction for 2 seconds.

## Description

The project utilizes the Adafruit motor shield V1 library to control a DC motor connected to one of the motor ports (M1-M4) on the motor shield. In this example, the DC motor is configured to rotate in one direction for 2 seconds, stop for 1 second, and then rotate in the opposite direction for 2 seconds.

## Components Used

- Arduino board (e.g., Arduino Uno)
- Adafruit motor shield V1
- DC motor
- Jumper wires

## Instructions

1. Connect the DC motor to one of the motor ports (M1-M4) on the Adafruit motor shield V1.
2. Upload the provided code to your Arduino board using the Arduino IDE or any compatible software.
3. Once uploaded, the DC motor will rotate in one direction for 2 seconds, stop for 1 second, and then rotate in the opposite direction for 2 seconds.
4. Adjust the speed of rotation by changing the value passed to the `setSpeed()` method.

## Code Explanation

- The Adafruit motor shield V1 library is used to control the DC motor connected to the Arduino.
- An `AF_DCMotor` object is created to control the DC motor.
- In the `setup()` function, no setup is needed.
- The `loop()` function continuously runs the motor in one direction for 2 seconds, stops it for 1 second, and then runs it in the opposite direction for 2 seconds using the `run()` method with different parameters.
- The speed of the motor is set using the `setSpeed()` method.


