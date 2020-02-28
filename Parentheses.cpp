/*
Write a program to determine if the the parentheses (), the brackets [], and the braces {}, in a string are balanced.

For example:

{{)(}} is not balanced because ) comes before (

({)} is not balanced because ) is not balanced between {} and similarly the { is not balanced between ()

[({})] is balanced {}([]) is balanced {()}[[{}]] is balanced
*/

#include <iostream>
#include <map>

bool isBalanced(std::string s);

int main()
{
    std::cout << isBalanced("{{)(}}") << std::endl;

    std::cout << isBalanced("({)}") << std::endl;
    
    std::cout << isBalanced("[({})]") << std::endl;

    return 0;
}

bool isBalanced(std::string s) {
    if (s[0] == ')' or s[0] == '}' or s[0] == ']')
        return false;

    std::map<char, int> charCounter = {
            {'(', 0},
            {')', 0},
            {'{', 0},
            {'}', 0},
            {'[', 0},
            {']', 0}
    };

    for (auto letter : s) {
        if (charCounter.find(letter) != charCounter.end()) {
            charCounter[letter] += 1;

            if (charCounter['{'] < charCounter['}'])
                return false;
            if (charCounter['['] < charCounter[']'])
                return false;
            if (charCounter['('] < charCounter[')'])
                return false;
        }
    }


    return true;
}