#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> v {1, 3, 5};

    v.erase(*(v.begin+1));

    for (auto &&i : v)
    {
        std::cout << i << " ";
    }
    
    



    return 0;
}