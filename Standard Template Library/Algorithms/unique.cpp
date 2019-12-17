#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> v {3, 5, 4, 4, 7, 3, 100};
    std::sort(v.begin(), v.end());

    std::copy(v.begin(), v.end(), std::vector<int>::istrea)

    auto new_end = unique(v.begin(), v.end());



    v.resize(std::distance(v.begin(), new_end));

    for (const auto &el : v)
        std::cout << el << " ";

    return 0;

}