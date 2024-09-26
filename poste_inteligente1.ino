int led = 3;                  // Pino do LED (pino digital 4)
int sensorLuminosidade = A0;   // Pino do sensor de luminosidade (pino analógico A0)
int luz = 0;                   // Valor lido pelo LDR

void setup() {
  pinMode(led, OUTPUT);        // Define o pino do LED como saída
  pinMode(sensorLuminosidade, INPUT); // Define o pino do sensor de luminosidade como entrada
}

void loop() {
  // Capturar o valor lido pelo sensor de luminosidade
  luz = analogRead(sensorLuminosidade);
  
  // Se estiver com pouca luz no ambiente (valor abaixo de 500)
  if (luz < 500) {
    //digitalWrite(led, HIGH);   // Ligar LED
    
    //ligar led intesidade maxima
    
    analogWrite(led,1023);
    if(luz>500 & luz < 900){
     analogWrite(led,500);
    }
  } else {
    //digitalWrite(led, LOW);    // Desligar LED
    
    analogWrite(led,0);
  }
}
