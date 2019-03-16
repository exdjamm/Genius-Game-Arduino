

void ligaLeds(){
	int i;
  for(i=0;i<(sizeof(cores)/sizeof(int));++i){
    
    digitalWrite(cores[i], HIGH);
    delay(1000);
    digitalWrite(cores[i], LOW);
    delay(500);
    }
}
