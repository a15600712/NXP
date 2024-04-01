#include <Wire.h>


void setup() {
  Wire.begin(8);               // 设置 Arduino 的 I2C 地址为 8
  Wire.onReceive(receiveEvent);  // 设置接收数据的回调函数
  Serial.begin(9600);           // 初始化串口通信
}


void loop() {
  delay(10);
}


void receiveEvent(int bytes) {
  Serial.print("Received data: ");
  while (Wire.available()) {
    int c = Wire.read();        // 读取接收到的数据
    Serial.print(c);             // 在串口打印接收到的数据
  }
  Serial.print("\n");
}
