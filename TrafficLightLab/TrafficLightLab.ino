//LANDEN 2/12/2024
//TrafficLightLab: Traffic Light with Pedestrian Light and Button

//intializing every button and LED pin
const int greenButton = 2;  

const int green1 = 13;    
const int yellow1 = 12;
const int red1 = 11;

const int green2 = 10;
const int yellow2 = 9;
const int red2 = 8;

const int ledGreen = 6;
const int ledBlue = 5;
const int ledRed = 4;

//variable for reading the button
int greenState = 0;  

void setup() {
  // initialize the LED pins as outputs
  pinMode(green1, OUTPUT);
  pinMode(yellow1, OUTPUT);
  pinMode(red1, OUTPUT);

  pinMode(green2, OUTPUT);
  pinMode(yellow2, OUTPUT);
  pinMode(red2, OUTPUT);

  pinMode(ledGreen, OUTPUT);
  pinMode(ledBlue, OUTPUT);
  pinMode(ledRed, OUTPUT);

  // initialize the button pin as an input:
  pinMode(greenButton, INPUT);
}

  //check the button
void checkBtn() {
  //check the button
  greenState = digitalRead(greenButton);

  //if button is pressed make both traffic lights Red and turn on RGB LED

    if (greenState == LOW) {
    digitalWrite(green1, LOW);
    digitalWrite(green2, LOW);

    digitalWrite(yellow1, LOW); 
    digitalWrite(yellow2, LOW);

    digitalWrite(red1, HIGH); 
    digitalWrite(red2, HIGH);

    digitalWrite(ledGreen, HIGH);
    digitalWrite(ledRed, HIGH);
    digitalWrite(ledBlue, HIGH);

    delay(15000);
    }
}

void loop() {
  // read the button
greenState = digitalRead(greenButton);

  //if the button not pressed
    if (greenState == HIGH) {

  //left is red right is green   
    digitalWrite(red1, HIGH);
    digitalWrite(green2, HIGH);

  //wait 5 seconds  
    delay(5000);

  //left is red right is yellow
    digitalWrite(green2, LOW);
    digitalWrite(yellow2, HIGH);

  //run checkBtn
    checkBtn();

  //wait 2 seconds
    delay(2000);

  //turn off the RGB and both red lights
    digitalWrite(ledGreen, LOW);
    digitalWrite(ledRed, LOW);
    digitalWrite(ledBlue, LOW);
    digitalWrite(red1, LOW); 
    digitalWrite(red2, LOW);

  //left is green 
    digitalWrite(yellow2, LOW);
    digitalWrite(red1, LOW);
    digitalWrite(green1, HIGH);
    digitalWrite(red2, HIGH);

  //run checkBtn
    checkBtn();

  //wait 5 seconds
    delay(5000);

  //turn off the RGB and both red lights
    digitalWrite(ledGreen, LOW);
    digitalWrite(ledRed, LOW);
    digitalWrite(ledBlue, LOW);
    digitalWrite(red1, LOW); 
    digitalWrite(red2, LOW);

  //left is yellow right is red
    digitalWrite(red2, HIGH);
    digitalWrite(green1, LOW);
    digitalWrite(yellow1, HIGH);

  //run checkBtn
    checkBtn();

  //wait 2 seconds  
    delay(2000);

  //turn off the RGB and both red lights
    digitalWrite(ledGreen, LOW);
    digitalWrite(ledRed, LOW);
    digitalWrite(ledBlue, LOW);
    digitalWrite(red1, LOW); 
    digitalWrite(red2, LOW);

  //turn off both traffic lights
    digitalWrite(red2,LOW);
    digitalWrite(yellow1, LOW);

  //run checkBtn
    checkBtn();

  //turn off the RGB and both red lights
    digitalWrite(ledGreen, LOW);
    digitalWrite(ledRed, LOW);
    digitalWrite(ledBlue, LOW);
    digitalWrite(red1, LOW); 
    digitalWrite(red2, LOW);

    }

}
