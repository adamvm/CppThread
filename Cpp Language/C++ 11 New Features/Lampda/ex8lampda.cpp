#include <iostream>
#include <array>
#include <algorithm>

int main()
{
    std::array<double, 6> a {5.0, 4.0, -1.4, 7.9, -8.22, 0.4};

    std::sort(a.begin(), a.end(), [](const double &a, const double &b){ return abs(a) < abs(b); });

    for (auto &&i : a)
        std::cout << i << std::endl;

    return 0;
}