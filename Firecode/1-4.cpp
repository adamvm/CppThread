#include <iostream>

bool is_string_palindrome(std::string str)
{
    if (str.size() == 0)
        return true;

    auto at = str.end() - 1;

    for (auto it = str.begin(); it != at; it++, at--)
    {
        if (*it != *at)
            return false;
    }

    return true;
}

int main()
{
    std::cout << "Madam is a palindrome: " << is_string_palindrome("");

    return 0;
}