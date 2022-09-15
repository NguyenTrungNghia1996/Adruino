int quangtro = A1;
int Red = 12;//Thiết đặt chân analog đọc quang trở
void setup() {
  Serial.begin(9600);
  pinMode(Red, OUTPUT);
}

void loop() {
  int giatriQuangtro = analogRead(quangtro);
  if (giatriQuangtro < 300) {
    digitalWrite(Red, HIGH);
  } else {
    digitalWrite(Red, LOW);
  }
  Serial.println(giatriQuangtro);
}
