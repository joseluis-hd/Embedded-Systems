int bites;
float voltaje;

void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  bites = analogRead(0);

  voltaje = (bites) * (5.0 / 1023.0);

  Serial.println(voltaje);

  delay(25);
}
