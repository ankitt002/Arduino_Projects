const int flamePin = 2; // Digital pin connected to the flame sensor

void setup() {
  Serial.begin(9600);
  pinMode(flamePin, INPUT);
}

void loop() {
  int flameDetected = digitalRead(flamePin);

  if (flameDetected == HIGH) {
    Serial.println("Flame detected!");
  } else {
    Serial.println("No flame.");
  }

  delay(1000); // Delay for a moment before the next reading.
}
