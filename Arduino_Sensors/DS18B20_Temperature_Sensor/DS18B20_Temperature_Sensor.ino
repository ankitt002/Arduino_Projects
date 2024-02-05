#include <OneWire.h>
#include <DallasTemperature.h>

#define ONE_WIRE_BUS 2 // Digital pin connected to the DS18B20 sensor

OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

void setup() {
  Serial.begin(9600);
  sensors.begin();
}

void loop() {
  sensors.requestTemperatures();
  float temperatureC = sensors.getTempCByIndex(0);
  float temperatureF = sensors.getTempFByIndex(0);
  
  Serial.print("Temperature (Celsius): ");
  Serial.println(temperatureC);
  Serial.print("Temperature (Fahrenheit): ");
  Serial.println(temperatureF);
  
  delay(1000); // Delay for a moment before the next reading.
}
