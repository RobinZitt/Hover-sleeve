void setup() {
  pinMode(11, OUTPUT);
  pinMode(8, INPUT);
}

void loop() {
  if (digitalRead(8) == HIGH){
    digitalWrite(11, HIGH);
  }
  else{
    digitalWrite(11, LOW);
  }
}
