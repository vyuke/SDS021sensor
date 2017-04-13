#ifndef SDS021sensor_H
#define SDS021sensor_H

#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif

class pm2510senser
{
public:
float Getpm2_5index();
float Getpm10index();	

private:
// int a[10];	
// float pm25val;
//float pm10val;
};
#endif
