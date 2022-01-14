int num = 0;
int numd5 = 0;
void setup() {
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D5, INPUT);
}

void loop() {
  if(!digitalRead(D5)){
    numd5++;
  }
  if (numd5==1){ 
    digitalWrite(D1, 1);
    digitalWrite(D2, 1);
    digitalWrite(D3, 0);
  }
  else if (numd5==2){
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    digitalWrite(D3, 1);
  }
  else if (numd5==3){
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    digitalWrite(D3, 0);
  }
  else if (numd5==4){
    digitalWrite(D1, 0);
    digitalWrite(D2, 0);
    digitalWrite(D3, 1);
  }
  else if (numd5==5){
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    digitalWrite(D3, 1);
  }
  else if (numd5==6){
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    digitalWrite(D3, 0);
  }
  else if (numd5==7){
    digitalWrite(D1, 1);
    digitalWrite(D2, 1);
    digitalWrite(D3, 1);
    numd5 = 0;
  }
}
