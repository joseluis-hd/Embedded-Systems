int pin;
int bites;

void setup() {
  Serial.begin(9600);
}

void loop() {
  if(Serial.available()>0) {
    pin = Serial.read();
    bites = analogRead(pin);
    Serial.print(bites);
  }
}