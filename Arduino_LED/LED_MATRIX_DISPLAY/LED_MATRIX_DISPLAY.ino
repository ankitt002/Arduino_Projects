/*
Let's display an smiley over a 8*8 matrix. 
*/

#include "LedControl.h" /// Include library 

// Define the number of devices (usually 1 for an 8x8 matrix)
int numDevices = 1;

// Define the pins for the data and clock lines (adjust these according to your wiring)
int dataPin = 12;
int clockPin = 11;
int csPin = 10;

LedControl lc = LedControl(dataPin, clockPin, csPin, numDevices);

void setup() {
  // Initialize the display
  lc.shutdown(0, false);  // Turn on the display
  lc.setIntensity(0, 8);  // Set the brightness (0-15)
  lc.clearDisplay(0);     // Clear the display
}

void loop() {
  displaySmiley();
  delay(2000);  // Display for 2 seconds

  // You can create more display patterns or animations here
}

void displaySmiley() {
  byte smiley[8] = {
    B00111100,
    B01000010,
    B10100101,
    B10000001,
    B10100101,
    B10011001,
    B01000010,
    B00111100
  };

  for (int row = 0; row < 8; row++) {
    lc.setRow(0, row, smiley[row]);
  }
}
