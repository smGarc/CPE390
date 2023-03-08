/*
 * Group: Simon Garcia and Armand Rome
 * I pledge my Honor that I have abided by the Stevens Honor System
 */

void setup() {
  // put your setup code here, to run once:
  pinMode(11, OUTPUT);
  pinMode(4, INPUT);
  //attachInterrupt(digitalPinToInterrupt(4), blink, CHANGE);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(4) == HIGH){
    while(true){
      digitalWrite(11, HIGH);
      delay(150);
      digitalWrite(11, LOW); 
      delay(50);
    }
  }  
}
//Humans cannot see 60-90 Hz
//Delay for 60Hz is 8.3 ms on and 8.3 ms off, for three sequentially it is 2.76 ms on and 2.76 ms off for each
