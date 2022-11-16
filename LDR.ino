int value = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(11,OUTPUT);
  pinMode(A0,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  value = analogRead(A0);
  if(value < 10)
  {
    digitalWrite(13,HIGH);
    Serial.println("Light is on");
    Serial.println(value);
  } else {
    digitalWrite(13,LOW);
  }
}
