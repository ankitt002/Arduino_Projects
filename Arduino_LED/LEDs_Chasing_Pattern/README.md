# LED Chasing Pattern Project

This Arduino project creates a chasing pattern effect using a series of eight LEDs, turning them on and off sequentially.

## Description

The project utilizes an Arduino board to control eight LEDs arranged in a line. The LEDs light up one by one from left to right and then turn off in the same order, creating a chasing pattern effect. The timing between LED transitions is controlled by a specified interval.

## Components Used

- Arduino board (e.g., Arduino Uno)
- Eight LEDs
- Resistors (if necessary)
- Jumper wires

## Circuit Diagram
.....

## Instructions

1. Connect the eight LEDs to digital pins 2 through 9 on the Arduino board.
2. Upload the provided code to your Arduino board using the Arduino IDE or any compatible software.
3. Once uploaded, the LEDs will light up one by one from left to right and then turn off in the same order, creating a chasing pattern effect.
4. Experiment with the code by adjusting the interval variable to change the speed of the chasing pattern.

## Code Explanation

- `ledPins` array contains the pin numbers for the eight LEDs.
- `interval` variable specifies the time interval between LED transitions.
- In the `setup()` function, pinMode is set for each LED pin.
- The `loop()` function implements two loops: the first loop turns on the LEDs from left to right, and the second loop turns them off in the same order.


