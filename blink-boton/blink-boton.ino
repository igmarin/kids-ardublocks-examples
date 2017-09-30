void barra();
void punto();

void setup()
{
  pinMode( 13 , OUTPUT);
}

void loop()
{
  punto();
  punto();
  barra();
  delay( 3000 );
}

void barra()
{
  digitalWrite( 13 , HIGH );
  delay( 1000 );
  digitalWrite( 13 , LOW );
  delay( 250 );
}

void punto()
{
  digitalWrite( 13 , HIGH );
  delay( 250 );
  digitalWrite( 13 , LOW );
  delay( 250 );
}


