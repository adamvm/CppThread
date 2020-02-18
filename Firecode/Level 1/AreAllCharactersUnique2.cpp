/*
Write a function that takes an input string - str and returns true if all the characters in the string are unique,
false if there is even a single repeated character. For an empty string, return true.
Examples:

are_all_characters_unique("abcde") -> true
are_all_characters_unique("aa") -> false
are_all_characters_unique("") -> true
*/

#include <iostream>
#include <algorithm>
#include <unordered_set>

bool are_all_characters_unique(std::string str);

int main()
{
    std::cout << are_all_characters_unique("1123!@") << std::endl;

    return 0;
}

bool are_all_characters_unique(std::string str)
{
    size_t size = str.size();
    
    if (size == 0)
        return true;
        
    std::unordered_set<char> m;

    for (size_t i = 0; i < size; i++)
    {
        auto search = m.find(str[i]);
        if (search != m.end())
            return false;
        else m.insert(str[i]);
    }
    
    return true;
}