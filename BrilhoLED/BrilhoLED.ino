#define LED 10
#define CRESCENTE true
#define DECRESCENTE false

unsigned int i;
bool controle;

void setup() {
  pinMode(LED, OUTPUT);
  i = 0;
  controle = CRESCENTE;
}

void loop() {
  analogWrite(LED, i);

  if(controle == CRESCENTE)
  {
    i++;
    if(i == 255) controle = DECRESCENTE;
  }
  else if(controle == DECRESCENTE)
  {
    i--;
    if(i == 0) controle = CRESCENTE;
  }
  delay(10);
}
