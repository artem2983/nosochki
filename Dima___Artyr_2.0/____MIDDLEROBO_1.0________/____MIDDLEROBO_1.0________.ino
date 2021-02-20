void __ardublockDigitalWrite(int pinNumber, boolean status)
{
  pinMode(pinNumber, OUTPUT);
  digitalWrite(pinNumber, status);
}

int __ardublockAnalogRead(int pinNumber)
{
  pinMode(pinNumber, INPUT);
  return analogRead(pinNumber);
}



void setup()
{
  Serial.begin(9600);
  __ardublockDigitalWrite(A1, HIGH);

  __ardublockDigitalWrite(A2, LOW);

}

void loop()
{
  Serial.print(__ardublockAnalogRead(A0));
  Serial.print(" ");
  Serial.println();
}


