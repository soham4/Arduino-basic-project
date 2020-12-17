const int buttonPin = 2;

int buttonState = 0;
int ledPin1 = 8;
int ledPin2 = 9;
int ledPin3 = 10;
int ledPin4 = 11;
int ledPin5 = 12;
int ledPin6 = 13;                 

void setup()
{
  pinMode(buttonPin, INPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin6, OUTPUT);// sets the digital pin as output
}

void loop()
{
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH){
    digitalWrite(ledPin1, HIGH);
     digitalWrite(ledPin2, LOW);
     digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
   digitalWrite(ledPin6, LOW); 
   delay(1000); 
        digitalWrite(ledPin1, LOW);
     digitalWrite(ledPin2, HIGH);
     digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
   digitalWrite(ledPin6, LOW);
   delay(1000); 
   digitalWrite(ledPin1, LOW);
     digitalWrite(ledPin2, LOW);
     digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
   digitalWrite(ledPin6, LOW);
   delay(1000);
   digitalWrite(ledPin1, LOW);
     digitalWrite(ledPin2, LOW);
     digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, HIGH);
  digitalWrite(ledPin5, LOW);
   digitalWrite(ledPin6, LOW);
   delay(1000);
      digitalWrite(ledPin1, LOW);
     digitalWrite(ledPin2, LOW);
     digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, HIGH);
   digitalWrite(ledPin6, LOW);
   delay(1000);
   digitalWrite(ledPin1, LOW);
     digitalWrite(ledPin2, LOW);
     digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
   digitalWrite(ledPin6, HIGH);
   delay(1000);
   
  }
  else{
  digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, HIGH);
  delay(1000);                 
  digitalWrite(ledPin1, LOW); 
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, HIGH);
  digitalWrite(ledPin6, LOW);
  delay(1000);   
    digitalWrite(ledPin1, LOW); 
  digitalWrite(ledPin2, LOW);
 digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
 digitalWrite(ledPin5, LOW);
  digitalWrite(ledPin6, LOW); 
  delay(1000); 
  }
               
}


