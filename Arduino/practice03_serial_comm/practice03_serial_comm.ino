int pin;

void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  if (Serial.available() > 0)
  {
    pin = Serial.read();

    pinMode(pin, OUTPUT);

    digitalWrite(pin, HIGH);

    delay(1000);

    digitalWrite(pin, LOW);
  }
}
