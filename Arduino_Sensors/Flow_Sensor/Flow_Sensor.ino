const int flowSensorPin = 2; // Digital input pin connected to the sensor's DO pin

volatile int flowPulseCount = 0;
float flowRate = 0.0;

void setup() {
  Serial.begin(9600);
  pinMode(flowSensorPin, INPUT);
  attachInterrupt(digitalPinToInterrupt(flowSensorPin), flowPulse, RISING);
}

void loop() {
  flowRate = (flowPulseCount / 7.5); // Adjust the factor for your specific sensor
  Serial.print("Flow Rate: ");
  Serial.print(flowRate);
  Serial.println(" L/min");

  delay(1000); // Delay before the next reading.
}

void flowPulse() {
  flowPulseCount++;
}
