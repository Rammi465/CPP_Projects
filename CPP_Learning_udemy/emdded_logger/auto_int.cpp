#include<iostream>
#include <cstdint>
//AAA : Almost Always Auto
//DRY : Dont Repeat Youself

int main()
{

    float a = 10.5; //implicitly converted

    std::int32_t b = a;  //Implicitly converted
    auto b2 = a;
    auto c = static_cast<std::int32_t>(a); // explicitly converted

    auto d = std::int32_t{a}; //uniform init
    auto e = std::int32_t{}; //uniform init

    auto f = 10 + 12.5;

    std::cout << f << "\n";

    return 0;


   
}