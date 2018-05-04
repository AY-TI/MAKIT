#include <Servo.h>

Servo UselessBoxServo1, UselessBoxServo2;

int UselessBoxServoAct = 1;
int UselessBoxSWStatus = 0;

int UselessBoxSW = 13;

void setup(){
  UselessBoxServo1.attach(9);
  UselessBoxServo1.write(100);
  UselessBoxServo2.attach(10);
  UselessBoxServo2.write(40);

  pinMode(13, INPUT_PULLUP);
}

void loop(){
  UselessBoxSWStatus = digitalRead(UselessBoxSW);

  if(UselessBoxSWStatus == HIGH){
    if(UselessBoxServoAct == 1){
      for(int UselessBoxServoAng = 100; UselessBoxServoAng >= 20; UselessBoxServoAng--){
        UselessBoxServo1.write(UselessBoxServoAng);
        delay(20);
      }
      
      for(int UselessBoxServoAng = 40; UselessBoxServoAng <= 180; UselessBoxServoAng++){
        UselessBoxServo2.write(UselessBoxServoAng);
        delay(20);
      }

      for(int UselessBoxServoAng = 180; UselessBoxServoAng >= 40; UselessBoxServoAng--){
        UselessBoxServo2.write(UselessBoxServoAng);
        delay(20);
      } 

      for(int UselessBoxServoAng = 20; UselessBoxServoAng <= 100; UselessBoxServoAng++){
        UselessBoxServo1.write(UselessBoxServoAng);
        delay(20);
      }  

      UselessBoxServoAct++;
    }

    else if(UselessBoxServoAct == 2){
      for(int UselessBoxServoAng = 100; UselessBoxServoAng >= 20; UselessBoxServoAng--){
        UselessBoxServo1.write(UselessBoxServoAng);
        delay(20);
      }
      
      for(int UselessBoxServoAng = 40; UselessBoxServoAng <= 180; UselessBoxServoAng++){
        UselessBoxServo2.write(UselessBoxServoAng);
        delay(20);
      }

      for(int UselessBoxServoAng = 180; UselessBoxServoAng >= 40; UselessBoxServoAng--){
        UselessBoxServo2.write(UselessBoxServoAng);
        delay(20);
      } 

      for(int UselessBoxServoAng = 20; UselessBoxServoAng <= 100; UselessBoxServoAng++){
        UselessBoxServo1.write(UselessBoxServoAng);
        delay(20);
      }  

      UselessBoxServoAct++;
    }

    else if(UselessBoxServoAct == 3){
      for(int UselessBoxServoAng = 100; UselessBoxServoAng >= 20; UselessBoxServoAng--){
        UselessBoxServo1.write(UselessBoxServoAng);
        delay(50);
      }
      
      for(int UselessBoxServoAng = 40; UselessBoxServoAng <= 180; UselessBoxServoAng++){
        UselessBoxServo2.write(UselessBoxServoAng);
        delay(50);
      }

      for(int UselessBoxServoAng = 180; UselessBoxServoAng >= 40; UselessBoxServoAng--){
        UselessBoxServo2.write(UselessBoxServoAng);
        delay(50);
      } 

      for(int UselessBoxServoAng = 20; UselessBoxServoAng <= 100; UselessBoxServoAng++){
        UselessBoxServo1.write(UselessBoxServoAng);
        delay(50);
      }  

      UselessBoxServoAct++;
    }

    else if(UselessBoxServoAct == 4){ 
      for(int UselessBoxServoAng = 40; UselessBoxServoAng <= 100; UselessBoxServoAng++){
        UselessBoxServo2.write(UselessBoxServoAng);
        delay(100);
      }

      for(int UselessBoxServoAng = 100; UselessBoxServoAng >= 40; UselessBoxServoAng--){
        UselessBoxServo2.write(UselessBoxServoAng);
        delay(100);
      } 

      for(int UselessBoxServoAng = 40; UselessBoxServoAng <= 180; UselessBoxServoAng++){
        UselessBoxServo2.write(UselessBoxServoAng);
        delay(20);
      }

      for(int UselessBoxServoAng = 180; UselessBoxServoAng >= 40; UselessBoxServoAng--){
        UselessBoxServo2.write(UselessBoxServoAng);
        delay(20);
      } 
      
      UselessBoxServoAct++;
    }

    else if(UselessBoxServoAct == 5){
      UselessBoxServo1.write(20);
      delay(100);
      UselessBoxServo1.write(100);
      delay(100);
      UselessBoxServo1.write(20);
      delay(100);
      UselessBoxServo1.write(100);
      delay(100);
      UselessBoxServo1.write(20);
      delay(100);
      UselessBoxServo1.write(100);
      delay(100);
      UselessBoxServo1.write(20);
      delay(100);
      UselessBoxServo1.write(100);
      delay(100);
      UselessBoxServo1.write(20);
      delay(100);
      UselessBoxServo1.write(100);
      delay(100);
      UselessBoxServo1.write(20);
      delay(100);
      UselessBoxServo1.write(100);
      delay(100);
      UselessBoxServo1.write(20);
      delay(100);
      UselessBoxServo1.write(100);
      delay(100);
      UselessBoxServo1.write(20);
      delay(100);
      UselessBoxServo1.write(100);
      delay(100);
      
      for(int UselessBoxServoAng = 40; UselessBoxServoAng <= 180; UselessBoxServoAng++){
        UselessBoxServo2.write(UselessBoxServoAng);
        delay(20);
      }

      for(int UselessBoxServoAng = 180; UselessBoxServoAng >= 40; UselessBoxServoAng--){
        UselessBoxServo2.write(UselessBoxServoAng);
        delay(20);
      } 
      
      UselessBoxServoAct++;
    }

    else if(UselessBoxServoAct == 6){ 
      for(int UselessBoxServoAng = 100; UselessBoxServoAng >= 20; UselessBoxServoAng--){
        UselessBoxServo1.write(UselessBoxServoAng);
        delay(20);
      }
      
      for(int UselessBoxServoAng = 40; UselessBoxServoAng <= 180; UselessBoxServoAng++){
        UselessBoxServo2.write(UselessBoxServoAng);
        delay(20);
      }

      for(int UselessBoxServoAng = 180; UselessBoxServoAng >= 40; UselessBoxServoAng--){
        UselessBoxServo2.write(UselessBoxServoAng);
        delay(20);
      } 

      for(int UselessBoxServoAng = 20; UselessBoxServoAng <= 100; UselessBoxServoAng++){
        UselessBoxServo1.write(UselessBoxServoAng);
        delay(20);
      }  

      UselessBoxServoAct = 1;
    }
  }
}
