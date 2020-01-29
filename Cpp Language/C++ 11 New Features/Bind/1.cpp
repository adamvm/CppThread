#include <iostream>
#include <functional>

int sum(int a, int b, int c)
{
    std::cout << "a = " << a << ", b = " << b << ", c = " << c << std::endl;
    return a + b + c;
}

int main()
{
    std::cout << sum(10, 20, 30);

    auto calc = std::bind(sum, 1, 2, 3);

    std::cout << std::endl << calc();


    auto calc_revised = std::bind(sum, std::placeholders::_3, std::placeholders::_1, std::placeholders::_2);

    std::cout << std::endl << calc_revised(13, 15, 4);

    return 0;
}