void sequence(){
  for(int i = 0;i<level;++i){
    Serial.println(colors[i]);
    digitalWrite(colors[i], HIGH);
    delay(500);
    digitalWrite(colors[i], LOW);
    delay(500);
    }
}

void addSequence(){
  Serial.println(level);
  int num = random(2,4);
  colors[level++] = num;
  }
