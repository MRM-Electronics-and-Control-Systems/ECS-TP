int LedPin = 2;

void setup() {
  pinMode(LedPin,OUTPUT);

}

void loop() {
  digitalWrite(LedPin,HIGH);
  delay(1000);
  digitalWrite(LedPin,LOW);

}
