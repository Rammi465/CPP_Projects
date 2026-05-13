#include<iostream>
#include<fstream>
#include<thread>
#include<mutex>

std::mutex logMutex;


void logMessage(const std::string& message)
{
    std::lock_guard <std::mutex > lock(logMutex);
    std::ofstream logfile("log.txt", std::ios::app);
    logfile << message << std::endl;

}

void workerThread(int id)
{
    for(int i=0; i < 5; i++)
    {
        logMessage("Thread " + std::to_string(id) + "logging_message " + std::to_string(i));

    }
}

int main()
{
     std::thread t1(workerThread, 1);
     std::thread t2(workerThread, 2);

     t1.join();
     t2.join();

    //logMessage("This is a test log");
    return 0;

}