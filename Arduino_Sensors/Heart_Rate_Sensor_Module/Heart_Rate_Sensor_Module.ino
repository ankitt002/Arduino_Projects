void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}#include <Wire.h>
#include "MAX30100_PulseOximeter.h"

#define REPORTING_PERIOD_MS 1000

PulseOximeter pox;

void onBeatDetected() {
  Serial.println("Beat!");
}

void setup() {
  Serial.begin(9600);

  // Initialize the pulse oximeter
  if (!pox.begin()) {
    Serial.println("Could not find a valid MAX30102 sensor, check wiring!");
    while (1);
  }

  pox.setIRLedCurrent(MAX30100_LED_CURR_7_6MA);
  pox.setPulseAmplitudeRed(0x0A);
  pox.setPulseAmplitudeIR(0x0A);

  pox.setOnBeatDetectedCallback(onBeatDetected);
}

void loop() {
  pox.update();

  if (millis() - pox.getIRLastBeatTime() > REPORTING_PERIOD_MS) {
    Serial.print("Heart rate: ");
    Serial.println(pox.getHeartRate());
  }
}
