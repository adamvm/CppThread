#include <iostream>

// decltype - new keyword in C++11
// typeid - existing keyword from C++98

int main()
{
    int value1;
    double value2;
    std::string value3;

    std::cout << typeid(value1).name() << std::endl;
    std::cout << typeid(value2).name() << std::endl;
    std::cout << typeid(value3).name() << std::endl;

    decltype(value3) name = "Bob";

    std::cout << name;

    return 0;
}