void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  
  
}
void show(int n){
  if(n==0)
  {
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
  }
  else if(n==1)
  {
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
  }
  else if(n==2)
  {
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
  }
  else if(n==3)
  {
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
  }
  else if(n==4)
  {
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
  }
  else if(n==5)
  {
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
  }
  else if(n==6)
  {
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
  }
  else if(n==7)
  {
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
  }
  else if(n==8)
  {
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
  }else if(n==9)
  {
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
   int income;
   int x;
   digitalWrite(6,LOW);
   delay(10);
  if(Serial.available()>0){
    income=Serial.read();
    switch(income)
    {
      case'0':x=0;break;
      case'1':x=1;break;
      case'2':x=2;break;
      case'3':x=3;break;
      case'4':x=4;break;
      case'5':x=5;break;
      case'6':x=6;break;
      case'7':x=7;break;
      case'8':x=8;break;
      case'9':x=9;break;
      default:break;
    }
    show(x);
    Serial.print(x);
    delay(1000);
    x=0;
  }
}
