/*
4x4x4 LED cube, cube with 64 LEDs in a 4x4x4 configuration.
This is basic code that will display a static pattern on your cube.
Before using this code, make sure to wire your LED cube.
*/

// Define the pin numbers for the layers
const int layerPins[] = {2, 3, 4, 5};
const int numLayers = 4;

// Define the pin numbers for the columns (common cathode LEDs)
const int columnPins[] = {6, 7, 8, 9, 10, 11, 12, 13};

// Define the LED patterns for each layer
byte layers[] = {
  B00000000, B00000000, B00000000, B00000000,
  B00000000, B00000000, B00000000, B00000000,
  B00000000, B00000000, B00000000, B00000000,
  B00000000, B00000000, B00000000, B00000000
};

void setup() {
  for (int i = 0; i < numLayers; i++) {
    pinMode(layerPins[i], OUTPUT);
  }
  for (int i = 0; i < 8; i++) {
    pinMode(columnPins[i], OUTPUT);
  }
}

void loop() {
  for (int layer = 0; layer < numLayers; layer++) {
    for (int col = 0; col < 8; col++) {
      byte layerPattern = layers[layer];
      if (bitRead(layerPattern, col)) {
        digitalWrite(columnPins[col], HIGH);
      } else {
        digitalWrite(columnPins[col], LOW);
      }
    }
    digitalWrite(layerPins[layer], HIGH);
    delay(1);                               // Adjust the delay to control the display speed
    digitalWrite(layerPins[layer], LOW);
  }
}
