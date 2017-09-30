void brilloConstante();
void parpadear();

void setup()
{
  pinMode( 2 , INPUT);
  pinMode( 13 , OUTPUT);
}

void loop()
{
  while ( digitalRead(2) )
  {
    brilloConstante();
  }

  parpadear();
  parpadear();
  parpadear();
  parpadear();
  parpadear();
  delay( 1000 );
}

void brilloConstante()
{
  digitalWrite( 13 , HIGH );
  delay( 4000 );
}

void parpadear()
{
  digitalWrite( 13 , HIGH );
  delay( 250 );
  digitalWrite( 13 , LOW );
  delay( 250 );
}


