#include<iostream>

void myFunction(std::string fname, int age)
{
    std::cout << fname << " age is " << age << " Years old. \n";

}  

int main()
{
    myFunction("Ramarao", 34);
    myFunction("Snadhya", 26);
    myFunction("Sidhiksha", 7);
    return 0;

}