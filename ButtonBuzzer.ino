int buzzer = 9;
int button = 12;

void setup() {
  pinMode(buzzer, OUTPUT);
  pinMode(button, INPUT);
}

void loop(){
  if (digitalRead(button) == HIGH) {
    digitalWrite(buzzer, LOW);
  }
  
  else
    digitalWrite(buzzer, HIGH);
}