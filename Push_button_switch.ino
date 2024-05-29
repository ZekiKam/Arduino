/* When pressed button -> pin 4 LED on*/

void setup() {
pinMode(4, OUTPUT);
pinMode(2, INPUT_PULLUP);   /*Set pin 2 as on-board switch-input*/
}

void loop() 
{   /*main opening bracket for loop*/

if (digitalRead(2) == LOW)   /*When button is pressed, it connects pin 2 to the ground -> low voltage*/
{      /*brackets around statement, no brackets around if/ elif/ else*/
digitalWrite(4, HIGH);
}

else
{
digitalWrite(4, LOW);
}

}    /*main closing bracket for loop*/
