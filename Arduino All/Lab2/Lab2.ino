const int AnalogIn = A0;
int val = 0;
void setup() {
 pinMode(AnalogIn, INPUT);
 pinMode(D0, OUTPUT);
 Serial.begin(9600);
}
void loop() {
  val = analogRead(AnalogIn);
  Serial.println(val);
  analogWrite(D0, val);
}
