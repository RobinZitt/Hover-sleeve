unsigned char input1;

void setup() {
  pinMode(13, OUTPUT);
  pinMode(11, INPUT_PULLUP);
}

void loop() {
  input1 = !digitalRead(11);
  digitalWrite(13, input1);
}
