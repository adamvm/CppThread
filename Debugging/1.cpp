#include <iostream>

int main()
{
    int a = 0;

    for (size_t i = 0; i < 12; i++)
    {
        a++;
        std::cout << a << std::endl;
    }
    
    std::cin.get();

    return 0;
}