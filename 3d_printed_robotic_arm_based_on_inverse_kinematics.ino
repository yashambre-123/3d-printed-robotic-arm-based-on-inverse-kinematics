/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>
#include <Stepper.h>

Servo myservo1;  // create servo object to control a servo
Servo myservo2;
Servo myservo3;
Servo myservo4;
Servo myservo5;
Servo myservo6;
// twelve servo objects can be created on most boards

float pos1 = 0;    // variable to store the servo position
float pos2=0;

//const int stepsPerRevolution = 200;  // change this to fit the number of steps per revolution
// for your motor

// initialize the stepper library on pins 8 through 11:
//Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);

void setup() {
//  myStepper.setSpeed(30);
  myservo1.attach(2);  // attaches the servo on pin 9 to the servo object
  myservo2.attach(3);
//  myservo3.attach(4);
  myservo4.attach(5);
  myservo5.attach(6);
  myservo6.attach(7);
  
//  delay(4000);
//  myservo4.write(30);
//  delay(4000);
  float length_whole=20;
  float x=24;
  float y=14;
  float theta_radians=acos(((x*x)-(y*y)-(length_whole*length_whole)-(length_whole*length_whole))/(2*length_whole*length_whole));
  float theta_degrees=(theta_radians*180)/3.14;
  pos1=theta_degrees;
  myservo1.write(pos1);
  pos2=180-pos1;
  myservo2.write(pos2);
  delay(4000);
//  myservo3.write(0);
//  delay(4000);
  x=25;
  y=25;
  theta_radians=atan(y/x);
  theta_degrees=(theta_radians*180)/3.14;
  float reqd_theta=180-(theta_degrees*2);
  myservo4.write(reqd_theta);
  delay(4000);
  myservo5.write(180);
  delay(4000);
  myservo6.write(50);
  delay(4000);
  myservo5.write(60);
  delay(4000);
  myservo5.write(180);
  delay(4000);
  myservo6.write(150);
  delay(4000);
  myservo5.write(0);
//  myservo5.write(0);
//  myStepper.step(stepsPerRevolution);
//  delay(4000);
//  myservo5.write(30);
}

void loop() {
//  for (pos1 = 0; pos1 <= 170; pos1 += 1) { // goes from 0 degrees to 180 degrees
//    // in steps of 1 degree
//    myservo1.write(pos1);              // tell servo to go to position in variable 'pos'
//    pos2=180-pos1;
//    myservo2.write(pos2);
//    delay(15);                       // waits 15ms for the servo to reach the position
//  }
//  for (pos1 = 170; pos1 >= 0; pos1 -= 1) { // goes from 180 degrees to 0 degrees
//    myservo1.write(pos1);              // tell servo to go to position in variable 'pos'
//    pos2=180-pos1;
//    myservo2.write(pos2);
//    delay(15);                       // waits 15ms for the servo to reach the position
//  }
}
