#include<iostream>
#include"storage_classes2.cpp"
using namespace std;
int count;
extern void write_extern();
int main()
{
    count = 5;
    write_extern();
    system("PAUSE");

  


}