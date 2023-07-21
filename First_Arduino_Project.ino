

int switchState;
// the setup function runs once when you press reset or power the board
void setup() 
{
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

// the loop function runs over and over again forever
void loop() 
{
  switchState = digitalRead(2);

  if(switchState == LOW)
  {
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  }
  else
  {
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);

    delay(250);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    delay(250);
  }
}
