// Biblioteca para a conexao serial do sensor
#include <SoftwareSerial.h>

int sensor = A0;

void setup() {
  pinMode(sensor, INPUT);
  Serial.begin(9600);
}

void loop() {
  int umidade = analogRead(sensor);

  // Classificação do estado do solo
  if (umidade <= 300) {
    Serial.println("Solo seco");
  } else if (umidade > 300 && umidade <= 500) {
    Serial.println("Solo ideal");
  } else if (umidade > 500) {
    Serial.println("Solo umido");
  }
  
  // Exibir valor da umidade do solo
  Serial.print("Umidade do solo: ");
  Serial.println(umidade);
  
  delay(1000); // Pequeno delay para evitar leitura excessivamente rápida
}