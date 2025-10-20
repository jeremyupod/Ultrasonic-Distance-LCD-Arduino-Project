/*
  This code is based on a tutorial by [EAZYTRONIC] on YouTube:
  https://www.youtube.com/watch?v=AIkesXcCP9Q

  Added a 500ms delay between sensor readings.
*/

#include <LiquidCrystal.h>
LiquidCrystal lcd = LiquidCrystal(10,9,8,7,6,5);
const int trigPin = 12;
const int echoPin = 11;
float time, distance;

void setup()
{
	lcd.begin(16, 2);
	pinMode(trigPin, OUTPUT);
	pinMode(echoPin, INPUT);
	Serial.begin(9600);
}

void loop()
{
	digitalWrite(trigPin, LOW);
	delayMicroseconds(2);
	digitalWrite(trigPin, HIGH);
	delayMicroseconds(10);
	digitalWrite(trigPin, LOW);

	time = pulseIn(echoPin, HIGH);
	distance = (time*0.0343)/2;

	Serial.print("Distance (cm): ");
	Serial.println(distance);

	lcd.setCursor(0,0);
	lcd.print("Distance in CM");
	lcd.setCursor(0,1);
	lcd.print(distance);
  
  	delay(500); // <-- The 500 millisecond delay before taking the next measurement.
}
