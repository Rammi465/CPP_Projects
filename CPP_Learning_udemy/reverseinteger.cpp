#include<iostream>
using namespace std;
int reverseInteger(int num)
{
    int reversed = 0;
    bool isNegative = false;
    if(num < 0)
    {
        isNegative = true;
        num = -num;
    }
    while(num!=10)
    {
         int digit = num % 10;
         reversed = reversed * 10 + digit;
         num /= 10;
    }
    if(isNegative)
    {
        reversed = -reversed;
        
    }
    return reversed;

}

int main()
{
    int num;
    cout << "Enter the number you ant to reverse:" << endl;
    cin >> num;

    cout << "Reversing integer : " << reverseInteger(num) << endl;
    return 0;

}