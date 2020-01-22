#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

int main()
{
    std::map<int, int> m;

    m.insert({1, 2});
    m.insert({2, 4});
        
    std::vector<int> v = {4, 7, 13, 151, 2, 5, 74, 23, 7};

    std::cout << std::count(v.begin(), v.end(), 7);

    return 0;
}