#include <LM35.h>

#define LM35PIN 2

LM35 sensor(LM35PIN);

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(sensor.getTemp());
  delay(1000);// Temp in celcius
}
