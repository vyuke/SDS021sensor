#include "pm2510senser.h"

pm2510senser PM1;

void setup() 
{ 
   Serial1.begin(9600);
   Serial.begin(9600);
   delay(1000);
}

void loop() 
{  //Output PM2.5 value
   float  pm25_val = PM1.Getpm2_5index();
   Serial.print(pm25_val);
   Serial.println(" ug/m^3");
   delay(1000);
   
   //Output PM10 value
//    float  pm10val = PM1.Getpm10index();
//    Serial.print(pm10val);
//    Serial.println(" ug/m^3");
//    delay(1000);
   
}
