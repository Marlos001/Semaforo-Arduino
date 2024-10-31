#define luzVerde 9
#define luzAmarela 10
#define luzVermelha 11
unsigned long tempoInicial;
unsigned long tempoAtual;

void setup() {
  Serial.begin(9600);
  pinMode(luzVerde, OUTPUT);
  pinMode(luzAmarela, OUTPUT);
  pinMode(luzVermelha, OUTPUT);
  digitalWrite(luzVermelha, LOW);
  digitalWrite(luzAmarela, LOW);
  digitalWrite(luzVerde, LOW);
  tempoInicial = millis();
}

void loop() {
  tempoAtual = millis() - tempoInicial;
  if(tempoAtual <= 6000){
    digitalWrite(luzAmarela, LOW);
    digitalWrite(luzVermelha, HIGH);
  }
  else if(tempoAtual > 6000 && tempoAtual <= 8000){
    digitalWrite(luzVermelha, LOW);
    digitalWrite(luzAmarela, HIGH);
  }
  else if(tempoAtual > 8000 && tempoAtual <= 14000){
    digitalWrite(luzAmarela, LOW);
    digitalWrite(luzVerde, HIGH);
  }
  else if(tempoAtual >= 14000 && tempoAtual <= 16000) {
    digitalWrite(luzVerde, LOW);
    digitalWrite(luzAmarela, HIGH);
  }
  else {
    tempoInicial = millis();
  }
}
