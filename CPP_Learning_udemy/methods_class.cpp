#include<iostream>
class MyClass
{
    public:
    void myMethod(){
        std::cout << "HelloWorld" << "\n";
;   }

};
// void MyClass::myMethod()
// {
//     std::cout << "Hello World";
// }

int main()
{
    MyClass myObj;
    myObj.myMethod();
    return 0;
}