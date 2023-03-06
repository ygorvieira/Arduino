#define VERMELHO 10
#define AMARELO 9
#define VERDE 8

void setup() {
  pinMode(VERMELHO, OUTPUT);
  pinMode(AMARELO, OUTPUT);
  pinMode(VERDE, OUTPUT);
}

void loop() {
  
  digitalWrite(VERDE, HIGH);
  digitalWrite(VERMELHO, LOW);
  digitalWrite(AMARELO, LOW);
  delay(5000);
  digitalWrite(VERDE, LOW);
  digitalWrite(VERMELHO, LOW);
  digitalWrite(AMARELO, HIGH);
  delay(2000);
  digitalWrite(VERDE, LOW);
  digitalWrite(VERMELHO, HIGH);
  digitalWrite(AMARELO, LOW);
  delay(5000);
}
