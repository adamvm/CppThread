#include <algorithm>
#include <iostream>
#include <map>

int main()
{
    std::string input1 = "abecadlo";
    int length = input1.size();
    std::map<char, int> i1;

    for (size_t i = 0; i < length; i++)
    {
        auto search1 = i1.find(input1[i]);
        if (search1 != i1.end())
            search1->second++;
        else
            i1.insert({input1[i], 1});
    }

        for (auto &&i : i1)
    {
        std::cout << "First: " << i.first << ", second: " << i.second << std::endl;
    }
    
    return 0;
}
