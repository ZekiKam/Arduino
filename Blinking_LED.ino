void setup() {
  // put your setup code here, to run once:
pinMode(9,OUTPUT);
pinMode(8, OUTPUT);
}
/*Sets the mode of pin 13 to OUTPUT
pin 13 can now only be used to send signals*/

void loop() {
digitalWrite(9, HIGH);
delay(500);
digitalWrite(9, LOW);
delay(500);
digitalWrite(8, HIGH);
delay(500);
digitalWrite(8, LOW);
delay(500);
}
/*Sets pin 13 to high voltage -> LED on
Pauses program for 1s with LED on
Low voltage -> LED off
LED stays off for 1s
This creates a blinking effect which loops endlessly*/
