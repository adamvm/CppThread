#include <iostream>
#include <algorithm>
#include <map>

bool are_all_characters_unique(std::string str);

int main()
{
    std::cout << are_all_characters_unique("DisplayD");

    return 0;
}

bool are_all_characters_unique(std::string str)
{
    std::map<char, int> letters;

    for (size_t i = 0; i < str.size(); i++)
    {
        letters.emplace(std::make_pair(char(str[i]), int(1)));
        std::cout << str[i] << std::endl;
    }


    for (std::string::iterator it = str.begin(); it != str.end(); it++)
    {
        if (letters.find(*it) != letters.end())
            return false;
    }

    return true;
}