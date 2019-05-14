//Speaker test
//simulate the ambulance voice by speaker

int speakerPin = 6; //set speaker pin

void setup() {
  pinMode(speakerPin, OUTPUT);
}

void loop() {
  unsigned char i, j;
  while (1)
  {
    for (i = 0; i < 80; i++) //make frequency of a sound
    {
      digitalWrite(speakerPin, HIGH);
      delay(1);
      digitalWrite(speakerPin, LOW);
      delay(1);
    }
    for (i = 0; i < 100; i++) //make another frequency of a sound
    {
      digitalWrite(speakerPin, HIGH);
      delay(2);
      digitalWrite(speakerPin, LOW);
      delay(2);
    }
  }
}
