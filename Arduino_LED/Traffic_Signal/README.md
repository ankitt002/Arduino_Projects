# Simple Traffic Light Signal Control

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


# Traffic Light Control using Three leds with Timed Transitions

This Arduino project simulates a traffic light control system with timed transitions between red, red/orange, and green signals.

## Description

The project utilizes an Arduino board to control three LEDs representing traffic signals: red, orange, and green. The LEDs transition through a sequence to mimic the behavior of a traffic light at an intersection. The red signal stays on for 3 seconds, followed by a transition to red/orange for 1 second before finally switching to green for 3 seconds.

## Components Used

- Arduino board (e.g., Arduino Uno)
- Red LED
- Green LED
- Orange LED
- Resistors (if necessary)
- Jumper wires

## Circuit Diagram


## Instructions

1. Connect the red LED to Pin 13, the orange LED to Pin 12, and the green LED to Pin 11 on the Arduino board.
2. Upload the provided code to your Arduino board using the Arduino IDE or any compatible software.
3. Once uploaded, the LEDs will simulate a traffic light sequence: red for 3 seconds, red-orange for 1 second, and green for 3 seconds.
4. Experiment with the code by adjusting the timing intervals to customize the traffic light sequence.

## Code Explanation

- `redPin`, `orangePin`, and `greenPin` variables define the pin numbers for the red, orange, and green LEDs, respectively.
- `redState`, `orangeState`, and `greenState` variables set the initial states of the LEDs.
- `previousMillis` variable stores the previous time to control timing intervals.
- `redDuration`, `orangeDuration`, and `greenDuration` variables define the duration for each phase of the traffic light sequence.
- The `loop()` function implements precise timing control and state transitions for the LEDs to simulate the traffic light sequence.


