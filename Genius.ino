void PiscaLeds(const int led);
bool VerificarMemoria();

#include <commands.h>

int botaos[4] = {1,2,3,4};// Botaos do Genius : 1=red;2=blue;3=green;4=yellow.
int leds[4]   = {5,6,7,8}; // Leds do Genius : 1=red;2=blue;3=green;4=yellow.
int Nr;// Numero aleatorio para a cor.
int cores[10];// Vetor para salvar qual cor foi adicionada a memoria.
int Contar = 0;// Numero de onde esta o vetor.

void setup() {
	// Declarando os pinos.
	for (int i = 0; i <=4; ++i){
		pinMode(leds[i], OUTPUT);
		pinMode(botaos[i], INPUT);
	}
}

void loop() {
	Nr = random(1,4);
	cores[iI] = Nr;
	PiscaLed(Contar);
	iI++;
}
