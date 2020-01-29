#include <iostream>

int main()
{
    int numbers[] = {1, 5, 7, 12, 2, 134};

    for (auto el : numbers)
    {
        el = el + 1;
        std::cout << el << " ";
    }
 
    // for (auto const & el : numbers)
    // {
    //     el = el + 1;
    //     std::cout << el << " ";
    // }


    return 0;
}