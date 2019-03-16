int vetor[] = {2,3,4,2,3,4};
int i = 0;

void ligaLeds(){
  i = 0;
  while( i<= sizeof(vetor)/sizeof(int)){
    digitalWrite(vetor[i], HIGH);
    //Serial.println(sizeof(vetor)/sizeof(int));
    delay(200);
    digitalWrite(vetor[i], LOW);
    delay(200);
    i++;
    }
  i = 0;
  }
