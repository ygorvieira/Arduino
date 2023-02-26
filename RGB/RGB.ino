int pinoR = 11;
int pinoB = 10;
int pinoG = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinoR, OUTPUT);
  pinMode(pinoB, OUTPUT);
  pinMode(pinoG, OUTPUT);
}

void setCor(int vermelho, int verde, int azul){
  analogWrite(pinoR, vermelho);
  analogWrite(pinoB, azul);
  analogWrite(pinoG, verde);
}

void loop() {
  // put your main code here, to run repeatedly:
  setCor(255,0,0);
  delay(1000);
  setCor(0,255,0);
  delay(1000);
  setCor(0,0,255);
  delay(1000);
  setCor(255,255,0);
  delay(1000);
  setCor(255,0,220);
  delay(1000);
  setCor(150,200,255);
  delay(1000);
  setCor(255,255,255);
  delay(1000);
}
