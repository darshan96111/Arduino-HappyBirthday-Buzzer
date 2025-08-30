// Happy Birthday Song on Buzzer
int buzzer = 8;

// Notes of Happy Birthday (in Hz)
int melody[] = {
  262, 262, 294, 262, 349, 330,  // Happy Birthday to You
  262, 262, 294, 262, 392, 349,  // Happy Birthday to You
  262, 262, 523, 440, 349, 330, 294, // Happy Birthday Dear 
  466, 466, 440, 349, 392, 349   // Happy Birthday to You
};

// Note durations: 4 = quarter, 8 = eighth, etc.
int noteDurations[] = {
  8, 8, 4, 4, 4, 2,
  8, 8, 4, 4, 4, 2,
  8, 8, 4, 4, 4, 4, 2,
  8, 8, 4, 4, 4, 2
};

void setup() {
  for (int thisNote = 0; thisNote < 25; thisNote++) {
    int duration = 1000 / noteDurations[thisNote];
    tone(buzzer, melody[thisNote], duration);
   // delay(duration * 1.3);
    delay(250);
    noTone(buzzer);
  }
}

void loop() {
  // Nothing here
}