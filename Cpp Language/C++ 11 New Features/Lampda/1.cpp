#include <iostream>

// Lambda is a direct replacement for a function pointer

int main()
{
    auto l0 = [](){ std::cout << "Hello"; };


    auto l1 = [](int x)->int { return x * 10; };
    auto l2 = [](int x){ return x / 10; };  // possible from C++14

    std::cout << l1(20);

    return 0;
}