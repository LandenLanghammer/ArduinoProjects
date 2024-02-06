//LANDEN 2/6/2024
//Lab3 turn the LED on with a button

const int yellowButton = 2; // the number of the pushbutton pin
const int greenButton = 3; 
const int ledPin = 13;    // the number of the LED pin

int yellowState = 0;  // variable for reading the pushbutton status
int greenState = 0;

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(yellowButton, INPUT);
  pinMode(greenButton, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  yellowState = digitalRead(yellowButton);
  greenState = digitalRead(greenButton);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (yellowState == LOW) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
  }
  
    if (greenState == LOW) {
    // turn LED on:
    digitalWrite(ledPin, LOW);
  }

  if (greenState == LOW && yellowState == LOW) {

    digitalWrite(ledPin, HIGH);
    delay (50);
    digitalWrite(ledPin, LOW);
    delay (50);
  }

}
