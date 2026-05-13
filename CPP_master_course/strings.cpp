#include<iostream>
#include<string>

int main()
{

    std::string fullname;
    std::string location;
    int age;

    std::cout << "What is your full name?" << std::endl;
    getline(std::cin, fullname);

    std::cout << "Enter your age" << std::endl;
    std::cin >> age;

    std::cout << fullname << std::endl;
    std::cout << age << std::endl;
    return 0;
  

        

}