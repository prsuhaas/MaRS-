// C code

//Pins
int redPin = 3;
int greenPin = 6;
int bluePin = 5;
int ledPin = 4;
int potPin = A0;

//Initialising required pins for output
void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int potValue = analogRead(potPin);  // 0–1023

  // Mapping to RGB (0–255)
  int red = map(potValue, 0, 1023, 0, 255);
  int green = map(potValue, 0, 1023, 255, 0);
  int blue = 128;

  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);

  // Controlling blink speed
  int delayTime = map(potValue, 0, 1023, 100, 1000);

  digitalWrite(ledPin, HIGH);
  delay(delayTime);
  digitalWrite(ledPin, LOW);
  delay(delayTime);
}
