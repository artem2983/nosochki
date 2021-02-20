int trigPin = 12;
int echoPin = 13;
long duration, cm, in, inches;
void setup()
{
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, OUTPUT);
 pinMode(5,OUTPUT);
 pinMode(6,OUTPUT);
 pinMode(7,OUTPUT);
 pinMode(8,OUTPUT);
 pinMode(10,OUTPUT);
analogWrite(5,250);
analogWrite(10,250);
}
void forward(){
digitalWrite(6,1);
digitalWrite(7,0);
digitalWrite(8,1);
digitalWrite(9,0);
delay(10);
}
void back(){
digitalWrite(6,0);
digitalWrite(7,1);
digitalWrite(8,0);
digitalWrite(9,1);
delay(10);
}
void rights(){
  digitalWrite(6,1);
  digitalWrite(7,0);
  digitalWrite(8,0);
  digitalWrite(9,1);
  delay(10);
}
  void lefts(){
  digitalWrite(6,0);
  digitalWrite(7,1);
  digitalWrite(8,1);
digitalWrite(9,0);
  delay(10);
}
void loop()
{
digitalWrite(trigPin,LOW);
delayMicroseconds(5);
digitalWrite(trigPin,1);
delayMicroseconds(10);
 digitalWrite(trigPin,0);
 pinMode(echoPin,INPUT);
 duration = pulseIn(echoPin, 1);
 cm = (duration/2) / 29.1;
 if(cm>20){
  analogWrite(5,150);
  analogWrite(10,150);
  forward();
    delay(100);
  }
  else{
    analogWrite(5,150);
    analogWrite(10,150);
    back();
      delay(150);
     rights(); 
    delay(200);
     if(cm<20){
    lefts();
    delay(400);
     }
  }
  
 }
 
