int pinLed = 11;
int pinLdr = A5;
int valorLdr = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinLed, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  valorLdr = analogRead(pinLdr);

  if(valorLdr >= 800)
  {
    digitalWrite(pinLed, HIGH);
  }
  else
  {
    digitalWrite(pinLed, LOW);
  }
  delay(1000);
}
