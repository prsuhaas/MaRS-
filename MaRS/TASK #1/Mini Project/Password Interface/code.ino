// C code

//Pins
int greenledPin = 2;
int redledPin = 3;

//Password
String pass = "1467";

int attempts = 0;
const int max_attempts = 3;

void setup()
{
  pinMode(greenledPin, OUTPUT);
  pinMode(redledPin, OUTPUT);
  
  Serial.begin(9600);
  Serial.println("Enter the password: ");
}

void loop()
{
  digitalWrite(greenledPin, LOW);
  digitalWrite(redledPin, LOW);
  
  if (Serial.available() > 0)
  {
    String input = Serial.readString();
  
  if (input == pass)
    {
      Serial.println("System Unlocked");
      
      digitalWrite(greenledPin, HIGH);
      delay(5000);
      digitalWrite(greenledPin, LOW);
    }
    else
    {
      Serial.println("Wrong Password");
      
      digitalWrite(redledPin, HIGH);
      delay(2000);
      digitalWrite(redledPin, LOW);

      attempts++;

      // Locking the system after max attempts
      if (attempts >= max_attempts)
      {
        Serial.println("System Locked(10 seconds)");
        
        for (int i = 10; i > 0; i--)
        {
          Serial.print("Wait: ");
          Serial.print(i);
          Serial.println(" sec");
          delay(1000);
        }

        attempts = 0;
      }

      Serial.println("Try Again:");
    }
  } 
}

 