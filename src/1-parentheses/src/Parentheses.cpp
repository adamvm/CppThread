#include <algorithm>
#include <map>
#include <iterator>
#include "Parentheses.hpp"

bool Parentheses::isBalanced(std::string s)
{
    size_t n = s.size();
    std::string unallowed[] = {"(}", "[}", "(]", "(]", "{]", "{)", "[)"};
    std::map<char, int> m {};

    if (n == 0)
        return true;
    
    if (n % 2 != 0)
        return false;

    for (int i = 0; i < n - 1; ++i)
    {
        std::string temp = s.substr(i, 2);

        auto search1 = std::any_of(unallowed, unallowed + 6, [&](const std::string & obj){ return obj == temp; });
        if (search1 != false)
            return false;
        
        auto search2 = m.find(s[i]);
        if (search2 != m.end())
            search2->second++;
        else
            m.insert({s[i], 1});
    }

    auto sample = 2;
    
    if (std::all_of(m.begin(), m.end(), [&](std::pair<char, int> & obj){
        obj.second == sample; }))
        return true;
    else
        return false;    
    
    return false;
}