/*
 * Simulate an arc welder with a LED
 *
 * Copyright (c) 2010 John Plocher, released under the terms of the MIT License (MIT)
 */

int ledPin =  13;    // LED connected to digital pin 13

void setup()   {                
  pinMode(ledPin, OUTPUT);     
}

void loop()                     
{

  int count=random(10,60);
  for (int i=0;i<count;i++) {
    digitalWrite(ledPin, HIGH);   // set the LED on
    delay(random(60));
    digitalWrite(ledPin, LOW);    // set the LED off
    delay(random(200));
  }
  
  delay(random(800,2000));
}
