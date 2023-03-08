/*
 * Group: Simon Garcia and Armand Rome
 * I pledge my Honor that I have abided by the Stevens Honor System
 */

void setup() {
  // put your setup code here, to run once:
  pinMode(11, OUTPUT);
  pinMode(4, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(4) == LOW){ //(digitalRead(4) == HIGH) if PullDown
    while(true){
      digitalWrite(11, HIGH);
      delay(150);
      digitalWrite(11, LOW); 
      delay(50);
    }
  }  
}
