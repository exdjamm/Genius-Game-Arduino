

void PiscaLeds(const int led){
	for(i=0;i<led;++i)
	{
	digitalWrite(cores[i], HIGH);
	delay(1000);
	digitalWrite(cores[i], LOW);
	}
}

bool VerificarMemoria(){
	int i = 0;
	while(){
		if (digitalRead(botao[cores[i]])){
			
		} 
		i++;
	}
}