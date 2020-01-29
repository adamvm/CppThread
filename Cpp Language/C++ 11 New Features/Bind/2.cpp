#include <iostream>
#include <functional>

class Test
{
public:
    int sum(int a, int b, int c)
    {
        std::cout << "a = " << a << ", b = " << b << ", c = " << c << std::endl;
        return a + b + c;
    }
} test;

int main()
{
    auto calc = std::bind(&Test::sum, 1, 2, 3);

    std::cout << std::endl << calc();


    auto calc_revised = std::bind(&Test::sum, std::placeholders::_3, std::placeholders::_1, std::placeholders::_2);

    std::cout << std::endl << calc_revised(13, 15, 4);

    return 0;
}