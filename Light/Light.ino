int quangtro = A1; //Thiết đặt chân analog đọc quang trở
void setup() {
  Serial.begin(9600);
}

void loop() {
  int giatriQuangtro = analogRead(quangtro);
  
  Serial.println(giatriQuangtro);
}
