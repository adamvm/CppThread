#include <iostream>
#include <set>
#include <algorithm>

int main()
{
    std::set<int> A = {1, 4, 5, 7};

    for (auto &&i : A)
    {
        std::cout << i << " ";
    }
    
    return 0;
}