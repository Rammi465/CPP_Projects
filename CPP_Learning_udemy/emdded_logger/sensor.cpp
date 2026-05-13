#include"sensor.h"
#include<cstdlib> //random values

Sensor::Sensor(){}

float Sensor::readTemperature()
{
        return 20.0 + static_cast<float>(rand() % 1000) / 100.0; //simulating temperature

}
