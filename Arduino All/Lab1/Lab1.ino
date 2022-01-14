void setup() {
  pinMode(D0,INPUT); //R light
  pinMode(D1,INPUT); //G light
  pinMode(D2,INPUT); //B light
  
  pinMode(D5,OUTPUT); //R light
  pinMode(D6,OUTPUT); //G light
  pinMode(D7,OUTPUT); //B light
 
}
void loop()
{
  if(digitalRead(D0) == 0)
    digitalWrite(D5,LOW);
  else
    digitalWrite(D5,HIGH);

  if(digitalRead(D1) == 0)
    digitalWrite(D6,LOW);
  else
    digitalWrite(D6,HIGH);

  if(digitalRead(D2) == 0)
    digitalWrite(D7,LOW);
  else
    digitalWrite(D7,HIGH);
}
