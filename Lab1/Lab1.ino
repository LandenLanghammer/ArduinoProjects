//LANDEN

// creates variable strings for 13, 12, and 11
int red = 13;
int yellow = 12;
int green = 11;

void setup() {
  // sets up pins 13, 12, and 11 as outputs
  pinMode(13, OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  // LEDs emulating a traffic light
  digitalWrite(red, HIGH);      // turn the red LED on (HIGH is the voltage level)
  delay(5000);                  // wati for 5 seconds
  digitalWrite(red, LOW);       // turn the red LED off by making the voltage LOW
  digitalWrite(green, HIGH);    // turn the green LED on by making the voltage HIGH
  delay(3000);                  // wait for 3 seconds
  digitalWrite(green, LOW);     // turn the green LED off by making the voltage LOW
  digitalWrite(yellow, HIGH);   // turn the yellow LED off by making the voltage HIGH
  delay(2000);                  // wait for 2 seconds
  digitalWrite(yellow, LOW);    // turn the yellow LED off by making the voltage LOW

}
