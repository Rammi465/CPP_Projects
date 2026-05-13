#include<iostream>

int main()
{
    int a = 130, b = 10;
    int sum  = a + b;
    int difference = a - b;
    int product = a * b;
    int quotient = a / b ;
    int reminder = a % b;
    int result = 10;
    int myInt =  15;

    result += 15;

    std::cout << "Sum = " << sum << std::endl;
    std::cout << "Difference = " << difference << std::endl;
    std::cout << "product = " <<  product << std::endl;
    std::cout << "quotient = " << quotient << std::endl;
    std::cout << "reminder = " << reminder << std::endl;
    std::cout << "result = " << result << std::endl;

    std::cout << "myInt = " << myInt << std::endl;
    myInt++;
    std::cout << myInt << std::endl;
    myInt--;
    std::cout << myInt << std::endl;
    


   return 0;

}