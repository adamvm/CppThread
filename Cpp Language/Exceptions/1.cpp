#include <iostream>

int divide(int a, int b);

int main()
{
    std::cout << divide(6, 0) << std::endl;

    return 0;
}

int divide(int a, int b)
{
    try
    {
        if (b == 0)
            throw "Division by 0";
    }
    catch(const char* exp)
    {
        std::cout << "Error: " << exp;
    }
    
    return a / b;
}