#include"Logger.h"
#include<fstream>
#include<iostream>

void Logger::logData(const std::string &data)
{
        std::ofstream logfile("sensor_log.txt", std::ios::app);
    
        if(logfile.is_open())
        {
            logfile << data << std::endl;
            logfile.close();
        }
        else
        {
            std::cerr << "Error opening file" << std::endl;
        }
    
}

