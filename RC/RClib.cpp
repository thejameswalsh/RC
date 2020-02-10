#include "RClib.h"

void RClib::printtest(){
//  Serial.println(usedata);
  Serial.println("Hello World, Test Print");
}

void RClib::printtest(String data){
  Serial.println(data);
}

void RClib::setspeed(int motor_1_speed){
  if(motor_1_speed > 0)
  {
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
  }
  else if(motor_1_speed < 0)
  {
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
  }
  analogWrite(enA,motor_1_speed);
}

void RClib::setangle(int turnAngle){
  servo.write(turnAngle);
}


