void ligaLeds(int vetor[]);

#include "commands.h"

// Pinos dos leds
int ledG = 4;
int ledY = 3;
int ledB = 2; 

// Pinos dos botoes
int buttonG = 10;
int buttonY = 9;
int buttonB = 8;

void setup() {
	// Declarando o modo dos pinos
		// Leds
		pinMode(ledG, OUTPUT);
		pinMode(ledY, OUTPUT);
		pinMode(ledB, OUTPUT);
		// Botoes
		pinMode(buttonG, INPUT);
		pinMode(buttonY, INPUT);
		pinMode(buttonB, INPUT);
}

void loop() {
  ligaLeds(cores);
}
