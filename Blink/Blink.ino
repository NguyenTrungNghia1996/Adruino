int BLUE = 13;
int RED = 12;
void setup() {
  pinMode(BLUE, OUTPUT);
  pinMode(RED, OUTPUT);
}
void loop() {
  digitalWrite(BLUE, HIGH);
  digitalWrite(RED, LOW);
  delay(1000);                     
  digitalWrite(BLUE, LOW);
  digitalWrite(RED, HIGH);
  delay(1000);                    
}
