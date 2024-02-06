# Stepper Motor Control Project

This Arduino project demonstrates how to control a bipolar stepper motor using the L293D motor shield. The stepper motor is rotated 250 steps forward and then 250 steps backward with microstepping.

## Description

The project utilizes the AFMotor library to control the stepper motor via the L293D motor shield. The stepper motor is connected to one of the ports (Port1 or Port2) of the motor driver. In this example, the stepper motor is configured to rotate 250 steps forward and then 250 steps backward with microstepping enabled.

## Components Used

- Arduino board (e.g., Arduino Uno)
- L293D motor shield
- Bipolar stepper motor
- Jumper wires

## Instructions

1. Connect the L293D motor shield to the Arduino board.
2. Connect the bipolar stepper motor to one of the motor ports (M1-M4) on the motor shield.
3. Upload the provided code to your Arduino board using the Arduino IDE or any compatible software.
4. Once uploaded, the stepper motor will rotate 250 steps forward and then 250 steps backward with microstepping enabled.
5. Adjust the speed and number of steps in the code as needed for your application.

## Code Explanation

- The AFMotor library is used to control the stepper motor via the L293D motor shield.
- An `AF_Stepper` object is created to specify the number of steps required for one rotation and the port number of the motor shield.
- In the `setup()` function, the speed of rotation is set using the `setSpeed()` method.
- The `loop()` function continuously rotates the stepper motor 250 steps forward and then 250 steps backward with microstepping enabled.


