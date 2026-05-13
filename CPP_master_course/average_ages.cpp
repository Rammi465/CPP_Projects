#include<iostream>
using namespace std;
int main()
{
  int ages[8] = {20, 22, 18, 35, 48, 26, 87, 70};


  float avg, sum = 0;

  //Get the length of the Array

  int length = sizeof(ages) / sizeof(ages[0]);

  for (int age: ages)
  {
        sum += age;
  }
  

  //Caluculate the average by dividing sum by the length

  avg = sum / length;

  //print the average


  cout << "The average age is : " <<  avg << endl;



}