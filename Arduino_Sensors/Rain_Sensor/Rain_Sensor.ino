const int rainPin = 2; // Digital pin connected to the rain sensor

void setup() {
  Serial.begin(9600);
  pinMode(rainPin, INPUT);
}

void loop() {
  int rainDetected = digitalRead(rainPin);

  if (rainDetected == LOW) {
    Serial.println("Rain detected!");
  } else {
    Serial.println("No rain.");
  }

  delay(1000); // Delay for a moment before the next reading.
}
