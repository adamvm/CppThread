#include <iostream>

void test(void(*l0))
{


}


int main()
{
    auto l0 = [](){ std::cout << "Hello"; };


    auto l1 = [](int x)->int { return x * 10; };
    auto l2 = [](int x){ return x / 10; };

    std::cout << l1(20);

    return 0;
}