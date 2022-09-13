int Rotation = A0; //Thiết đặt chân analog đọc quang trở
void setup() {
  Serial.begin(9600);
}

void loop() {
  int giatriBienTro = analogRead(Rotation);
  
  Serial.println(giatriBienTro);
}
