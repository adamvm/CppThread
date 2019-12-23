#include <iostream>

int main()
{
    auto number = 7;

    std::cout << number << std::endl;

    std::string text = "Rome";

    auto it = text.begin(); //  equivalent of std::string::iterator

    for (it; it != text.end(); it++)
        std::cout << *it << std::endl;

    return 0;
}