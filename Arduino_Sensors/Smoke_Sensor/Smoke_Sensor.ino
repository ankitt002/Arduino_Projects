const int smokePin = 2; // Digital pin connected to the smoke sensor

void setup() {
  Serial.begin(9600);
  pinMode(smokePin, INPUT);
}

void loop() {
  int smokeDetected = digitalRead(smokePin);

  if (smokeDetected == HIGH) {
    Serial.println("Smoke detected!");
  } else {
    Serial.println("No smoke.");
  }

  delay(1000); // Delay for a moment before the next reading.
}
