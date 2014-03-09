const int led = 13;

void setup()
{
  pinMode(led, OUTPUT);
}

void loop()
{
  for(int i =0; i <20; i++)
  {

    digitalWrite(led, HIGH);
    delay(250);
    digitalWrite(led, LOW);
    delay(250);
  }



  for(int i =0; i <20; i++)
  {

    digitalWrite(led, HIGH);
    delay(175);
    digitalWrite(led, LOW);
    delay(175);
  }
  for(int i=0; i<20; i++);
  {
    digitalWrite(led, HIGH);
    delay(17);
    digitalWrite(led, LOW);
    delay(17);
  }

  delay(3000);
}




