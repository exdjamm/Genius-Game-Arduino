void checkSequence();
void waitPlay();

int buttons[4] = {8,9,10,11}; // Pinos dos botoes
int leds[4] = {2,3,4,5};     // Pinos dos leds
int lose_game = false;      // Se errou a sequencia
int sequence_led = 0;      // O momento da sequencia do botao apertado
int colors[100] = {};     // Sequencia
int button_on = 0;       // Se o botao precionado foi o mesmo do led
int level = 0;          // Rodada

#include "commands.h"

void setup(){
  randomSeed(analogRead(0)); // Semente para criar o numeros aleatorios
	// Declarando o modo dos pinos
  for(int i = 0;i<4;++i){pinMode(leds[i], OUTPUT);} // Leds
  for(int i = 0;i<4;++i){pinMode(buttons[i], INPUT);}  // Botoes
}

void loop() {
  if(lose_game){
    int colors[100] = {};
    lose_game = false;
    sequence_led = 0;
    level = 0;}
  
  addSequence();
  sequence();
  waitPlayer();
  delay(1000);
}
