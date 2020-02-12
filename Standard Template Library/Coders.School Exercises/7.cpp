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

    printInteger(i);

    const auto a = std::bind(&i, std::multiplies<int>());

    printInteger(i);

    return 0;
}

void printInteger(const int &i)
{
    std::cout << i << std::endl;
}