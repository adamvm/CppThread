#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> v {3, 5, 4, 4, 7, 3, 100};
//    std::sort(v.begin(), v.end());

    for (const auto &el : v)
        std::cout << el << " ";

std::cout << std::endl;
    auto new_end = std::unique(v.begin(), v.end());



    v.erase(new_end, v.end());

    for (const auto &el : v)
        std::cout << el << " ";

    return 0;

}