#include<iostream>

int main()
{
   //An array of different ages 

   int ages[9] = {20, 22, 18, 10, 35, 48, 26, 87, 70};

   //int i;

   //Get the length of the array

   //int length = sizeof(ages) / sizeof(ages[0]);

   //creat a variable and assign the first array element of ages

   int lowestAge = ages[0];

   //Lopp through the elements of the ages array to find the lowest age

   for(int age : ages)
   {
        if(lowestAge > age)
        {
            lowestAge = age;

        }
   }

  std::cout << "The lowest age is : "  << lowestAge << std::endl;

}