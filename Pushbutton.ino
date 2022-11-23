int pushButtonPin = 2;
int ledPin = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(pushButtonPin,INPUT);
  pinMode(ledPin,OUTPUT);
}

void loop() {
  int pushButtonState = digitalRead(pushButtonPin);
  if (pushButtonState == 1)
  {
    digitalWrite(ledPin, HIGH);
  }
  else{
    digitalWrite(ledPin, LOW);
  }
  // put your main code here, to run repeatedly:

}
