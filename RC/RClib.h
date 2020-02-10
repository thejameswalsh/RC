#include "arduino.h"
#include <Servo.h>

class RClib
{
  public:
    void printtest();
    void printtest(String data);
    //constructor
    RClib(int servoPin,
    int motor_1_pin_1,
    int motor_1_pin_2,
    int motor_1_pin_3){
      enA = motor_1_pin_1;
      in1 = motor_1_pin_2;
      in2 = motor_1_pin_3;

      servo.attach(servoPin);
      pinMode(enA, OUTPUT);
      pinMode(in1, OUTPUT);
      pinMode(in2, OUTPUT);
    }
    //functions
    void setspeed(int motor_1_speed);
    void setangle(int turnAngle);
    
  private:
    Servo servo;
    int enA;
    int in1;
    int in2;
    int pos = 0;
};

