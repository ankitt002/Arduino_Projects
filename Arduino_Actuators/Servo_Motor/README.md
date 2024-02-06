# Servo Motor Control Project

This Arduino project demonstrates how to control a servo motor using the Servo library. The servo motor rotates from 0 to 180 degrees and then back to 0 degrees repeatedly.

## Description

The project utilizes the Servo library to control a servo motor attached to one of the servo headers on the motor driver. In this example, the servo motor is controlled to rotate from 0 to 180 degrees and then back to 0 degrees repeatedly. The speed of rotation can be adjusted by changing the delay value in the code.

## Components Used

- Arduino board (e.g., Arduino Uno)
- Servo motor
- Motor driver (if required)
- Jumper wires

## Instructions

1. Connect the servo motor to one of the servo headers on the motor driver or directly to the Arduino board.
2. Upload the provided code to your Arduino board using the Arduino IDE or any compatible software.
3. Once uploaded, the servo motor will rotate from 0 to 180 degrees and then back to 0 degrees repeatedly.
4. Adjust the speed of rotation by changing the delay value in the code as needed.

## Code Explanation

- The Servo library is used to control the servo motor connected to the Arduino.
- An instance of the Servo class is created to control the servo motor.
- In the `setup()` function, the servo object is attached to the specified pin on the Arduino.
- The `loop()` function continuously rotates the servo motor from 0 to 180 degrees and then back to 0 degrees using a for loop.
- The speed of rotation is controlled by the delay value, which determines the time interval between each degree of rotation.


