#include <RotaryEncoder.h>

RotaryEncoder encoder(2, 3); // CLK and DT pins of the encoder

void setup() {
  Serial.begin(9600);
}

void loop() {
  int16_t encoderPos = encoder.read();
  
  if (encoderPos != 0) {
    Serial.print("Encoder Position: ");
    Serial.println(encoderPos);
  }
  
  if (digitalRead(4) == LOW) {
    Serial.println("Switch Pressed");
    delay(200); // Debounce delay
  }
}
