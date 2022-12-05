//#include<SoftwareSerial.h>
int sensorPin = A0;
int sensorValue = 0;
int led = 9;
int buzzer = 12;

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  pinMode(buzzer,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Welcome to Flame Sensor Tutorial");
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);
  if(sensorValue<300)
  {
     Serial.println("Fire Detected");
     Serial.print("LED on");
     digitalWrite(led,HIGH);
     digitalWrite(buzzer,HIGH);
     delay(1000);
  }
  digitalWrite(led,LOW);
  digitalWrite(buzzer,LOW);
  delay(sensorValue);
}
