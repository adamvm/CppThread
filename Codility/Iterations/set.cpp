#include <iostream>
#include <set>
#include <algorithm>

int main()
{
    std::set<int> A = {1, 4, 5, 7};

    for (auto &&i : A)
    {
        auto search = std::find(A.begin(), A.end(), i);
        if (search != A.end())
            continue;
        else
            std::cout << i << " ";        
    }
    
    return 0;
}