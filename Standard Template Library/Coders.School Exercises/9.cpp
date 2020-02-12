/*
Write function is_palindrome that will check if given std::string is a palindrome or not. Use
std::mismatch().
*/

#include <iostream>
#include <algorithm>

int main()
{
    std::string s = "madam";

    auto it = std::mismatch(s.begin(), s.end(), s.rbegin());

    if (*it.first)    
        std::cout << "It is not a palindrome\n";
    else
        std::cout << "It is a palindrome\n";    

    return 0;
}