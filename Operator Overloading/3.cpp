#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
    std::vector<int> v {1, 1, 2, 2, 6, 9, 9, 15};
    int Q, temp;

    std::vector<int> v2 {1, 4, 9, 15};

    for (const auto & i : v2)
    {
        temp = i;
        auto it = std::find(v.begin(), v.end(), temp);
        if (it != v.end())
        {
            std::cout << "Yes " << v[std::distance(v.begin(), it) + 1] << std::endl;
        }
        else
        {
            auto at = std::lower_bound(v.begin(), v.end(), temp);
            std::cout << "No " << std::distance(v.begin(), at) + 1 << std::endl;
        }
    }

    return 0;
}
