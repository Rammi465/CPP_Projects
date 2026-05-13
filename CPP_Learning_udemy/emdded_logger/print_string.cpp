#include<iostream>
using namespace std;
int main(){
      /*variable definition*/
       char stringArray[100];

      //Take user input
       cout << "Please write smoething: " << endl;
       cin.getline(stringArray, 80);
       cout << "You enter the string : " << stringArray << endl;
       return 0;

}