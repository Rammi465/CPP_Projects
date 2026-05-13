#include<iostream>
#include<cstdint>

//definitoion
// function declaration
void my_print_function(std::uint32_t number)
{
    std::cout << number << std::endl;

}
void print_double(double num)
{
    std::cout <<  num  << std::endl;
}
int main()
{
    my_print_function(10); // function call
    my_print_function(10.5);
    print_double(34.578);
    return 0;
}
//function definition