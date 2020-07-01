unsigned char input1;

void setup() {
  pinMode(11, OUTPUT);
  pinMode(3, INPUT_PULLUP);
}

void loop() {
  input1 = !digitalRead(3);
  digitalWrite(11, input1);
}
