/*
Let's build a simple traffic signal control using 3 LEDs red, green , orange to 
produce signal for controlling and directing the traffic with stop, ready, go signal via red, orange, green respectively.
We will use mills() function for controlling LED sequence.
*/

// Define the pin numbers for the three LEDs
const int redPin = 13;
const int orangePin = 12;
const int greenPin = 11;

// Set the initial state and timing for each LED
int redState = LOW;
int orangeState = LOW;
int greenState = LOW;

unsigned long previousMillis = 0;         // Store the previous time 
const long redDuration = 3000;            // Keep ON for 3 seconds
const long orangeDuration = 1000;         // LED ON for 1 second
const long greenDuration = 3000;          // For 3 seconds green led ON

void setup() 
 {
   pinMode(redPin, OUTPUT);               // Define what you want to do with selected pins 
   pinMode(orangePin, OUTPUT);            // Here we want to get an ouput from selected pins
   pinMode(greenPin, OUTPUT);
 }

void loop() 
 {
   unsigned long currentMillis = millis();
   if (currentMillis - previousMillis >= redDuration) {
    // It's time to change to red or red/orange
     previousMillis = currentMillis;
     if (redState == LOW) 
     {
       // Change to red and turn off green
       redState = HIGH;
       greenState = LOW;
       delay(1000);  // Delay for the red to be solid
     } else 
     {
       // Change to red/orange
       redState = HIGH;
       greenState = LOW;
       delay(1000);  // Delay for the red/orange to be solid
       redState = LOW;
       greenState = LOW;
    }
  }
  else if (currentMillis - previousMillis >= redDuration - orangeDuration) 
  {
    // Turn on orange just before switching to green
    orangeState = HIGH;
    redState = LOW;
  } 
  else if (currentMillis - previousMillis >= redDuration - orangeDuration - greenDuration) 
  {
    // It's time to change to green
    greenState = HIGH;
    orangeState = LOW;
  }

  // Update the LEDs Status for signal
  digitalWrite(redPin, redState);
  digitalWrite(orangePin, orangeState);
  digitalWrite(greenPin, greenState);
}
