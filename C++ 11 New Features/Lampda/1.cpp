#include <iostream>

int main()
{
    auto MojaLampda = [](int x)->int { return x * 10; };
    auto MojaLampda2 = [](int x){ return x / 10; };


    std::cout << MojaLampda2(20);


    return 0;
}