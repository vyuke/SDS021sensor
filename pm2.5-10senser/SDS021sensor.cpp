#include "SDS021sensor.h"
#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif
float pm2510senser::Getpm2_5index()
{
  int a[10] = {};
  float pm25val;
  while (Serial1.available() >= 10)
  {
    if (Serial1.read() == 0xAA)
    {
      a[0] = 0xAA;
      for (int i = 1; i <= 9; i++)
      {
        a[i] = Serial1.read();
      }
       pm25val = (a[3] * 256 + a[2]) / 10.0;
    }
  }
  return pm25val;
}

float pm2510senser::Getpm10index()
{
  int a[10] = {};
  float pm10val;
  while (Serial1.available() >= 10)
  {
    if (Serial1.read() == 0xAA)
    {
      a[0] = 0xAA;
      for (int i = 1; i <= 9; i++)
      {
        a[i] = Serial1.read();
      }
      pm10val = (a[5] * 256 + a[4]) / 10.0;
    }
  }
  return pm10val;
}
//sdasda