/*
A palindrome is a string or sequence of characters that reads the same backward as forward. For example, "MADAM" is a palindrome.
Write a function that takes in an input string: str and returns true if the input string is a palindrome, false otherwise.
An empty string is considered a palindrome.
You also need to account for the space character - i.e. "race car" should return false as read backward it is "rac ecar".

Examples:

is_string_palindrome("madam") -> true
is_string_palindrome("aabb") -> false
is_string_palindrome("") -> true
*/

#include <iostream>
#include <algorithm>

bool is_string_palindrome(std::string str);

int main()
{
    std::cout << is_string_palindrome("madam") << std::endl;
    std::cout << is_string_palindrome("aabb") << std::endl;
    std::cout << is_string_palindrome("") << std::endl;

    return 0;
}

bool is_string_palindrome(std::string str)
{
    std::string s = str;
    reverse(begin(s), end(s));
    return (s == str);
}