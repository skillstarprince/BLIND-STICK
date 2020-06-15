//ULTRASONIC SENSOR:
#define echoPin 10
#define trigpin 11

long duration, distance;//duration used to calculate distance
void setup(){
  Serial.begin(9600);
  pinMode(trigpin,OUTPUT);
  pinMode(echoPin,INPUT);
  
}
void loop(){
  digitalWrite(trigpin,LOW);
  delay(100);

  digitalWrite(trigpin,HIGH);
 delayMicroseconds(100);

  digitalWrite(trigpin,LOW );
  duration =pulseIn(echoPin,HIGH);
  //calculate the distance in cm based on the speed of sound.
  distance =duration*0.034/2;

  Serial.println(distance);
  delay(50);

  if(distance<=20)
  {
    digitalWrite(13,HIGH);
   
  }
  else
  {
   digitalWrite(13,LOW);
  
  }
delay(500);
}
