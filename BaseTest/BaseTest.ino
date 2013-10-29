/*
 Circuit:

 */

// pins for the LEDs:
const int dirPin = 4;
const int stepPin = 5;


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
      digitalWrite(dirPin,digitalRead(dirPin)); 
    }
      Serial.println("ok");
    }
  }
}








