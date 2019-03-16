

void ligaLeds(int vetor[]){
	int i = 0;
	while( i<= sizeof(vetor)/sizeof(int)){
	digitalWrite(vetor[i], HIGH);
	//Serial.println(sizeof(vetor)/sizeof(int));
	delay(200);
	digitalWrite(vetor[i], LOW);
	delay(200);
	i++;
    }
}
