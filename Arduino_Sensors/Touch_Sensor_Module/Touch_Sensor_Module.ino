const int touchPin = 2; // Digital pin connected to the touch sensor

void setup() {
  Serial.begin(9600);
  pinMode(touchPin, INPUT);
}

void loop() {
  int touchState = digitalRead(touchPin);

  if (touchState == HIGH) {
    Serial.println("Touch detected!");
  } else {
    Serial.println("No touch.");
  }

  delay(1000); // Delay for a moment before the next reading.
}
