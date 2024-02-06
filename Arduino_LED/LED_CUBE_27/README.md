# LED Cube 27 Project

This Arduino project creates a simple LED cube consisting of 27 LEDs arranged in a 3x3x3 matrix. The LEDs light up sequentially to create visual effects.

## Description

The project utilizes an Arduino board to control a 3x3x3 LED cube. The cube consists of three layers (anodes) and nine columns (cathodes). Each LED is individually controlled to create various lighting effects. In the provided code, each LED in the cube is turned on one by one in a sequential manner.

## Components Used

- Arduino board (e.g., Arduino Uno)
- 27 LEDs
- Resistors (if necessary)
- Jumper wires

## Instructions

1. Connect the three layers (anodes) to pins 2, 3, and 4, and the nine columns (cathodes) to pins 5 through 13 on the Arduino board.
2. Upload the provided code to your Arduino board using the Arduino IDE or any compatible software.
3. Once uploaded, the LEDs in the cube will light up sequentially, creating visual effects.
4. Experiment with the code by adjusting the delay value to control the display rate or implementing different lighting patterns.

## Code Explanation

- `layerPins` array contains the pins connected to the layers (anodes), and `columnPins` array contains the pins connected to the columns (cathodes).
- In the `setup()` function, pinMode is set for each layer and column pin.
- The `loop()` function iterates through each layer and column, turning on each LED in the cube one by one and then turning it off, creating a sequential lighting effect.


