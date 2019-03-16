void ligaLeds();

int  cores[] = {2,3,2,2,3,2,3};

#include "commands.h"

// Pinos dos leds
int ledY = 5;
int ledG = 4;
int ledB = 3;
int ledR = 2; 

// Pinos dos botoes
int buttonY = 11;
int buttonG = 10;
int buttonB = 9;
int buttonR = 8;

void setup() {
  Serial.begin(9600);
	// Declarando o modo dos pinos
		// Leds
		pinMode(ledG, OUTPUT);
		pinMode(ledY, OUTPUT);
		pinMode(ledB, OUTPUT);
    pinMode(ledR, OUTPUT);
		// Botoes
		pinMode(buttonG, INPUT);
		pinMode(buttonY, INPUT);
		pinMode(buttonB, INPUT);
    pinMode(buttonR, INPUT);
}

void loop() {
  ligaLeds();
}
