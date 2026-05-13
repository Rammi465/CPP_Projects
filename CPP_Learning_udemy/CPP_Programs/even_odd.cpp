
#include<iostream>

int main()
{
    int number, remainder;
    std::cout << "Enter the number : ";
    std::cin >> number;
    remainder = number % 2;
    if(remainder == 0)
    {
        std::cout << number << " is even number" << std::endl;
        
    }
    else
    {
        std::cout << number << " is odd number" << std::endl;

    }

     return 0;


}