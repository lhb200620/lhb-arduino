#ifndef _MORSE_H
#define _MORSE_H
class Morse
{
  public:
    Morse(int pin);
    void dot();
    void dash();
    void c_space();
    void w_space();
  private:
    int _pin;
};
#endif /*_MORSE_H*/

#include "Arduino.h"

Morse::Morse(int pin)
{
  pinMode(pin,OUTPUT);
  _pin=pin;
}

void Morse::dot()
{
  digitalWrite(_pin,HIGH);
  delay(250);
  digitalWrite(_pin,LOW);
  delay(250);
}

void Morse::dash()
{
  digitalWrite(_pin,HIGH);
  delay(1000);
  digitalWrite(_pin,LOW);
  delay(250);
}

void Morse::c_space()
{
  delay(750);
}

void Morse::w_space()
{
 delay(1750); 
}
Morse morse(13);
void setup(){
  Serial.begin(9600);//设置波特率为9600
}

String arr="";
int z=0;
void loop(){
  while(Serial.available()>0){
  z=Serial.read();
  switch(z)
  {
    case 97:arr="*-  ";break;//a
    case 98:arr="-***";break;//b
    case 99:arr="-*-*";break;//c
    case 100:arr="-** ";break;//d
    case 101:arr="*   ";break;//e
    case 102:arr="**-*";break;//f
    case 103:arr="--* ";break;//g
    case 104:arr="****";break;//h
    case 105:arr="**  ";break;//i
    case 106:arr="*---";break;//j
    case 107:arr="-*- ";break;//k
    case 108:arr="*-**";break;//l
    case 109:arr="--  ";break;//m
    case 110:arr="-*  ";break;//n
    case 111:arr="--- ";break;//o
    case 112:arr="*--*";break;//p
    case 113:arr="--*-";break;//q
    case 114:arr="*-* ";break;//r
    case 115:arr="*** ";break;//s
    case 116:arr="-   ";break;//t
    case 117:arr="**- ";break;//u
    case 118:arr="***-";break;//v
    case 119:arr="*-- ";break;//w
    case 120:arr="-**-";break;//x
    case 121:arr="-*--";break;//y
    case 122:arr="--**";break;//z
    case 32:arr="*-*-";break;//space
    case 10:arr="----";break;//enter
    default:break;}
  int x=0;
  for(x=0;x<4;x++){
    if(arr[x]=='*')
    morse.dot();
    if(arr[x]=='-')
    morse.dash();      
    delay(10);         
  }
  delay(350);
  arr="";
}}
