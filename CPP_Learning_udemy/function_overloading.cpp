#include<iostream>
int plusFunctInt(int x, int y);
float plusFunctFloat(float x, float y);
double plusFuncdouble(double x, double y);

int plusFunctInt(int x, int y)
{
    return x+y;
}
float plusFuncFloat(float x, float y)
{
    return x+y;
}
double plusFuncdouble(double x, double y)
{
    return x+y;

}

int main()
{
    int num1 = plusFunctInt(7, 8);
    float num2 = plusFuncFloat(5.6, 7.8);
    double num3 = plusFuncdouble(4554.6, 8888.7);
    std::cout << num1 << "\n" << num2 << "\n" << num3 << std::endl;
    return 0;
}