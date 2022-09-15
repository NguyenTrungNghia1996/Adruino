#include <Servo.h>      // Thư viện điều khiển servo
 
// Khai báo đối tượng myservo dùng để điều khiển servo
Servo myservo;          
 
int bientro = A0;       // Khai báo chân analog đọc biến trở điều khiển servo
int servoPin = 8;       // Khai báo chân điều khiển servo
 
void setup ()
{
    // Cài đặt chức năng điều khiển servo cho chân servoPin
    myservo.attach(servoPin); 
    
    Serial.begin(9600); // Mở giao tiếp Serial ở baudrate 9600
}
 
void loop ()
{
    int value = analogRead(bientro);// Đọc giá trị biến trở
    
    // Chuyển giá trị analog (0-1023) đọc được từ biến trở sang số đo độ (0-180độ)
    // dùng để điều khiển góc quay cho servo
    int servoPos = map(value, 0, 1023, 0, 180);
    
    // Cho servo quay một góc là servoPos độ
    myservo.write(servoPos);
    
    Serial.println(servoPos);
    
    delay(100);
}
