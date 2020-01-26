#include <iostream>
#include <vector>
#include <map>

int main()
{
    std::map<std::string, std::vector<int>> m;

    m["Bob"].push_back(15);
    m["Bob"].push_back(35);
    m["Robert"].push_back(45);
    m["Robert"].push_back(90);

    for (auto &&i : m)
    {
        std::cout << i.first << " : ";
        std::vector<int> v = i.second;

        for (auto &&j : v)
        {
            std::cout << j << " ";
        }

        std::cout << std::endl;    
    }
    
    return 0;
}