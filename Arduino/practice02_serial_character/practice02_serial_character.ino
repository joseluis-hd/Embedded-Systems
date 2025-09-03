int num;

void setup()

{
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available()>0)
  {
    num = Serial.read();

    Serial.println(num);
  }
}
