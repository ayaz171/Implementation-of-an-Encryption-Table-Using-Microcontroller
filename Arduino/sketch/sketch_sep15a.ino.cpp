#include <Arduino.h>
#line 1 "H:\\sketch_sep15a\\sketch_sep15a.ino"
int O0 = 10; 
int O1 = 11; 
int O2 = 12; 
int O3 = 13;
int I0 = 2; 
int I1 = 3; 
int I2 = 4; 
int I3 = 5;
#line 9 "H:\\sketch_sep15a\\sketch_sep15a.ino"
void setup();
#line 14 "H:\\sketch_sep15a\\sketch_sep15a.ino"
void loop();
#line 9 "H:\\sketch_sep15a\\sketch_sep15a.ino"
void setup()
{
pinMode(I0,INPUT); pinMode(I1,INPUT); pinMode(I2,INPUT); pinMode(I3,INPUT); pinMode(O0,OUTPUT); pinMode(O1,OUTPUT); pinMode(O2,OUTPUT); pinMode(O3,OUTPUT);
}

void loop()
{
boolean I0State = digitalRead(I0); boolean I1State = digitalRead(I1); boolean I2State = digitalRead(I2); boolean I3State = digitalRead(I3); boolean O0State;
boolean O1State; boolean O2State; boolean O3State;

O0State= (!I1State&!I2State&I3State)|(!I0State&I1State&!I3State)|(I0State&!I1State&!I2State);
O1State= (I2State&!I3State)|(!I0State&I1State&!I2State)|(I0State&!I1State&I3State); O2State= (!I0State&!I1State)|(!I1State&I2State&I3State)|(I0State&I1State); O3State=
(!I0State&!I2State)|(!I0State&!I1State&I3State)|(!I0State&I1State&!I3State)|(I1State&! I2State&I3State)|(I0State&I2State);

digitalWrite(O0,O0State); digitalWrite(O1,O1State); digitalWrite(O2,O2State); digitalWrite(O3,O3State);

if (digitalRead(I0) == 0 && digitalRead(I1) == 0 && digitalRead(I2) == 0 && digitalRead(I3) == 0)
{digitalWrite(O0,LOW) ; digitalWrite(O1,HIGH) ; digitalWrite(O2,LOW) ; digitalWrite(O3,HIGH);

}
 
if (digitalRead(I0) == 0 && digitalRead(I1) == 0 && digitalRead(I2) == 0 && digitalRead(I3) == 1)
{digitalWrite(O0,HIGH) ; digitalWrite(O1,HIGH) ; digitalWrite(O2,LOW) ; digitalWrite(O3,LOW);

} if (digitalRead(I0) == 0 && digitalRead(I1) == 0 && digitalRead(I2) == 1 && digitalRead(I3) == 0)
{digitalWrite(O0,HIGH) ; digitalWrite(O1,LOW) ; digitalWrite(O2,HIGH) ; digitalWrite(O3,LOW);

} if (digitalRead(I0) == 0 && digitalRead(I1) == 0 && digitalRead(I2) == 1 && digitalRead(I3) == 1)
{digitalWrite(O0,LOW) ; digitalWrite(O1,HIGH) ; digitalWrite(O2,HIGH) ; digitalWrite(O3,LOW);

} if (digitalRead(I0) == 0 && digitalRead(I1) == 1 && digitalRead(I2) == 0 && digitalRead(I3) == 0)
{digitalWrite(O0,HIGH) ; digitalWrite(O1,LOW) ; digitalWrite(O2,HIGH) ; digitalWrite(O3,HIGH);

} if (digitalRead(I0) == 0 && digitalRead(I1) == 1 && digitalRead(I2) == 0 && digitalRead(I3) == 1)
{digitalWrite(O0,HIGH) ; digitalWrite(O1,HIGH) ; digitalWrite(O2,LOW) ; digitalWrite(O3,LOW);

} if (digitalRead(I0) == 0 && digitalRead(I1) == 1 && digitalRead(I2) == 1 && digitalRead(I3) == 0)
{digitalWrite(O0,LOW) ; digitalWrite(01,HIGH) ; digitalWrite(O2,HIGH) ; digitalWrite(O3,LOW);

} if (digitalRead(I0) == 0 && digitalRead(I1) == 1 && digitalRead(I2) == 1 && digitalRead(I3) == 1)
{digitalWrite(O0,HIGH) ; digitalWrite(O1,HIGH) ; digitalWrite(O2,LOW) ; digitalWrite(O3,LOW);

} if (digitalRead(I0) == 1 && digitalRead(I1) == 0 && digitalRead(I2) == 0 && digitalRead(I3) == 0)
{digitalWrite(O0,LOW) ; digitalWrite(O1,LOW) ; digitalWrite(O2,LOW) ; digitalWrite(O3,HIGH);

} if (digitalRead(I0) == 1 && digitalRead(I1) == 0 && digitalRead(I2) == 0 && digitalRead(I3) == 1)
{digitalWrite(O0,LOW) ; digitalWrite(O1,LOW) ; digitalWrite(O2,HIGH) ; digitalWrite(O3,HIGH);
 
} if (digitalRead(I0) == 1 && digitalRead(I1) == 0 && digitalRead(I2) == 1 && digitalRead(I3) == 0)
{digitalWrite(O0,HIGH) ; digitalWrite(O1,LOW) ; digitalWrite(O2,HIGH) ; digitalWrite(O3,HIGH);

} if (digitalRead(I0) == 1 && digitalRead(I1) == 0 && digitalRead(I2) == 1 && digitalRead(I3) == 1)
{digitalWrite(O0,HIGH) ; digitalWrite(O1,HIGH) ; digitalWrite(O2,LOW) ; digitalWrite(O3,LOW);

} if (digitalRead(I0) == 1 && digitalRead(I1) == 1 && digitalRead(I2) == 0 && digitalRead(I3) == 0)
{digitalWrite(O0,HIGH) ; digitalWrite(O1,LOW) ; digitalWrite(O2,HIGH) ; digitalWrite(O3,LOW);

} if (digitalRead(I0) == 1 && digitalRead(I1) == 1 && digitalRead(I2) == 0 && digitalRead(I3) == 1)
{digitalWrite(O0,LOW) ; digitalWrite(O1,HIGH) ; digitalWrite(O2,HIGH) ; digitalWrite(O3,HIGH);

} if (digitalRead(I0) == 1 && digitalRead(I1) == 1 && digitalRead(I2) == 1 && digitalRead(I3) == 0)
{digitalWrite(O0,LOW) ; digitalWrite(O1,LOW) ; digitalWrite(O2,HIGH) ; digitalWrite(O3,LOW);

} if (digitalRead(I0) == 1 && digitalRead(I1) == 1 && digitalRead(I2) == 1 && digitalRead(I3) == 1)
{digitalWrite(O0,HIGH) ; digitalWrite(O1,HIGH) ; digitalWrite(O2,HIGH) ; digitalWrite(O3,LOW);

}

}

