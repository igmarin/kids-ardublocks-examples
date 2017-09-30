int estadoBoton = 0 ;

void brilloConstante();
void parpadear();

void setup()
{
  pinMode( 13 , OUTPUT);
}

void loop()
{
  estadoBoton = 0 ;
  // este es el que no se como ponerlo en bloque
  //  estadoBoton = digitalRead(elPinDelBoton);
  // 
  if (( ( estadoBoton ) == ( 0 ) ))
  {
    parpadear();
    parpadear();
    parpadear();
    parpadear();
    parpadear();
  }
  else
  {
    brilloConstante();
  }
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


