#include <IRremote.h>

int IR_PIN = 2; // Digital pin connected to the IR sensor
IRrecv irrecv(IR_PIN);
decode_results results;

void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
}

void loop()
{
  if (irrecv.decode(&results))
  {
    Serial.println(results.value, HEX); // Print the received IR code in hexadecimal
    irrecv.resume(); // Receive the next value
  }
}
