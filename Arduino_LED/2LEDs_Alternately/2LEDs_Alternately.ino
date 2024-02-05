/*
In Blink test we will see an example how to use digital pins(0-13)?
There are 14 digital pin in an Arduino Uno board those are on right side(from front)shown as:
0-TX, 1-RX, 1, 2, ~3, 4, ~5, 6, ~7, 8, ~9, 10, ~11, 12, 13 where 3, 5, 7, 9, 11 are PWM pins.

For using the pin we have to simply create a variable name and asign a pin number
to that variable before setup function and use them to get the output signal from the board.

Let's see how to connect two 2mA LED with arduino uno where one LED blinks whilte other is off and vice versa and switches their state after one second. 
*/

//Define the pin number for the two LEDs
int led1Pin = 4;   //Pin for first LED
int led2Pin = 6;   //Pin for second LED

//Set the initial state of LEDs
boolean led1State = LOW;
boolean led2State = HIGH;

// Set the initial time and blinking intervals(in milliseconds)
unsigned long previousMillis = 0;
const long interval =1000;           // for 1s interval


void setup() {
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
 
}

void loop() {
  unsigned long currentMillis = millis();

  //Check if it's time to toggle the LEDs
  if(currentMillis - previousMillis >= interval){
    previousMillis=currentMillis;      //Save the last time LEDs were toggled
    
    //Toggle the state of the LEDs
    led1State = !led1State;
    led2State = !led2State

    //Now update thr LEDs
    digitalWrite(led1Pin, led1State);
    digitalWrite(led2Pin, led2State);
  }
}
