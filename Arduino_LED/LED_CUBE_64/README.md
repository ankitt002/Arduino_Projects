# LED Cube 4x4x4 Project

This Arduino project creates a 4x4x4 LED cube display, capable of showing patterns and animations.

## Description

The project utilizes an Arduino board to control a 4x4x4 LED cube display. The cube consists of 4 layers and 8 columns of LEDs. Each layer is controlled by a separate pin, and the LEDs in each layer are addressed by cycling through the layers and setting the appropriate column pins high or low to create patterns or animations.

## Components Used

- Arduino board (e.g., Arduino Uno)
- 4x4x4 LED cube (16 LEDs)
- Resistors (if necessary)
- Jumper wires

## Instructions

1. Connect the 4 layers of the LED cube to pins 2, 3, 4, and 5 on the Arduino board.
2. Connect the 8 columns of the LED cube to pins 6 through 13 on the Arduino board.
3. Upload the provided code to your Arduino board using the Arduino IDE or any compatible software.
4. The code will cycle through the layers and illuminate the LEDs according to the patterns defined in the `layers[]` array.
5. Experiment with the code by modifying the patterns in the `layers[]` array or adding animations.

## Code Explanation

- `layerPins[]` contains the pin numbers for the layers of the LED cube, and `columnPins[]` contains the pin numbers for the columns.
- The `layers[]` array defines the LED patterns for each layer of the cube.
- In the `setup()` function, the pin modes are set for the layer and column pins.
- The `loop()` function cycles through each layer of the cube, illuminating the LEDs according to the patterns defined in the `layers[]` array.
- Adjust the delay in the loop to control the display speed.

