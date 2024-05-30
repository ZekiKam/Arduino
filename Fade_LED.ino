//Fading LED

/*Pulse with Modulation (PWM) allows LEDs to go on/off 
Only ~ pins enable PWM*/

void setup() {
pinMode(5, OUTPUT);
}

//analogWrite(pin, brightness)
int brightness = 60;

void loop() {
analogWrite(5,brightness);
delay(200);
if (brightness == 0)
{
  delay(1000); //speed of fading depends on this
  brightness = 60;  
}
else
{
  brightness -= 5;
}
}
