#include <iostream>
#include <array>
#include <algorithm>

class Sorting
{
public:
    bool operator() (const double &a, const double &b) { return std::abs(a) > std::abs(b); }

};

int main()
{
    std::array<double, 6> a {5.0, 4.0, -1.4, 7.9, -8.22, 0.4};

    // std::sort(a.begin(), a.end());
    std::sort(a.begin(), a.end(), Sorting());

    for (auto &&i : a)
        std::cout << i << std::endl;

    return 0;
}