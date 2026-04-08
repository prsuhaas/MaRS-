// C code

// Pins
int ledPin = 8;
int buttonPin = 2;

// Time variables
unsigned long startTime;
unsigned long endTime;

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
  Serial.begin(9600);
  
  randomSeed(analogRead(0)); // for better randomness
}

void loop()
{
  // LED OFF
  digitalWrite(ledPin, LOW);

  // Waiting for a random time (1–6 sec)
  int waitTime = random(1000, 6000);
  unsigned long waitStart = millis();

  //Preventing user from spamming the button 
  while (millis() - waitStart < waitTime)
  {
    if (digitalRead(buttonPin) == LOW)
    {
      Serial.println("Too early!");
      delay(2000);
      return; // restarting the loop
    }
  }

  // Turning LED ON and starting timer
  digitalWrite(ledPin, HIGH);
  startTime = millis();

  // Waiting for button press
  while (digitalRead(buttonPin) == HIGH)
  {
    // do nothing, just wait
  }

  // Recording end time
  endTime = millis();

  // Calculating reaction time
  unsigned long reactionTime = endTime - startTime;

  // Printing result
  Serial.print("Reaction Time: ");
  Serial.print(reactionTime);
  Serial.println(" ms");

  // Turning LED OFF
  digitalWrite(ledPin, LOW);

  // Small delay before next round
  delay(2000);
}
