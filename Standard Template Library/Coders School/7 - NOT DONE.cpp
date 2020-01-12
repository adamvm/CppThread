#include <iostream>
#include <functional>

void printInteger(const int &i);

int main()
{
    int i = 5;

    const auto f = std::bind(&printInteger, 5);  // f makes a copy of i (5)
    const auto g = std::bind(&printInteger, std::ref(i));  // f makes a copy of i (5)

    f();
    f();

    i = 666;

    f();
    g();

    return 0;
}

void printInteger(const int &i)
{
    std::cout << i << std::endl;
}