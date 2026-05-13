#include<iostream>


int main()
{
    int a, b, c;
    char d;
    std::cout << "**************** Calculator***************************" << std::endl;
    //std::cout << "Print the Caluculator with All Possibilities" << std::endl;
    std::cout << " Operations : +, - , *, /" << std::endl;
    std::cout << "Enter the values of a and b" << std::endl;
    std::cin >> a;
    std::cin >> b;
    std::cout << "Enter the operation you need to perform from above " << std::endl;
    std::cin >> d;
    std::cout << "You want to perform opeation as : " << d << std::endl;
   
    
  switch(d)
  {
     // int d;
    case '+':
        c = a + b;
        std::cout << "Result of addition is c: " << c << std::endl;
        break;

    case '-':   
        c = a - b;
        std::cout << "Result of substraction is c: " << c << std::endl;
        break;

    case '*':
        c = a * b;
        std::cout << "Result of multiplication is c: " << c << std::endl;
        break;

    case '/':
        if(b != 0)
            c  = a/b;
        std::cout << "Result of division is c: " << c << std::endl;
        break;
    case '%':
        if(b != 0)
            c  = a % b;
        std::cout << "Result of division is c: " << c << std::endl;
        break;


    default:
      std::cout << "Invalid Input" << std::endl;
      break;

  }
  return 0;
}


