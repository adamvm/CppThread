/*
Given two strings - input1 and input2, determine if they are isomorphic.
Two strings are isomorphic if the letters in one string can be remapped to get the second string.
Remapping a letter means replacing all occurrences of it with another letter. The ordering of the letters remains unchanged.
You can also think of isomorphism as it is used in chemistry - i.e. having the same form or overall shape.
Target linear time and space complexity with your solution.
*/

#include <algorithm>
#include <iostream>
#include <unordered_map>

bool is_isomorphic(std::string input1, std::string input2);

int main()
{
    std::cout << is_isomorphic("css", "dll") << std::endl; // true
    std::cout << is_isomorphic("css", "dle") << std::endl; // false
    std::cout << is_isomorphic("abcabc", "xyzxyz") << std::endl; // true
    std::cout << is_isomorphic("abcabc", "xbexyz") << std::endl; // false

    return 0;
}

bool is_isomorphic(std::string input1, std::string input2)
{
    if (input1.size() != input2.size())
        return false;
        
    size_t length = input1.size();
    
    std::unordered_map<char, int> s1;
    std::unordered_map<char, int> s2;
    
    for (size_t i = 0; i < length; i++)
    {
        auto search1 = s1.find(input1[i]);
        auto search2 = s2.find(input2[i]);
        
        if (search1 != s1.end())
            search1->second++;
        else
            s1.insert({input1[i], 1});
        if (search2 != s2.end())
            search2->second++;
        else
            s2.insert({input2[i], 1});
    }
    
    auto it2 = s2.begin();
    
    for (auto it1 = s1.begin(); it1 != s1.end(); it1++, it2++)
    {
        if (it1->second != it2->second)
            return false;
    }
    
    return true;
}