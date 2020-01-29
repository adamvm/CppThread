#include <iostream>
#include <vector>
#include <algorithm>

struct Class
{
    void operator()(int & n)
    {
        n++;
    }
};

int main()
{
    std::vector<int> v = {4, 7, 13, 151, 2, 5, 74, 23};

    auto lam = [](int & n){ n++; };

    std::for_each(v.begin(), v.end(), Class());

    for (auto &&i : v)
        std::cout << i << " ";

    // std::for_each_n(v.begin(), 2, [](int & n){ return 3 * n; });
    // works with C++17

    return 0;
}