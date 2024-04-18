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

const int ledpin1 =  8;      // the number of the LED pin
const int ledpin2 =  9;
const int ledpin3 =  10;
const int ledpin4 =  11;
const int ledpin5 =  12;
const int ledpin6 = 13;
const int button1 = 2;

// VARIABLES:
int button1state = 0;
char choice;

void setup() {
  // initialize the BUTTON pin as input:
  pinMode(button1, INPUT);
  // initialize the LED pin as an output:
  pinMode(ledpin1, OUTPUT);
  pinMode(ledpin2, OUTPUT);
  pinMode(ledpin3, OUTPUT);
  pinMode(ledpin4, OUTPUT);
  pinMode(ledpin5, OUTPUT);
  pinMode(ledpin6, OUTPUT);
  Serial.begin(9600);
  Serial.println("Estoy ready");
}

void on(int pin) {
  digitalWrite(pin, HIGH);
}

void oof(int pin) {
  digitalWrite(pin, LOW);
}

void off() {
  digitalWrite(ledpin1, LOW);
  digitalWrite(ledpin2, LOW);
  digitalWrite(ledpin3, LOW);
  digitalWrite(ledpin4, LOW);
  digitalWrite(ledpin5, LOW);
  digitalWrite(ledpin6, LOW);
}
void letters(){
  if (choice == 'A') {
    Serial.println(choice);
    off();
    on(10);
  }
  else if (choice == 'B') {
    Serial.println(choice);
    off();
    on(9);
    on(10);
  }
  else if (choice == 'C'){
    Serial.println(choice);
    off();
    on(10);
    on(13);
  }
  else if (choice == 'D'){
    Serial.println(choice);
    off();
    on(10);
    on(12);
    on(13);
  }
  else if (choice == 'E'){
    Serial.println(choice);
    off();
    on(10);
    on(12);
  }
  else if (choice == 'F'){
    Serial.println(choice);
    off();
    on(9);
    on(10);
    on(13);
  }
  else if (choice == 'G'){
    Serial.println(choice);
    off();
    on(9);
    on(10);
    on(12);
    on(13);
  }
  else if (choice == 'H'){
    Serial.println(choice);
    off();
    on(9);
    on(10);
    on(12);
  }
  else if (choice == 'I'){
    Serial.println(choice);
    off();
    on(9);
    on(13);
  }
  else if (choice == 'J'){
    Serial.println(choice);
    off();
    on(9);
    on(12);
    on(13);
  }
  else if (choice == 'K'){
    Serial.println(choice);
    off();
    on(8);
    on(10);
  }
  else if (choice == 'L'){
    Serial.println(choice);
    off();
    on(8);
    on(9);
    on(10);
  }
  else if (choice == 'M'){
    Serial.println(choice);
    off();
    on(8);
    on(10);
    on(13);
  }
  else if (choice == 'N'){
    Serial.println(choice);
    off();
    on(8);
    on(10);
    on(12);
    on(13);
  }
  else if (choice == 'O'){
    Serial.println(choice);
    off();
    on(8);
    on(10);
    on(12);
  }
  else if (choice == 'P'){
    Serial.println(choice);
    off();
    on(8);
    on(9);
    on(10);
    on(13);
  }
  else if (choice == 'Q'){
    Serial.println(choice);
    off();
    on(8);
    on(9);
    on(10);
    on(12);
    on(13);
  }
  else if (choice == 'R'){
    Serial.println(choice);
    off();
    on(8);
    on(9);
    on(10);
    on(12);
  }
  else if (choice == 'S'){
    Serial.println(choice);
    off();
    on(8);
    on(9);
    on(13);
  }
  else if (choice == 'T'){
    Serial.println(choice);
    off();
    on(8);
    on(9);
    on(12);
    on(13);
  }
  else if (choice == 'U'){
    Serial.println(choice);
    off();
    on(8);
    on(10);
    on(11);
  }
  else if (choice == 'V'){
    Serial.println(choice);
    off();
    on(8);
    on(9);
    on(10);
    on(11);
  }
  else if (choice == 'W'){
    Serial.println(choice);
    off();
    on(9);
    on(11);
    on(12);
    on(13);
  }
  else if (choice == 'X'){
    Serial.println(choice);
    off();
    on(8);
    on(10);
    on(11);
    on(13);
  }
  else if (choice == 'Y'){
    Serial.println(choice);
    off();
    on(8);
    on(10);
    on(11);
    on(12);
    on(13);
  }
  else if (choice == 'Z'){
    Serial.println(choice);
    off();
    on(8);
    on(10);
    on(11);
    on(12);
  }
  
  else if (choice == '0'){
    Serial.println(choice );
    off();
  }
  else if (choice == '1') {
    Serial.println(choice);
    on(8);
    on(9);
    on(10);
    on(11);
    on(12);
    on(13);
    
  }
}

// Better way of doing it: Matrizes so you can keep some lights already on
void loop() {
  button1state = digitalRead(button1);
  while(Serial.available() > 0) {
    choice = Serial.read();
    letters();
  if (button1state == HIGH){
  Serial.println("ALTO");
  }
 }





}
