int inint;
int counter = 0;
int ledpin = 11;

void setup() {
  pinMode(ledpin, OUTPUT);
  Serial.begin(9600);
  Serial.println("UNO ready");
}

void loop(){
  if (Serial.available()) {
    inint = Serial.parseInt();
    Serial.println("UNO received");
    Serial.println(inint);
    analogWrite(ledpin, constrain(inint, 0, 255));
    delay(2000);
  }
}