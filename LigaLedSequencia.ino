int vetor[] = {2,3,4,2};
int i;

void ligaLeds();

void ligaLeds(){
  while( i<= 3){
    digitalWrite(vetor[i], HIGH);
    Serial.println(sizeof(vetor));
    delay(200);
    digitalWrite(vetor[i], LOW);
    delay(200);
    i++;
    }
    i = 0;
  }

void setup(){
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  i = 0;
  }
void loop(){
  ligaLeds();
  }
