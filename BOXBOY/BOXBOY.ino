#include <Servo.h>
#define Y.eye        8
#define X.eye        9
#define R.waist      10
#define L.waist      11
#define R.foot       12
#define L.foot       13

int xe =  8;
int ye =  9;
int rw = 10;
int lw = 11;
int rf = 12;
int lf =  13;

Servo XEYE;
Servo YEYE;
Servo RWST;
Servo LWST;
Servo RFOT;
Servo LFOT;

void setup() {
  
  XEYE.attach(xe);
  YEYE.attach(ye);
  RWST.attach(rw);
  LWST.attach(lw);
  RFOT.attach(rf);
  LFOT.attach(lf);

  XEYE.write(90);
  YEYE.write(20);
  RWST.write(90);
  LWST.write(90);
  RFOT.write(110);
  LFOT.write(70);
  delay(1000);

}

void loop() {
  /*
  XEYE.write(90);
  YEYE.write(20);
  RWST.write(90);
  LWST.write(90);
  RFOT.write(110);
  LFOT.write(110);
  
  delay(1000);

  RWST.write(100);
  LWST.write(110);
  RFOT.write(110);
  LFOT.write(110);
  
  delay(1000);

  RWST.write(100);
  LWST.write(110);
  RFOT.write(110);
  LFOT.write(70);

  delay(1000);

  RWST.write(100);
  LWST.write(110);
  RFOT.write(70);
  LFOT.write(70);

  delay(1000);
  */
  RFOT.write(110);
  LFOT.write(70);
  delay(1000);
  RFOT.write(70);
  LFOT.write(70);
  delay(1000);
  RFOT.write(70);
  LFOT.write(110);
  delay(1000);
  RFOT.write(110);
  LFOT.write(110);
  delay(1000);
}

void walk() {
  XEYE.write(90);
  YEYE.write(20);
  RWST.write(90);
  LWST.write(90);
  RFOT.write(110);
  LFOT.write(40);
  
  delay(1000);

  RWST.write(90);
  LWST.write(80);
  RFOT.write(110);
  LFOT.write(40);
  
  delay(10000);
}

void waddle() {
  RWST.write(90);
  RFOT.write(120);
  LWST.write(90);
  LFOT.write(70);
  delay(500);
  RWST.write(90);
  RFOT.write(80);
  LWST.write(90);
  LFOT.write(70);
  delay(500);
}
  /*XEYE.write(90);
  YEYE.write(20);
  RWST.write(90);
  LWST.write(90);
  RFOT.write(110);
  LFOT.write(70);
  delay(1000);
  XEYE.write(90);
  YEYE.write(50);
  RWST.write(90);
  LWST.write(90);
  RFOT.write(110);
  LFOT.write(70);
  delay(1000);
  XEYE.write(110);
  YEYE.write(50);
  RWST.write(90);
  LWST.write(90);
  RFOT.write(110);
  LFOT.write(70);
  delay(500);
  XEYE.write(70);
  YEYE.write(50);
  RWST.write(90);
  LWST.write(90);
  RFOT.write(110);
  LFOT.write(70);
  delay(500);*/
