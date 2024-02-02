
int redLED = 11; //intialize all three LEDs
int greenLED = 12;
int blueLED = 13;

void setup() { //setup all three pins
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);

}


void loop() { //turn Red on, Green on, Red off, Blue on, Green off, Blue off
  digitalWrite(redLED, HIGH);  
  delay(500);                      
  digitalWrite(greenLED, HIGH);   
  delay(500); 
  digitalWrite(redLED, LOW);  
  delay(500);                      
  digitalWrite(blueLED, HIGH);   
  delay(500);   
  digitalWrite(greenLED, LOW);  
  delay(500);                      
  digitalWrite(redLED, HIGH);   
  delay(500);          
  digitalWrite(blueLED, LOW);                   
}
