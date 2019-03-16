int buttons[2] = {8,9}; // Pinos dos botoes
int lose_game = false;  // Se errou a sequencia
int colors[100] = {};   // Sequencia
int leds[2] = {2,3};    // Pinos dos leds
int button_on = 0;      // Se o botao precionado foi o mesmo do led
int level = 0;          // Rodada

#include "commands.h"

void setup(){
  Serial.begin(9600);
  randomSeed(analogRead(0)); // Semente para criar o numeros aleatorios
	// Declarando o modo dos pinos
  for(int i = 0;i<2;++i){pinMode(leds[i], OUTPUT);} // Leds
  for(int i = 0;i<2;++i){pinMode(buttons[i], INPUT);}  // Botoes
}

void loop() {
  if(lose_game){
    int colors[100] = {};
    lose_game = false;
    level = 0;}
  
  addSequence();
  sequence();
  
}
