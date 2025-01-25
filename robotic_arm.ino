#include <Servo.h>

Servo myServo1;
Servo myServo2;
Servo myServo3;
Servo myServo4;
Servo myServo5;
Servo myServo6;

int servo1Position;
int servo2Position;
int servo3Position;
int servo4Position;
int servo5Position;
int servo6Position;

int homePosition = 93;

void setup() {
  pinMode(4 ,INPUT_PULLUP);
  pinMode(5 ,INPUT_PULLUP);
  
  pinMode(6 ,INPUT_PULLUP);
  pinMode(7 ,INPUT_PULLUP);
  
  pinMode(3 ,INPUT_PULLUP);
  pinMode(14 ,INPUT_PULLUP);

  pinMode(2, INPUT_PULLUP);
  pinMode(15,INPUT_PULLUP);
  
  pinMode(16,INPUT_PULLUP);
  pinMode(18,INPUT_PULLUP);
  
  pinMode(19,INPUT_PULLUP);
  pinMode(20,INPUT_PULLUP);


  myServo1.attach(26);
  myServo2.attach(27);
  myServo3.attach(28);
  myServo4.attach(29);
  myServo5.attach(30);
  myServo6.attach(31);

  myServo1.write(homePosition);
  myServo2.write(homePosition);
  myServo3.write(homePosition);
  myServo4.write(homePosition);
  myServo5.write(homePosition);
  myServo6.write(homePosition);
  Serial.begin(9600);
}

void loop() {
 
  bool baseforwardPressed = !digitalRead(4); // ok
  bool basebackwardPressed = !digitalRead(5); // ok
  bool baseleftPressed = !digitalRead(7); // ok
  bool baserightPressed = !digitalRead(6); // ok
  
  bool arm1forwardPressed = !digitalRead(3); // ok
  bool arm1backwardPressed = !digitalRead(2); // ok
  bool arm1leftPressed = !digitalRead(14); // ok 
  bool arm1rightPressed = !digitalRead(15); // ok
  
  bool arm2forwardPressed = !digitalRead(16);
  bool arm2backwardPressed = !digitalRead(18);
  bool arm2leftPressed = !digitalRead(19);
  bool arm2rightPressed = !digitalRead(20);

  servo1Position = myServo1.read();
  servo2Position = myServo2.read();
  servo3Position = myServo3.read();
  servo4Position = myServo4.read();
  servo5Position = myServo5.read();
  servo6Position = myServo6.read();

  // Base arm --------------------------------------------
  //forward 
//  if (baseforwardPressed) {
//    if (servo1Position < 180) { // Ensure the position does not exceed 180 degrees
//      servo1Position=servo1Position+1;
//      Serial.println(servo1Position);
//      myServo1.write(servo1Position);
//      delay(20); // Debounce delay
//      Serial.println("Forward Button Pressed. Position: " + String(servo1Position));
//    }
//    
//  }
//
//  //backward
//  if (basebackwardPressed) {
//    if (servo1Position > 0) { // Ensure the position does not go below 0 degrees
//      servo1Position=servo1Position-1;
//      Serial.println(servo1Position);
//      myServo1.write(servo1Position);
//      delay(20); // Debounce delay
//      Serial.println("Backward Button Pressed. Position: " + String(servo1Position));
//    }
//  }
//
//  //left
//  if (baseleftPressed) {
//    if (servo2Position < 180) { // Ensure the position does not exceed 180 degrees
//      servo2Position=servo2Position+1;
//      Serial.println(servo2Position);
//      myServo2.write(servo2Position);
//      delay(50); // Debounce delay
//      Serial.println("Forward Button Pressed. Position: " + String(servo2Position));
//    }
//  }
//
//  //right
//  if (baserightPressed) {
//    if (servo2Position > 0) { // Ensure the position does not go below 0 degrees
//      servo2Position=servo2Position-1;
//      Serial.println(servo2Position);
//      myServo2.write(servo2Position);
//      delay(50); // Debounce delay
//      Serial.println("Backward Button Pressed. Position: " + String(servo2Position));
//    }
//  }
//
//// arm1 --------------------------------------------------------------------------------------
//  //forward 
//  if (arm1forwardPressed) {
//    if (servo3Position < 180) { // Ensure the position does not exceed 180 degrees
//      servo3Position=servo3Position+1;
//      Serial.println(servo3Position);
//      myServo3.write(servo3Position);
//      delay(20); // Debounce delay
//      Serial.println("Forward Button Pressed. Position: " + String(servo3Position));
//    }
//  }
//
//  //backward
//  if (arm1backwardPressed) {
//    if (servo3Position > 0) { // Ensure the position does not go below 0 degrees
//      servo3Position=servo3Position-1;
//      Serial.println(servo3Position);
//      myServo3.write(servo3Position);
//      delay(20); // Debounce delay
//      Serial.println("Backward Button Pressed. Position: " + String(servo3Position));
//    }
//  }
//
//  //left
//  if (arm1leftPressed) {
//    if (servo4Position < 180) { // Ensure the position does not exceed 180 degrees
//      servo4Position=servo4Position+1;
//      Serial.println(servo4Position);
//      myServo4.write(servo4Position);
//      delay(20); // Debounce delay
//      Serial.println("Forward Button Pressed. Position: " + String(servo4Position));
//    }
//  }
//
//  //right
//  if (arm1rightPressed) {
//    if (servo4Position > 0) { // Ensure the position does not go below 0 degrees
//      servo4Position=servo4Position-1;
//      Serial.println(servo4Position);
//      myServo4.write(servo4Position);
//      delay(20); // Debounce delay
//      Serial.println("Backward Button Pressed. Position: " + String(servo4Position));
//    }
//  }
//
//
//// arm2 --------------------------------------------------------------------------------------
//forward 
  if (arm2forwardPressed) {
    if (servo5Position < 180) { // Ensure the position does not exceed 180 degrees
      servo5Position=servo5Position+1;
      Serial.println(servo5Position);
      myServo5.write(servo5Position);
      delay(20); // Debounce delay
      Serial.println("Forward Button Pressed. Position: " + String(servo5Position));
    }
  }

  //backward
  if (arm2backwardPressed) {
    if (servo5Position > 0) { // Ensure the position does not go below 0 degrees
      servo5Position=servo5Position-1;
      Serial.println(servo5Position);
      myServo5.write(servo5Position);
      delay(20); // Debounce delay
      Serial.println("Backward Button Pressed. Position: " + String(servo5Position));
    }
  }

//  //left
//  if (arm2leftPressed) {
//    if (servo6Position < 180) { // Ensure the position does not exceed 180 degrees
//      servo6Position=servo6Position+1;
//      Serial.println(servo6Position);
//      myServo6.write(servo6Position);
//      delay(20); // Debounce delay
//      Serial.println("Forward Button Pressed. Position: " + String(servo6Position));
//    }
//  }
//
//  //right
//  if (arm2rightPressed) {
//    if (servo6Position > 0) { // Ensure the position does not go below 0 degrees
//      servo6Position=servo6Position-1;
//      Serial.println(servo6Position);
//      myServo6.write(servo6Position);
//      delay(20); // Debounce delay
//      Serial.println("Backward Button Pressed. Position: " + String(servo6Position));
//    }
//  }




}
