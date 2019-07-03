#include<Morse.h>

Morse morse(13);
void setup(){
  Serial.begin(9600);//设置波特率为9600
}

String str="";
void change(int n)
{
  switch(n)
  {
    case 97:str="*-  ";break;//a
    case 98:str="-***";break;//b
    case 99:str="-*-*";break;//c
    case 100:str="-** ";break;//d
    case 101:str="*   ";break;//e
    case 102:str="**-*";break;//f
    case 103:str="--* ";break;//g
    case 104:str="****";break;//h
    case 105:str="**  ";break;//i
    case 106:str="*---";break;//j
    case 107:str="-*- ";break;//k
    case 108:str="*-**";break;//l
    case 109:str="--  ";break;//m
    case 110:str="-*  ";break;//n
    case 111:str="--- ";break;//o
    case 112:str="*--*";break;//p
    case 113:str="--*-";break;//q
    case 114:str="*-* ";break;//r
    case 115:str="*** ";break;//s
    case 116:str="-   ";break;//t
    case 117:str="**- ";break;//u
    case 118:str="***-";break;//v
    case 119:str="*-- ";break;//w
    case 120:str="-**-";break;//x
    case 121:str="-*--";break;//y
    case 122:str="--**";break;//z
    case 32:str="*-*-";break;//空格
    case 10:str="----";break;//回车
    default:break;
  }
}

void loop(){
  while(Serial.available()>0){
  change(Serial.read());
  int x=0;
  for(x=0;x<4;x++){
    if(str[x]=='*')
    morse.dot();
    if(str[x]=='-')
    morse.dash();      
    delay(10);         
  }
  delay(350);
  str="";
}}
