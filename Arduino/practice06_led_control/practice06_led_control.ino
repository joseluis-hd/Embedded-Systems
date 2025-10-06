int pin;
int lugar;

int numdec;
int digbin;

void setup()
{
  Serial.begin(9600);
  for(pin = 2; pin <= 9; pin++)
  {
    pinMode(pin, OUTPUT);
  }
}

void loop()
{
  if(Serial.available() > 0)
  {
    numdec = Serial.read();
    for(lugar = 7; lugar >= 0; lugar--)
    {
      digbin = bitRead(numdec, lugar);
      pin = lugar + 2;
      digitalWrite(pin, digbin);
      Serial.print(digbin);
    }
  }
}