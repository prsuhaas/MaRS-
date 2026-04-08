// C code
// LED pins
int led1 = 13;
int led2 = 12;
int led3 = 11;

// Required time intervals (in ms)
unsigned long interval1 = 500;
unsigned long interval2 = 1000;
unsigned long interval3 = 1500;

// Initialising toggle time
unsigned long prevTime1 = 0;
unsigned long prevTime2 = 0;
unsigned long prevTime3 = 0;

// LED states
int state1 = LOW;
int state2 = LOW;
int state3 = LOW;

//Selecting the required pins for output
void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

//Writing a code that can loop infinitely
void loop() {
  unsigned long currentTime = millis();

  // LED 1 (500 ms)
  if (currentTime - prevTime1 >= interval1) {
    prevTime1 = currentTime;
    state1 = !state1;
    digitalWrite(led1, state1);
  }

  // LED 2 (1000 ms)
  if (currentTime - prevTime2 >= interval2) {
    prevTime2 = currentTime;
    state2 = !state2;
    digitalWrite(led2, state2);
  }

  // LED 3 (1500 ms)
  if (currentTime - prevTime3 >= interval3) {
    prevTime3 = currentTime;
    state3 = !state3;
    digitalWrite(led3, state3);
  }
}