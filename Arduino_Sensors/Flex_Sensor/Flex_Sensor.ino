const int flexPin = A0; // Analog pin connected to the flex sensor

void setup() {
  Serial.begin(9600);
}

void loop() {
  int flexValue = analogRead(flexPin);

  // Convert the analog reading to a degree of flexion (adjust values based on your sensor and calibration)
  int degrees = map(flexValue, 0, 1023, 0, 90); // Assumes 90 degrees maximum flexion

  Serial.print("Degrees of Flexion: ");
  Serial.println(degrees);

  delay(1000); // Delay for a moment before the next reading.
}
