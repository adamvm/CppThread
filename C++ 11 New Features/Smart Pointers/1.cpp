#include <iostream>
#include <memory>

int main()
{
    std::unique_ptr<int> number = std::make_unique<int>();

    std::cout << *number << std::endl;

    *number = 7;

    std::cout << *number;


    return 0;
}