#include <Servo.h>
Servo motor;

void setup(){
  Serial.begin(9600);
  motor.attach(9);
}

void loop(){
  int angulo;
  if(Serial.available()>0){
    angulo = Serial.read();
    if(angulo >= 0 && angulo <= 180){
      motor.write(angulo);
      Serial.print(angulo);
    }
  }
}