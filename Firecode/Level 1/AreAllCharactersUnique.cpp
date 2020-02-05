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

bool are_all_characters_unique(std::string str);

int main()
{

    std::cout << are_all_characters_unique("123!@");

    return 0;
}

bool are_all_characters_unique(std::string str)
{
    std::sort(str.begin(), str.end());                   
    std::string copy_str = str;
    
    auto it = std::unique(str.begin(), str.end());
    str.erase(it, str.end());
    
    std::cout << "str = " << str << ", copy_str = " << copy_str << std::endl;

    if (copy_str == str)
        return true;
    
    return false;
}