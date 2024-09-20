#include "include/list.h"


int main(int arg_count, char *args[])
{
    
   if(arg_count > 1)
   {
      List simpleList;
      simpleList.name = std::string(args[1]);
      simpleList.print_menu();
   }
   else
   {
     std::cout << "User name is not supplied ...exiting the program\n" << std::endl;

   }

  return 0;

}

