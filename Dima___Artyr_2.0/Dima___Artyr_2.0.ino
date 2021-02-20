void __ardublockDigitalWrite(int pinNumber, boolean status)
{
  pinMode(pinNumber, OUTPUT);
  digitalWrite(pinNumber, status);
}


void setup()
{
}

void loop()
{
  __ardublockDigitalWrite(6, HIGH);
  __ardublockDigitalWrite(7, LOW);
  __ardublockDigitalWrite(8, HIGH);
  __ardublockDigitalWrite(9, LOW);
  delay( 2500 );
  __ardublockDigitalWrite(6, LOW);
  __ardublockDigitalWrite(7, HIGH);
  __ardublockDigitalWrite(8, HIGH);
  __ardublockDigitalWrite(9, LOW);
  delay( 2500 );
  __ardublockDigitalWrite(6, HIGH);
  __ardublockDigitalWrite(7, LOW);
  __ardublockDigitalWrite(8, HIGH);
  __ardublockDigitalWrite(9, LOW);
  delay( 2500 );
  __ardublockDigitalWrite(6, LOW);
  __ardublockDigitalWrite(7, HIGH);
  __ardublockDigitalWrite(8, HIGH);
  __ardublockDigitalWrite(9, LOW);
  delay( 2500 );
  __ardublockDigitalWrite(6, HIGH);
  __ardublockDigitalWrite(7, LOW);
  __ardublockDigitalWrite(8, HIGH);
  __ardublockDigitalWrite(9, LOW);
  delay( 2500 );
  __ardublockDigitalWrite(6, LOW);
  __ardublockDigitalWrite(7, HIGH);
  __ardublockDigitalWrite(8, HIGH);
  __ardublockDigitalWrite(9, LOW);
  delay( 2500 );
  __ardublockDigitalWrite(6, HIGH);
  __ardublockDigitalWrite(7, LOW);
  __ardublockDigitalWrite(8, HIGH);
  __ardublockDigitalWrite(9, LOW);
  delay( 2500 );
  analogWrite(5 , 255);
  analogWrite(10 , 255);
}


