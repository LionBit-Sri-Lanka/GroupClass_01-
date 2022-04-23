#include <Arduino.h>
#include <lionbit.h>

// 2^12 = 4095 (maximum digital value)
// 5V -----> 4095

/*
float v = (5/4095.00F) * value

v = (5/4095.00F) * 2258
v = 2.75

*/

void setup()
{
  Serial.begin(9600);
  pinMode(LED_BUILTIN,OUTPUT);

  analogReadResolution(12); // 2^10 = 1023
  analogSetAttenuation(ADC_11db);
  analogSetPinAttenuation(VP, ADC_0db);
  ledcAttachPin(LED_BUILTIN,0);
}

void loop()
{

  int i = 0, value = 0;

  float v = 0;

  for (i = 0; i < 20; i++)
  {

    value = value +  analogRead(A0);
    // Serial.println(value);
  }

  delay(2000);

  v = (5 / 4095.00F) * (value/20);

  for(i =0; i< 255;i++)
  {
      ledcWrite(0,i);
  }
  delay(1000);

  for(; i>=0;i--)
  {
    ledcWrite(0,i);
  }

  

  Serial.print("Analog Value :");
  Serial.print(value/20);
  Serial.print('\t');
  Serial.print("Voltage :");
  Serial.println(v);

  delay(1000);
}