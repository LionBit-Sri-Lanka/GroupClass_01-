#include <Arduino.h>
#include <lionbit.h>

unsigned long ptime = 0;

unsigned long ptime1 = 0;

void setup()
{
  Serial.begin(115200);
  digitalWrite(LED_BUILTIN, LOW);
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);
}

void loop()
{
  if (millis() - ptime1 >= 600UL)
  {

    Serial.println("Trigger command @ 500ms");

    ptime1 = millis();
  }

  if (millis() - ptime >= 1000UL)
  {
    int pinStatus = 0;

    pinStatus = digitalRead(LED_BUILTIN); // Reading current status ( 1 or 0)  of the LED_BUILTIN pin

    // (1 - pinStatus) ======>>>> (1 -0)  = 0 (LOW)  ; (1 -1) = 1(HIGH)

    digitalWrite(LED_BUILTIN, (1 - pinStatus));

    Serial.print("None Blocking Timer : ");

    Serial.println(millis());

    ptime = millis();
  }
}