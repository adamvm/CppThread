#include <iostream>
#include <array>

int main()
{
    
//    char tab[] = {'h', 'e', 'l', 'l', 'o'};
    char tab[] = "hello";

    std::cout << "Table size is: " << sizeof(tab)/sizeof(char) << std::endl;

    for (auto const &el : tab)
        std::cout << el;

    return 0;
}