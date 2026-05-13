#include<iostream>

using namespace std;

//Class efinition

class Sample{
    //private elements
    protected:
     int age;
};
    //declare a child class
class SampleChild:public Sample{
    public:
        void displayAge(int a){
            age = a;
            if(age > 100){
                cout << "Enter the age below 100" << endl;
                return;
            }
            cout << "Age is : " << age << endl;
        }
};
int main()
{
  int ageInput;
  //declare an object

  SampleChild child;

  cout << "Enter your age: ";
  cin >> ageInput;

  //call function and pass ageInput as arguement
  child.displayAge(ageInput);

  return 0;

}