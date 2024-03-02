// Connections to DM542T Driver
const int dirPin = 2;  // Direction pin 
const int stepPin = 3; // Step/Pul+ pin
 // Motor steps per rotation
const int STEPS_PER_REV = 900;
void setup() {
  // put your setup code here, to run once:
  pinMode(3,OUTPUT );
  pinMode(2,OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  // Set motor direction clockwise
  digitalWrite(dirPin,HIGH); 
  
  // Spin motor one rotation slowly
  for(int x = 0; x < STEPS_PER_REV; x++) {
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(400); 
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(400); 
  }
  
  // Pause for one second
  delay(1000); 
  
  // Set motor direction counterclockwise
  digitalWrite(dirPin,LOW);
  
  // Spin motor two rotations quickly
  for(int x = 0; x < (STEPS_PER_REV ); x++) {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(400);
    digitalWrite(stepPin,LOW);
    delayMicroseconds(400);
  }
  
  // Pause for one second
  delay(1000);
}
