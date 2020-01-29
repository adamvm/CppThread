#include <iostream>
#include <unordered_map>

int main()
{
    std::unordered_map<char, int> m;

    m.insert({'b', 1});
    m.insert({'c', 2});
    m.insert({'d', 3});
    m.insert({'e', 4});
                
    for (auto &&i : m)
    {
        std::cout << i.first << " " << i.second << std::endl;
    }
    
    for (const auto & el : m)
    {
        if (el.second == 4)
            std::cout << el.first;
        break;
    }
    
    return 0;
}