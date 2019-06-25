int convert;
int ledpin = 9;
int nightvalue = 400;

void setup() {
  pinMode(ledpin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  convert = analogRead(A0);
  Serial.println(convert);
  
  if (convert > nightvalue) {
    lighton();
  }
  
  else {
    lightoff();
  }
}

void lighton() {
  digitalWrite(9, HIGH);
}

void lightoff() {
  digitalWrite(9, LOW);
}