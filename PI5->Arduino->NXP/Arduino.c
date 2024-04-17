#include <Wire.h>


void setup() {
  Wire.begin(8);            
  Wire.onReceive(receiveEvent);  
  Serial.begin(115200);          
}


void loop() {
  delay(1000);
}
void receiveEvent(int bytes) {
  while (Wire.available()) {
    int c = Wire.read();
    if(c==1){
      Serial.println("Button");
    }  
    else if(c==2){
      Serial.println("Return");
    }                
  }
}
