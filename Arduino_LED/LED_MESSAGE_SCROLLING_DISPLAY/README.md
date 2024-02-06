# Message Scrolling Display Project

This Arduino project creates a message scrolling display using an 8x8 LED matrix. The message "HELLO WORLD! I'M ANKIT TIWARI" scrolls horizontally across the matrix.

## Description

The project utilizes an 8x8 LED matrix controlled by the LedControl library to display a scrolling message. The message is defined within the code and scrolls horizontally across the matrix. The scrolling speed can be adjusted by modifying the delay value in the code.

## Components Used

- Arduino board (e.g., Arduino Uno)
- 8x8 LED matrix display
- Resistors (if necessary)
- Jumper wires

## Instructions

1. Connect the data, clock, and chip select (CS) pins of the LED matrix to digital pins on the Arduino board.
2. Upload the provided code to your Arduino board using the Arduino IDE or any compatible software.
3. Once uploaded, the message "HELLO WORLD! I'M ANKIT TIWARI" will scroll horizontally across the LED matrix display.
4. Experiment with the code by adjusting the message or the scrolling speed to customize the display.

## Code Explanation

- The LedControl library is included for controlling the LED matrix.
- The data, clock, and chip select (CS) pins are defined according to the wiring configuration.
- In the `setup()` function, the display is initialized, brightness is set, and the display is cleared.
- The `loop()` function continuously calls the `displayMessage()` function to scroll the message.
- The `displayMessage()` function scrolls the message horizontally across the LED matrix by updating the display row by row.


