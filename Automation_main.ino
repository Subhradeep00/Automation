#include "arduino_secrets.h"
#include "thingProperties.h"

void setup()
{
  Serial.begin(9600);
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  delay(1500); 

  initProperties();

  ArduinoCloud.begin(ArduinoIoTPreferredConnection);
  
  setDebugMessageLevel(2);
  ArduinoCloud.printDebugInfo();
}

void loop()
{
  ArduinoCloud.update();
}

void onSwitch1Change()
{
  if(switch1 == 1)
  {
    digitalWrite(1,HIGH);
  }
  else
  {
  digitalWrite(1,LOW);
  }
}

void onSwitch2Change()
{
  if(switch2 == 1)
  {
    digitalWrite(2,HIGH);
  }
  else
  {
  digitalWrite(2,LOW);
  }
}

void onSwitch3Change()
{
  if(switch3 == 1)
  {
    digitalWrite(5,HIGH);
  }
  else
  {
  digitalWrite(5,LOW);
  }
}

void onSwitch4Change()
{
  if(switch1 == 1)
  {
    digitalWrite(6,HIGH);
  }
  else
  {
   digitalWrite(6,LOW);
  }
}

