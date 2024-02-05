/*
In this code we will use 8 LEDs and make the chasing effect with them.
Where LEDs light up one after the other and turn off in sequence to carry out the chasing effect
*/


//Define the pin numbers for eight LEDs
const int ledPins[] ={2, 3, 4,5, 6, 7, 8, 9};
const int numLEDs = 8;

// Set an interval between the LED transitions
cont int interval = 100;      // in milliseconds
 
void setup() {
  for(int i = 0; i < numLEDs; i++){
    pinMode(ledPins[i], OUTPUT);
  }
}

// Now create two loop for chasing pattern 
void loop() {
  // This for looop make LEDS turn on from left to right 
 for(int i = 0; i < numLEDs; i++){
  digitalWrite(ledPins[i], HIGH); // Turn on the current LED
  delay(interval);                    // Wait for a while
  digitalWrite(ledPins[i], LOW);  // Turn off the current LED
 }
  //This for loop to turns them off in same order
  for(int i = numLEDs - 2; i >=1; i--){
  digitalWrite(ledPins[i], HIGH); // Turn on the current LED
  delay(interval);                    // Wait for a while
  digitalWrite(ledPins[i], LOW);  // Turn off the current LED
 }
}
