# Traffic Light Control Project

This Arduino project simulates a basic traffic light control system with red, orange, and green LEDs.

## Description

The project uses an Arduino board to control three LEDs representing traffic signals: red, orange, and green. The LEDs illuminate in sequence to mimic the behavior of a traffic light. The green LED turns on for 3 seconds, followed by the orange LED for 1 second, and finally, the red LED for 3 seconds.

## Components Used

- Arduino board (e.g., Arduino Uno)
- Red LED
- Green LED
- Orange LED
- Resistors (if necessary)
- Jumper wires

## Circuit Diagram


## Instructions

1. Connect the red LED to Pin 6, the green LED to Pin 4, and the orange LED to Pin 5 on the Arduino board.
2. Upload the provided code to your Arduino board using the Arduino IDE or any compatible software.
3. Once uploaded, the LEDs will cycle through the traffic light sequence: green for 3 seconds, orange for 1 second, and red for 3 seconds.
4. Experiment with the code by adjusting the delay values to change the timing of each signal.

## Code Explanation

- `redPin`, `greenPin`, and `orangePin` variables define the pin numbers for the red, green, and orange LEDs, respectively.
- In the `setup()` function, pinMode is set for the LED pins.
- In the `loop()` function, each LED is turned on and off sequentially with specific delay intervals to mimic the behavior of a traffic light.


