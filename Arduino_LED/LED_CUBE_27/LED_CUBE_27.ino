/*
 Let's build a led cube and control it with an Arduino Uno
*/

const int layerPins[] = {2, 3, 4}; // Pins connected to the layers (anodes)
const int columnPins[] = {5, 6, 7, 8, 9, 10, 11, 12, 13}; // Pins connected to the columns (cathodes)
const int numLayers = 3;
const int numColumns = 9;

void setup() {
  for (int i = 0; i < numLayers; i++) {
    pinMode(layerPins[i], OUTPUT);
  }
  for (int i = 0; i < numColumns; i++) {
    pinMode(columnPins[i], OUTPUT);
  }
}

void loop() {
  // Turn on each LED in the cube one by one
  for (int layer = 0; layer < numLayers; layer++) {
    for (int column = 0; column < numColumns; column++) {
      // Turn on the LED at the current layer and column
      digitalWrite(layerPins[layer], HIGH);
      digitalWrite(columnPins[column], LOW);
      delay(50);                       // Adjust the delay for the desired display rate
      // Turn off the LED
      digitalWrite(layerPins[layer], LOW);
      digitalWrite(columnPins[column], HIGH);
    }
  }
}
