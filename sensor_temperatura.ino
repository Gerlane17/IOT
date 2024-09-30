// BIBLIOTECA LCD COM MODULO I2C
#include <LiquidCrystal_I2C.h>

// INICIALIZAR LCD
LiquidCrystal_I2C telaLcd(0x20,16,2);

//variavel do sensor de temperatura
int sensorTMP = A0;

//capturar temperatura
int valorlido =0;
void setup()
{
 //definir o sensor como entrada
  pinMode(sensorTMP,INPUT);
 //ligar a tela lcd
  telaLcd.init();
 //limpar os dados que aparecem
  telaLcd.clear();
 
}

void loop()
{
 //capturar o valor da temperatura
  valorlido = analogRead(sensorTMP);
//converter valor da tensão
  float tensao = (valorlido*5.0)/1023;
//converter a tensão em graus celsius
  float temperatura = (tensao-0.5)*100;
 
//imprimir valor da temperatura no LCD
  telaLcd.setCursor(0,0);
  telaLcd.print(temperatura);
  //aumentar a luminosidade
  telaLcd.backlight();
}
