/*
 Let's display an scrolling message over 8*8 LEDmatrix.
*/

//First include an library called Ledcontrol for 8*8 matrix
#include "LedControl.h"

// Define the number of devices (usually 1 for an 8x8 matrix)
int numDevices = 1;

// Define the pins for the data and clock lines (adjust these according to your wiring)
int dataPin = 12;
int clockPin = 11;
int csPin = 10;

LedControl lc = LedControl(dataPin, clockPin, csPin, numDevices);

void setup() {
  lc.shutdown(0, false);  // Turn on the display
  lc.setIntensity(0, 8);  // Set the brightness (0-15)
  lc.clearDisplay(0);     // Clear the display
}

void loop() {
  displayMessage("HELLO WORLD!  I'M ANKIT TIWARI ");  // Type the message here
  delay(2000);  // Display for 2 seconds
}

void displayMessage(const char* message) {
  int messageLength = strlen(message);
  int totalWidth = messageLength + 8;  // Account for padding on the right

  for (int scrollPosition = -8; scrollPosition < totalWidth; scrollPosition++) {
    for (int col = 0; col < 8; col++) {
      for (int row = 0; row < 8; row++) {
        int messageIndex = col + scrollPosition;
        if (messageIndex >= 0 && messageIndex < messageLength) {
          char character = message[messageIndex];
          int asciiIndex = character - 32;  // Convert ASCII to index (starting from space)
          lc.setRow(0, row, lc.getChar(0, asciiIndex));
        } else {
          lc.setRow(0, row, 0);
        }
      }
    }
    delay(100);  // Adjust this delay to control the scrolling speed
  }
}
