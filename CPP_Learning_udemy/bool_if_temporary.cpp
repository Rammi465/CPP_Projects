#include<iostream>
#include<cstdint>

int main()
{
   bool b1 = true;
   bool b2 = false;

   //bool c1 = (b1 || b2) && b1;

   if(b1 == true)
   {
        std::cout << "Printing code\n";
   }
   else if(!b2)
   {

   }
   else{

   }
   std::int32_t result;
   if(b1)
   {
     result = 10;
   }
   else{
        result =  -10;
   }

    std::int32_t result2 = b1 == true? 10: -10; // ternary

   return 0;


}