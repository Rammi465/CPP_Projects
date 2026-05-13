#include<iostream>

class Myclass{  //The class
    public:   //Access specifier
      int myNum;  //Attribute
      std::string myString; //attribute
};

int main()
{
    Myclass myObj; //objecyt ogf the class

     //access the sttributes and set values

     myObj.myNum = 15;
     myObj.myString = "Raa";


     std::cout << myObj.myNum << std::endl;
     std::cout << myObj.myString << std::endl;
     return 0;

}