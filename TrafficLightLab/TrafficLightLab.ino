//LANDEN 2/12/2024

const int greenButton = 2;  // the number of the pushbutton pin
const int green1 = 13;    // the number of the LED pin
const int yellow1 = 12;
const int red1 = 11;
const int green2 = 10;
const int yellow2 = 9;
const int red2 = 8;
const int ledGreen = 6;
const int ledBlue = 5;
const int ledRed = 4;

int greenState = 0;  // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(green1, OUTPUT);
  pinMode(yellow1, OUTPUT);
  pinMode(red1, OUTPUT);
  pinMode(green2, OUTPUT);
  pinMode(yellow2, OUTPUT);
  pinMode(red2, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledBlue, OUTPUT);
  pinMode(ledRed, OUTPUT);

  // initialize the pushbutton pin as an input:
  pinMode(greenButton, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  greenState = digitalRead(greenButton);

    if (greenState == HIGH) {
    digitalWrite(red1, HIGH);
    digitalWrite(green2, HIGH);
    delay(5000);
    digitalWrite(green2, LOW);
    digitalWrite(yellow2, HIGH);
    delay(2000);
    digitalWrite(yellow2, LOW);
    digitalWrite(red1, LOW);
    digitalWrite(green1, HIGH);
    digitalWrite(red2, HIGH);
    delay(5000);
    digitalWrite(green1, LOW);
    digitalWrite(yellow1, HIGH);
    delay(2000);
    digitalWrite(red2,LOW);
    digitalWrite(yellow1, LOW);

    }

    else {
    digitalWrite(green1, LOW);
    digitalWrite(green2, LOW);
    digitalWrite(yellow1, LOW); 
    digitalWrite(yellow2, LOW);

    digitalWrite(ledGreen, HIGH);
    digitalWrite(ledRed, HIGH);
    digitalWrite(ledBlue, HIGH);

    delay(15000);

    digitalWrite(ledGreen, LOW);
    digitalWrite(ledRed, LOW);
    digitalWrite(ledBlue, LOW);

    }


}

