#include "RClib.h"

RClib RC(9,5, 6, 7);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}
  
void loop() {
  // put your main code here, to run repeatedly:
  
  delay(500);
  RC.printtest("ready"); 
  delay(1000);
  RC.printtest("3");
  delay(1000);
  RC.printtest("2");
  delay(1000);
  RC.printtest("1");
  delay(1000);
  RC.printtest("GO");
  
  RC.setspeed(100);
  delay(10000);
  RC.setspeed(255);
  delay(10000);
  RC.setangle(60);
  RC.setspeed(125);
  delay(10000);
  RC.setangle(0);
  RC.setspeed(0);
  delay(2500);
}
