void setup() {
  // put your setup code here, to run once:
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(7, HIGH);
delay(1000);

digitalWrite(8, HIGH);
digitalWrite(7, LOW);
delay(1000);

digitalWrite(13, HIGH);
digitalWrite(7, LOW);
digitalWrite(8, LOW);
delay(1000);
}
