#include<iostream>
using namespace std;
class Animal{
    public:
     void eat()
     {
        cout << "I can eat\n" << endl;

     }
     void sleep()
     {
        cout << "I can sleep\n" << endl;

     }
};

//derived class
class Dog:public Animal{
  
    public:
    void bark()
    {
        cout << "I can bark! woof Woof!"<< endl;
    }
    
};

int main()
{
    //Create object of the class
    Dog dog1;

    //calling base members of the class
    dog1.eat();
    dog1.bark();
    dog1.sleep();

    return 0;
}


