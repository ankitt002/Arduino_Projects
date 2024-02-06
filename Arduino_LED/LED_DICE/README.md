# LED Dice Project

This Arduino project simulates a rolling dice using LEDs. Pressing a button triggers the roll of a virtual dice, displaying a random number from 1 to 6 on the LEDs.

## Description

The project utilizes an Arduino board, a button, and seven LEDs to simulate the roll of a dice. Each LED represents a number from 1 to 6, and pressing the button generates a random number and displays it using the LEDs. The LED patterns for each number are predefined in the code.

## Components Used

- Arduino board (e.g., Arduino Uno)
- Push button
- Seven LEDs
- Resistors (if necessary)
- Jumper wires

## Instructions

1. Connect the push button to pin 2 and the seven LEDs to digital pins 3 through 9 on the Arduino board.
2. Upload the provided code to your Arduino board using the Arduino IDE or any compatible software.
3. Press the button to roll the dice and display a random number between 1 and 6 on the LEDs.
4. Experiment with the code by modifying the LED patterns or adding additional functionality.

## Code Explanation

- `buttonPin` is defined to connect the button to pin 2, and `ledPins` is an array containing the pins for the seven LEDs.
- In the `setup()` function, the button pin is configured as an input with an internal pull-up resistor, and the LED pins are set as outputs. The random number generator is seeded.
- The `loop()` function continuously checks if the button is pressed. When the button is pressed, the `rollDice()` function is called.
- The `rollDice()` function generates a random number between 1 and 6 and calls the `displayNumber()` function to display the corresponding LED pattern.
- The `displayNumber()` function maps each LED pattern to a specific number (1 to 6) and sets the LED pins accordingly.

