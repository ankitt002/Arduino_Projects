# Two LED Alternate Blinking Project

This Arduino project demonstrates how to blink two LEDs alternatively using the `millis()` function for timing control.

## Description

This project utilizes an Arduino board to control two LEDs connected to different pins. The LEDs blink alternatively, with each LED turning on and off in sequence. The `millis()` function is employed to manage the timing intervals between LED state changes, allowing for precise control over the blinking pattern.

## Components Used

- Arduino board (e.g., Arduino Uno)
- Two LEDs
- Resistors (if necessary)
- Jumper wires

## Circuit Diagram
......

## Instructions

1. Connect LED1 to Pin 4 and LED2 to Pin 6 on the Arduino board.
2. Upload the provided code to your Arduino board using the Arduino IDE or any compatible software.
3. Once uploaded, the LEDs will blink alternatively at a fixed interval of 1 second.
4. Experiment with the code by adjusting the interval variable to change the blinking speed.

## Code Explanation

- `led1Pin` and `led2Pin` variables define the pin numbers for the two LEDs.
- `led1State` and `led2State` variables set the initial states of the LEDs.
- `previousMillis` variable stores the last time the LEDs were toggled.
- `interval` variable defines the blinking interval (1 second in this case).
- In the `setup()` function, pinMode is set for the LED pins.
- In the `loop()` function, `millis()` is used to toggle the LEDs at the specified interval.


