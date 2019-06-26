#include <Servo.h>

Servo myservo;
int servopin = 3;
int pot = 0;
int potval;

void setup(){
  myservo.attach(servopin);
}

void loop(){
  potval = analogRead(pot);
  myservo.write(map(potval, 0, 1023, 0, 180));
  delay(15);
}