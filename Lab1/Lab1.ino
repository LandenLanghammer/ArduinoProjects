//LANDEN

int red = 13;
int yellow = 12;
int green = 11;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(13, OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  digitalWrite(red, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(5000);                      // wait for a second
  digitalWrite(red, LOW);   // turn the LED off by making the voltage LOW
  delay(20);  
  digitalWrite(green, HIGH);   // turn the LED off by making the voltage LOW
  delay(3000);  
  digitalWrite(green, LOW);   // turn the LED off by making the voltage LOW
  delay(20);
  digitalWrite(yellow, HIGH);   // turn the LED off by making the voltage LOW
  delay(2000);   
  digitalWrite(yellow, LOW);  // turn the LED on (HIGH is the voltage level)
  delay(20);    

}
