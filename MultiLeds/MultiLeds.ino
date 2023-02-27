void setup() {
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void alteraLed(int pino, int tempo, uint8_t valor){
  digitalWrite(pino, valor);
  delay(tempo);
}


void loop() {
  uint8_t acende = HIGH;
  uint8_t apaga = LOW;
  
  for(int i = 13; i >= 10; i--)
  {
    alteraLed(i, 1000, acende);
  }
  for(int i = 13; i >= 10; i--)
  {
    alteraLed(i, 1000, apaga);
  }
}
