#include<iostream>

using namespace std;

//Class efinition

class Sample{
    //private elements
    private:
     int age;

    //public elements
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

  Sample obj1;

  cout << "Enter your age: ";
  cin >> ageInput;

  //call function and pass ageInput as arguement
  
  obj1.displayAge(ageInput);

  return 0;

}