// C++ code

// RGB LED 1
int r1 = 2, b1 = 3, g1 = 4;

// RGB LED 2
int r2 = 5, b2 = 6, g2 = 7;

// RGB LED 3
int r3 = 8, b3 = 9, g3 = 10;

int buttonPin = 11;

void setup()
{
  pinMode(r1, OUTPUT); pinMode(b1, OUTPUT); pinMode(g1, OUTPUT);
  pinMode(r2, OUTPUT); pinMode(b2, OUTPUT); pinMode(g2, OUTPUT);
  pinMode(r3, OUTPUT); pinMode(b3, OUTPUT); pinMode(g3, OUTPUT);

  pinMode(buttonPin, INPUT_PULLUP);

  Serial.begin(9600);
  Serial.println("Press the button to start gambling :]");
}

void setColor(int r, int g, int b, int color)
{
  digitalWrite(r, LOW);
  digitalWrite(g, LOW);
  digitalWrite(b, LOW);

  if(color == 0) digitalWrite(r, HIGH);      // red
  else if(color == 1) digitalWrite(g, HIGH); // green
  else digitalWrite(b, HIGH);                // blue
}

int slot1, slot2, slot3;

void loop()
{
  if(digitalRead(buttonPin) == LOW)  // button pressed
  {
    delay(200); 

   //spinning starts
    for(int i = 0; i < 20; i++)
    {
      setColor(r1, g1, b1, random(0,3));
      setColor(r2, g2, b2, random(0,3));
      setColor(r3, g3, b3, random(0,3));
      delay(100);
    }

    
   //the leds stop at one colour 
    slot1 = random(0,3);
    setColor(r1, g1, b1, slot1);
    delay(300);

    slot2 = random(0,3);
    setColor(r2, g2, b2, slot2);
    delay(300);

    slot3 = random(0,3);
    setColor(r3, g3, b3, slot3);

   //monitor output
    if(slot1 == slot2 && slot2 == slot3)
    {
      Serial.println("JAAACKPOTTT!!");
    }
    else if(slot1 == slot2 || slot2 == slot3 || slot1 == slot3)
    {
      Serial.println("Sooo Closeee!");
    }
    else
    {
      Serial.println("Oops! Try Again!");
    }

    delay(1000); 
  }
}

