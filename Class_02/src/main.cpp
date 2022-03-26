#include <Arduino.h>

int temp = 0;

void setup()
{
  Serial.begin(9600);
  temp = 32;
}

void loop()
{

  // if statement
  /*

  if else if
  temperature  33 (below) OK

  temperature 33 (above) Fan -ON

  temperature 39 (above) shutdown

  */


  if (temp > 33 && temp < 40)
  {
    Serial.println("Fan Auto On ..");
  }
  if ( temp > 37)
  {
    Serial.println("System ShutDown....");
  }
  else  if (temp < 33)
  {
    Serial.println("System OK");    
  }

  Serial.println("if else branch closed");

  delay(1000);
}