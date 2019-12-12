/*
Write a function that takes an input string - str and returns true if all the characters
in the string are unique, false if there is even a single repeated character.
*/

#include <iostream>
#include <algorithm>
#include <map>

bool are_all_characters_unique(std::string str);

int main()
{
    std::cout << are_all_characters_unique("Display");

    return 0;
}

bool are_all_characters_unique(std::string str)
{
    std::map<char, int> map;

    for (size_t i = 0; i < str.size(); i++)
    {
        auto search = map.find(str[i]);
        if (search != map.end())
        {
            search->second++;
        }
        else
        {
            map.emplace(std::pair<char, int>(str[i], 1));
        }
    }

    for (auto it = map.begin(); it != map.end(); it++)
    {
        if (it->second > 1)
            return false;
    }

    return true;
}