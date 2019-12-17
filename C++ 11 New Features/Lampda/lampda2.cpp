#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> v {2, 4, 5, 7, 13};

    for (const auto & el : v)
        std::cout << el << std::endl;

//    std::for_each(v.begin(), v.end(), [](int n){ n = n * 10; });

    for (auto & el : v)
    {
        el = el * 10;
        std::cout << el << std::endl;
    }

    return 0;
}