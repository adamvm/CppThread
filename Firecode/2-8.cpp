#include <iostream>
#include <map>

char first_non_repeating(std::string str);

int main()
{

    std::cout << first_non_repeating("abcdcd");
    
    return 0;
}

char first_non_repeating(std::string str)
{
    std::map<char, int> m;
    int n = str.size();
    
    for (size_t i = 0; i < n; i++)
    {
        auto search = m.find(str[i]);
        if (search != m.end())
            search->second++;
        else
            m.insert({str[i], 1});
    }

    for (const auto & el : m)
    {
        if (el.second == 1)
            return el.first;
    }
    
    return '0';
}