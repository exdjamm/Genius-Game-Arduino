void ligaLeds(int *vetor[]);

#include "commands.h"

void setup() {
	// Declarando os pinos.
	int i;
	for (int i = 0; i <=3; ++i){
		pinMode(leds[i], OUTPUT);
	//	pinMode(botaos[i], INPUT);
	}
}

void loop() {
  ligaLeds(cores);
}
