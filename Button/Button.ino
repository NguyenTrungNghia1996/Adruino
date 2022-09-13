#define ledBlue 13
#define ledRed 12

#define SW1 2
#define SW2 3

void setup() {
  pinMode(SW1, INPUT);
  pinMode(ledBlue, OUTPUT);
  digitalWrite(ledBlue, LOW); 
  pinMode(SW2, INPUT);
  pinMode(ledRed, OUTPUT);
  digitalWrite(ledRed, LOW); 
}

void loop() {
  int buttonStatus1 = digitalRead(SW1);
  int buttonStatus2 = digitalRead(SW2);
  
  if (buttonStatus1 == LOW) {
    digitalWrite(ledBlue, HIGH); 
  } else { // ngược lại
    digitalWrite(ledBlue, LOW);
  }
  if (buttonStatus2 == LOW) {
    digitalWrite(ledRed, HIGH); 
  } else { // ngược lại
    digitalWrite(ledRed, LOW);
  }
}
