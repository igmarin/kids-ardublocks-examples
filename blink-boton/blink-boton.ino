<<<<<<< HEAD
int estadoBoton = 0 ;

void brilloConstante();
void parpadear();
=======
void barra();
void punto();
>>>>>>> ae9c019... Blink boton ino

void setup()
{
  pinMode( 13 , OUTPUT);
}

void loop()
{
<<<<<<< HEAD
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
=======
  punto();
  punto();
  barra();
  delay( 3000 );
>>>>>>> ae9c019... Blink boton ino
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


