#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> v = {2, 4, 4, 7, 4, 12};

    auto it = std::find(v.begin(), v.end(), 8);

    std::cout << *it << std::endl;



    auto it2 = std::find_if(v.begin(), v.end(), [](const int & a){ return a == 4;});

    while (it2)
    {
        std::cout << *it << " ";
        it2 = std::find_if(it2, v.end(), [](const int & a){ return a == 4;});
    }

    return 0;
}