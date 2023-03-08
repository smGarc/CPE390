void setup() {
  // put your setup code here, to run once:
  pinMode(11, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(4, OUTPUT);
  
  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(11, HIGH);
  delay(2.76);
  digitalWrite(11,LOW);
  delay(2.76);
  digitalWrite(7, HIGH);
  delay(2.76);
  digitalWrite(7,LOW);
  delay(2.76);
  digitalWrite(4, HIGH);
  delay(2.76);
  digitalWrite(4,LOW);
  delay(2.76);
}
//Humans cannot see 60-90 Hz
//Delay for 60Hz is 8.3 ms, for three sequentially it is 2.76 ms
