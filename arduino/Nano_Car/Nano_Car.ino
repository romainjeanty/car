#define  motorPin0 PIND2
#define motorPin1 PIND3

#define buttonPin PIND4

bool play = false;

void setup() {
  pinMode(motorPin0, OUTPUT);
  pinMode(motorPin1, OUTPUT);
  pinMode(buttonPin, OUTPUT);`1
  digitalWrite(motorPin0, 0);
  digitalWrite(motorPin1, 0);
  
}

void loop() {
  int click = digitalRead(buttonPin);

  if(click == 1) {
    play = true;
  }

  if(play) {
    MoveForward();
    delay(100);
    MoveBackward();
    delay(100);
    stop();
    play = false;
  }
}

void stop() {
  digitalWrite(motorPin0, 0);
  digitalWrite(motorPin1, 0);
}

void MoveForward() {
  digitalWrite(motorPin0, 1);
  digitalWrite(motorPin1, 0);
}

void MoveBackward() {
  digitalWrite(motorPin0, 0);
  digitalWrite(motorPin1, 1);
}
