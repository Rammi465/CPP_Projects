#include<iostream>

//static variable
//global variable


#include<iostream>
#include<cstdint>
// 5! = 5 * 4 * 3 * 2 * 1
//const : read only input

//constexpr : const +
constexpr std::uint64_t faculty(const std::uint8_t n)
{
    static std::uint32_t counter = 0;
    auto result = std::uint64_t{1};

    for(std::uint8_t i = 1; i<= n; i++)
    {
        result *= i;
    }
    return result;

}

int main()
{
    const auto result1 = faculty(5); // computed at run time
    constexpr auto var = faculty(5);  //computed at compile time

    std::cout << result1 << std::endl;
    //faculty(5);

    return 0;
}