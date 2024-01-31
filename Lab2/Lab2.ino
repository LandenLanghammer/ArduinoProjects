//Landen Langhammer
int potValue; //declare potValue between 0-1023

void setup() {
  pinMode(13, OUTPUT); //set pin 13 as an output and LED
  Serial.begin(9600); //Setup console monitor
}

void loop() { //setting the blink rate of the LED
  potValue = analogRead(0); //reading analog input 0
  Serial.println(potValue);
  digitalWrite(13,HIGH);
  delay(potValue); // Wait for potValue amount of time
  digitalWrite(13,LOW);
  delay(potValue); // Wait for potValue amount of time
}
