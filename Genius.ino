// Botaos do Genius : 1=red;2=blue;3=green;4=yellow.
int botaos[4] = {1,2,3,4};

// Leds do Genius : 1=red;2=blue;3=green;4=yellow.
int leds[4]   = {5,6,7,8}; 

// Numero aleatorio para a cor.
int Nr;

// Vetor para salvar qual cor foi adicionada a memoria.
int cores[10];

void setup() {
	// Declarando os pinos.
	for (int i = 0; i <=4; ++i){
		pinMode(leds[i], OUTPUT);
		pinMode(botaos[i], INPUT);
	}
}

void loop() {
	Nr = random(0,4);
}
