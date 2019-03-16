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
  int num = random(2,6);
  colors[level++] = num;
  }

void waitPlayer(){
  for(int i = 0;i<level;++i){
    waitPlay();
    checkSequence();
    if(lose_game){break;}
    sequence_led++;
    }
    sequence_led = 0;
  }

void waitPlay(){
  boolean played = false;
  while(!played){
    for(int i = 0;i<4;++i){
      if(digitalRead(buttons[i]) == HIGH){
        button_on = i ;
        digitalWrite(leds[i], HIGH);
        delay(1000);
        digitalWrite(leds[i], LOW);
        played = true;
        }
      }
      delay(10);
    }
  }

void checkSequence() {
    if (colors[sequence_led] != button_on) {
      // GAME OVER.
      lose_game = true;
    }
  }
