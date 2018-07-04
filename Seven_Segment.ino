void setup(){
  for(int i=7; i<=13;i++)
  {
    pinMode(i,OUTPUT);
  }
}
void zero(){
  for(int i=7;i<=13;i++)
  {
    if(i==7)
    {
      digitalWrite(i,LOW);
    }
    else 
    {
      digitalWrite(i,HIGH);
    }
  }
  delay(1000);
}
void one(){
  for(int i=7;i<=13;i++)
 {
  if(i==7 || i==8 || i==9 || i==10|| i==13)
  {
    digitalWrite(i,LOW);
  }
  else
  {
    digitalWrite(i,HIGH);
  }
 }
 delay(1000);
}
void two(){
  for(int i=7;i<=13;i++)
 {
  if(i==8 ||i==11)
  {
    digitalWrite(i,LOW);
  }
  else
  {
    digitalWrite(i,HIGH);
  }
 }
 delay(1000);
}
void three(){
  for(int i=7;i<=13;i++)
 {
  if( i==8 || i==9)
  {
    digitalWrite(i,LOW); 
  }
  else
  {
    digitalWrite(i,HIGH);
  }
 }
 delay(1000);
}
void four(){
  for(int i=7;i<=13;i++)
 {
  if( i==9 || i==10 ||i==13)
  {
    digitalWrite(i,LOW);
  }
  else
  {
    digitalWrite(i,HIGH);
  }
 }
 delay(1000);
}
void five(){
  for(int i=7;i<=13;i++)
 {
  if( i==9 || i==12)
  {
    digitalWrite(i,LOW);
  }
  else
  {
    digitalWrite(i,HIGH);
  }
 }
 delay(1000);
}
void six(){
  for(int i=7;i<=13;i++)
 {
  if(i==12)
  {
    digitalWrite(i,LOW);
  }
  else
  {
    digitalWrite(i,HIGH);
  }
 }
 delay(1000);
}
void seven(){
  for(int i=7;i<=13;i++)
 {
  if( i==7 ||i==8 || i==9|| i==10)
  {
    digitalWrite(i,LOW);
  }
  else
  {
    digitalWrite(i,HIGH);
  }
 }
 delay(1000);
}
void eight(){
  for(int i=7;i<=13;i++)
 {
  digitalWrite(i,HIGH);
 }
 delay(1000);
}
void nine(){
  for(int i=7;i<=13;i++)
 {
  if( i==9)
  {
    digitalWrite(i,LOW);
  }
  else
  {
    digitalWrite(i,HIGH);
  }
 }
 delay(1000);
}
void loop(){
  zero();
  one();
  two ();
  three();
  four();
  five();
  six();
  seven();
  eight();
  nine();
  
}

