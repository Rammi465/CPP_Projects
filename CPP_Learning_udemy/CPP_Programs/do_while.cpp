#include<iostream>

int main()
{
   int numbers = 12345;

   int revnumbers = 0;
   while(numbers)
   {
    revnumbers = revnumbers * 10 * numbers % 10;
    numbers /= 10;

   }
   std::cout << "Reversed Number : " << revnumbers << "\n";
}