#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v {34, 5, 212, 78, 442, 3442, 2425};

    for (const auto & el : v)
        std::cout << el << std::endl;

    return 0;
}