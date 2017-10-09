/*
  Button

  Turns on and off a light emitting diode(LED) connected to digital pin 13,
  when pressing a pushbutton attached to pin 2.

  The circuit:
  - LED attached from pin 13 to ground
  - pushbutton attached to pin 2 from +5V
  - 10K resistor attached to pin 2 from ground

  - Note: on most Arduinos there is already an LED on the board
    attached to pin 13.

  created 2005
  by DojoDave <http://www.0j0.org>
  modified 30 Aug 2011
  by Tom Igoe

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Button
*/

// constants won't change. They're used here to set pin numbers:
const int buttonPin = 2;     // the number of the pushbutton pin
const int ledPin =  13;  // the number of the LED pin
const int buttonPin2 = 3;

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  Serial.begin(9600);
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
  pinMode(buttonPin2, INPUT);
  
}

void loop() {
  //int mappedButton = map(buttonPin, 0, 1023, 0, 255);
  //int mappedButton2 = map(buttonPin2, 0, 1023, 0, 255);
  int sensorValue = digitalRead(buttonPin);
  int sensorValue2 = digitalRead(buttonPin2);
 
  Serial.print(sensorValue);
  Serial.print(",");
  Serial.println(sensorValue2);
  delay(50);
 
  // read the state of the pushbutton value:
  if (digitalRead(buttonPin) == LOW) {
    digitalWrite(ledPin, LOW); //turn LED OFF
  } else if (digitalRead(buttonPin2) == LOW) {
    digitalWrite(ledPin, HIGH); // tuen LED ON 
  }  

  /*
   Serial.print(buttonPin);
   Serial.print(",");
   Serial.println(buttonPin2); 
   */
   
  }
 
