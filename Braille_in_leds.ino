// TIME OUT CORNER
//pinMode(buttonPin, INPUT);     // initialize the pushbutton pin as an input:
// int buttonState = 0;         // variable for reading the pushbutton status
// read the state of the pushbutton value:
// buttonState = digitalRead(buttonPin);
//   // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
//  if (buttonState == HIGH) {
    // turn LED on:
//    digitalWrite(ledPin, HIGH);
//  } else {
    // turn LED off:
//    digitalWrite(ledPin, LOW);

// CONSTANTS:

const int ledpin8 =  8;      // the number of the LED pin
const int ledpin9 =  9;
const int ledpin10 =  10;
const int ledpin11 =  11;
const int ledpin12 =  12;
const int ledpin13 = 13;

// VARIABLES:

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledpin8, OUTPUT);
  pinMode(ledpin9, OUTPUT);
  pinMode(ledpin10, OUTPUT);
  pinMode(ledpin11, OUTPUT);
  pinMode(ledpin12, OUTPUT);
  pinMode(ledpin13, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  while (Serial.available() == 0){
    }
  
  int LedChoice = Serial.parseInt();
  
  switch (LedChoice){
    case 1:
      digitalWrite(ledpin8, HIGH);
      delay(1000);
      digitalWrite(ledpin8, LOW);
    case 2:
      digitalWrite(ledpin9, HIGH);
      delay(1000);
      digitalWrite(ledpin9, LOW);
    case 3:
      digitalWrite(ledpin10, HIGH);
      delay(1000);
      digitalWrite(ledpin10, LOW);
    case 4:
      digitalWrite(ledpin11, HIGH);
      delay(1000);
      digitalWrite(ledpin11, LOW);
    case 5:
      digitalWrite(ledpin12, HIGH);
      delay(1000);
      digitalWrite(ledpin12, LOW);
    case 6:
      digitalWrite(ledpin13, HIGH);
      delay(1000);
      digitalWrite(ledpin13, LOW);
    default:
      Serial.println("Escolhe!:");
  }
}
