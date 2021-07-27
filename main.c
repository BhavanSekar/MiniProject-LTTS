
void loop() {
  // Temperature analysis
int tempReading = analogRead(temperature);
// If using 5v input
float voltage = tempReading * 5.0; 
// Divided by 1024
voltage /= 1024.0;
//Converting from 10mv per degree
float tempC = (voltage - 0.5) * 100;
	
// This maps temperature to degrees open for the flap
int position = map(tempC, 10, 50, 0, 180);<br>
}
if(previousPosition != position){
	Serial.print("New position: ");
	Serial.println(position);
		
	mainServo.write(position);
	digitalWrite(ledIndicator, HIGH);
	// Wait for the servo to move
	delay(2000);
}

// Turn off the indicator light
digitalWrite(ledIndicator, LOW);
// set previousPosition so if we don't have to change, we don't fire the servo
previousPosition = position;
