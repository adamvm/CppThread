#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string);

int main()
{
    cout << isPalindrome("aaa");

    return 0;
}

bool isPalindrome(string word)
{
    string::iterator end = word.end()-1;
    // because end() return past-the-end element

    for (string::iterator it = word.begin(); it < end; it++, end--)
        if (*it != *end)
            return false;
    return true;
}

/*
    string word = "ababa";
    
    //string::iterator it = word.begin();

    cout << *(word.begin());
    cout << endl << *(word.end());
*/

/* INNE OPCJE

string input;

cout << "Please enter a string: ";
cin >> input;

if (input == string(input.rbegin(), input.rend())) {
    cout << input << " is a palindrome";
}


*/

/*

#include <string>
#include <algorithm>
#include <iostream>
int main()
{
    std::string s;
    std::cin >> s;
    if( equal(s.begin(), s.begin() + s.size()/2, s.rbegin()) )
        std::cout << "is a palindrome.\n";
    else
        std::cout << "is NOT a palindrome.\n";
}


*/