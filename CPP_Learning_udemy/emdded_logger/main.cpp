#include<iostream>
#include "Logger.h"
#include "sensor.h"
#include<thread>
#include<chrono>

void sensorTask()
{
    Sensor sensor;
    while(true)
    {
        float temp = sensor.readTemperature();
        Logger::logData("Temperature : " + std::to_string(temp));
        std::cout << "Logged Temperatue: " << temp << " C" << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(2));

    }
}

int main()
{

    std::thread sensorThread(sensorTask);
    sensorThread.join();
    return 0;
}
