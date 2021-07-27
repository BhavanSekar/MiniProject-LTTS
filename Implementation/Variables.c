///
#include <stdio.h>
#include <servo.h>
#include <stdlib.h>
#include <string.h>
char ch;
int i, grade[5];
float credit[5], gpa, totCredit, test_gpa, final_gpa;
// Define constants
#define temperature A0
#define ledIndicator 2
#define servoPin 3

// Startup the servo class
Servo ma
// Define variables
int position = 0;
int previousPosition;

void setup() {
	pinMode(temperature, INPUT);
	pinMode(ledIndicator, OUTPUT);

	// Tell mainServo which pin it is connected to
	mainServo.attach(servoPin);

	Serial.begin(9600);
}
///
