void setup() {
//initialize serial
Serial.begin(9600);
}

void loop(){
	while (Serial.available() >0) {
		if (Serial.read() != '\n') {
			Serial.write("Hello World");
			
		}
	}
}