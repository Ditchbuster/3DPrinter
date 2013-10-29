/*
 Circuit:

 */

// pins for the LEDs:
const int dirPin = 4;
const int stepPin = 5;
int val=0;

void setup() {
  // initialize serial:
  Serial.begin(9600);
  // make the pins outputs:
  pinMode(dirPin, OUTPUT); 
  pinMode(stepPin, OUTPUT);  

}

void loop() {
  // if there's any serial available, read it:
  while (Serial.available() > 0) {

    // look for the next valid integer in the incoming serial stream:
    int stepSize = Serial.parseInt(); 
    
    if (stepSize<0){
      if (val == HIGH) {
         val=LOW;        
      } else {
         val=HIGH;
      } 
      digitalWrite(dirPin, val);
      stepSize=stepSize-(2*stepSize); //because somehow 2 x a neg number isnt positive...
    }
      Serial.println("ok");
      for(int x=0;x<stepSize;x++){
          digitalWrite(stepPin,HIGH);
          delay(1);
          digitalWrite(stepPin,LOW);
      }  
  }
  }









