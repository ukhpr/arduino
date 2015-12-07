/*
  Project Title
  Short description of the project and what it does goes here
 
  This example code is in the public domain.
 */


// Fill in project details here
String confProject = "Blink";
String confVersion = "0.0";
String confDate ="29/04/2015";


// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;


void setup() {
  // write project details to serial:
  Serial.begin(9600);
  Serial.println("Project: " + confProject);
  Serial.println("Version: " + confVersion);
  Serial.println("Date: " + confDate);

  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);     

}

void loop() {
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);               // wait for a second

}
