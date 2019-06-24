int button = 12;
int led = 9;

void setup() {
  pinMode(button, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  if (digitalRead(button) == HIGH) {
    digitalWrite(led, LOW);
  }
  
  else {
    blinker();
  }
}

void blinker() {
  digitalWrite(led, HIGH);
  delay(200);
  digitalWrite(led, LOW);
  delay(200);
}