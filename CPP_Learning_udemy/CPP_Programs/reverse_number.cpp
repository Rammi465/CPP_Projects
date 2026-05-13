#include<iostream>
int main()
{
    int num, temp, r, rev = 0;
    std::cout << "Enter a number : ";
    std::cin >> num;
    temp = num;
    while(temp != 0)
    {
        r = temp % 10;
        rev = rev * 10 + r;
        temp /= 10;

    }
    std::cout << "\n the reverse of " << num << "is :"<< rev;
    return 0;
}