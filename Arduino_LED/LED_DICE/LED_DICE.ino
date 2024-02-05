/*
Let's create a dice with the help of seven leds to display a random number from 1-6.
*/

const int buttonPin = 2; // Connect the button to pin 2
const int ledPins[] = {3, 4, 5, 6, 7, 8, 9}; // Connect the LEDs to these pins
const int numLEDs = 7;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP); // Set button pin as an input with internal pull-up resistor
  for (int i = 0; i < numLEDs; i++) {
    pinMode(ledPins[i], OUTPUT); // Set LED pins as outputs
  }
  randomSeed(analogRead(0)); // Seed the random number generator
}

void loop() {
  if (digitalRead(buttonPin) == LOW) { // If the button is pressed
    rollDice();
    delay(1000); // Delay for one second to prevent rapid button presses
  }
}

void rollDice() {
  int randomNumber = random(1, 7); // Generate a random number between 1 and 6
  displayNumber(randomNumber);
}

void displayNumber(int num) {
  // Define LED patterns for each number (1 to 6)
  int patterns[6][7] = {
    {0, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 0, 0, 1},
    {1, 0, 0, 1, 0, 0, 1},
    {1, 0, 1, 0, 1, 0, 1},
    {1, 1, 0, 0, 0, 1, 1},
    {1, 1, 1, 0, 1, 1, 1}
  };

  for (int i = 0; i < numLEDs; i++) {
    digitalWrite(ledPins[i], patterns[num - 1][i]);
  }
}
