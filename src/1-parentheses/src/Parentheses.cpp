#include <algorithm>
#include <iostream>
#include <map>
#include "Parentheses.hpp"

bool Parentheses::isBalanced(std::string s)
{   
    size_t n = s.size();
    std::array<std::string, 6> notAllowed = {"(}", "[}", "(]", "{]", "{)", "[)"};
    std::map<char, int> m;

    if (n == 0)
        return true;
    
    if (n % 2 != 0)
        return false;

    bool containsNotAllowed = std::any_of(notAllowed.begin(), notAllowed.end(), [&](const std::string & obj){
        auto found = s.find(obj);
        return (found != std::string::npos);
    });

    if (containsNotAllowed)
        return false;

    std::for_each(s.begin(), s.end(), [&](const char & obj){
        auto search = m.find(obj);
        if (search != m.end())
            search->second++;
        else
            m.insert({obj, 1});
    });

    auto quasiEnd = m.end();
    std::advance(quasiEnd, -2);

    for (auto it = m.begin(); it != quasiEnd; it++)
    {
        auto tempIt = it;
        std::advance(tempIt, 1);
        if (it->second != tempIt->second)
            return false;
        it++;
    }
    
    return true;
}