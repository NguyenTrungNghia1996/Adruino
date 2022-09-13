//const int ledBlue = 13;
//const int ledRed = 12;

#define ledBlue 13
#define ledRed 12

int ledStateBlue = LOW;
int ledStateRed = LOW;

unsigned long previousMillisBlue = 0;
unsigned long previousMillisRed = 0;

const long intervalBlue = 1000;
const long intervalRed = 2500;   

void setup() {
  pinMode(ledBlue, OUTPUT);
  pinMode(ledRed, OUTPUT);
}

void loop() {
  unsigned long currentMillisBlue = millis();
  if (currentMillisBlue - previousMillisBlue >= intervalBlue) {
    previousMillisBlue = currentMillisBlue;
    if (ledStateBlue == LOW) {
      ledStateBlue = HIGH;
    } else {
      ledStateBlue = LOW;
    }
    digitalWrite(ledBlue, ledStateBlue);
  }

  unsigned long currentMillisRed = millis();
  if (currentMillisRed - previousMillisRed >= intervalRed) {
    previousMillisRed = currentMillisRed;
    if (ledStateRed == LOW) {
      ledStateRed = HIGH;
    } else {
      ledStateRed = LOW;
    }
    digitalWrite(ledRed, ledStateRed);
  }
}
