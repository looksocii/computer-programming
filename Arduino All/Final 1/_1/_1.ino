int num = 0;
void setup() {
  Serial.begin(115200);
  pinMode(D0, OUTPUT);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
}

void loop() {
  Serial.println(digitalRead(D3));
  if (num==0){ 
    digitalWrite(D0, 1);
    digitalWrite(D1, 0);
    digitalWrite(D2, 0);
    num++;
  }
  else if (num==1){
    digitalWrite(D0, 1);
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    num++;
  }
  else if (num==2){
    digitalWrite(D0, 1);
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    num++;
  }
  else if (num==3){
    digitalWrite(D0, 1);
    digitalWrite(D1, 1);
    digitalWrite(D2, 1);
    num++;
  }
  else if (num==4){
    digitalWrite(D0, 0);
    digitalWrite(D1, 1);
    digitalWrite(D2, 0);
    num++;
  }
  else if (num==5){
    digitalWrite(D0, 0);
    digitalWrite(D1, 1);
    digitalWrite(D2, 1);
    num++;
  }
  else if (num==6){
    digitalWrite(D0, 0);
    digitalWrite(D1, 0);
    digitalWrite(D2, 1);
    num=0;
  }
  delay(1000);
}
