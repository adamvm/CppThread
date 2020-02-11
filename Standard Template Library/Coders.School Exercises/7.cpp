/*
1. Use std::bind to create a functor that multiplies given value by 5 (use std::multiplies).
2. Print a result of this functor with 11 as an argument.
3. Replace std::bind with a lambda function
REMARK: in this task use std::function instead of auto.
*/

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