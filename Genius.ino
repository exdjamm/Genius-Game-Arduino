void ligaLeds();

#include "LigaLedSequencia.h"

//int botaos[4] = {2,3,4,5};// Botaos do Genius : 1=red;2=blue;3=green;4=yellow.
int leds[4]   = {2,3,4}; // Leds do Genius : 1=red;2=blue;3=green;4=yellow.
//int Nr;// Numero aleatorio para a cor.
//int cores[10];// Vetor para salvar qual cor foi adicionada a memoria.
//int Contar = 0;// Numero de onde esta o vetor.

void setup() {
	// Declarando os pinos.
 Serial.begin(9600);
	for (int i = 0; i <=3; ++i){
		pinMode(leds[i], OUTPUT);
	//	pinMode(botaos[i], INPUT);
	}
}

void loop() {
  ligaLeds();
}
