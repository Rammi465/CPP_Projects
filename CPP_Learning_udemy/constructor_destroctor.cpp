#include<iostream>
class Car{
    public:
    std::string brand;
    std::string model;
    int year;
    Car(std::string x, std::string y, int z)
    {
        brand = x;
        model = y;
        year = z;
    }
    ~Car()
    {
        std::cout << "destructor is defined\n" << std::endl;

    }

};

int main()
{
    Car carobj1("BMW", "X5", 1999);
    Car carobj2("Mustang", "G2", 2001);

    //print values
    std::cout << carobj1.brand << "\t"<< carobj1.model << "\t" << carobj1.year << std::endl;
    std::cout << carobj2.brand << "\t" << carobj2.model << "\t" << carobj2.year << std::endl;
    return 0;

}