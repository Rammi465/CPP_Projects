#include<iostream>
#include<cstdio>
//using namespace std;

int main()
{
  //Complete the code

  int a,b;
  std::string numbers[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven"};
   std::cin >> a;
   std::cin >> b;

   for(int i = a;i <= b;i++)
   {
     if(i <= 9)
     {
        std::cout << numbers[i] << std::endl;

     }
     else
     {
        if(i % 2 == 0)
        {
            std::cout << "even" << std::endl;

        }
        else
        {
            std::cout << "Odd" << std::endl;
        }
     }
   }
   return 0;

}