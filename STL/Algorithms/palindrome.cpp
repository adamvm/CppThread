#include <iostream>
#include <algorithm>
#include <map>
#include <string>

bool palindrom(const std::string &s)
{
    auto iterators = std::mismatch(s.begin(), s.end(), s.rbegin());
    return iterators.first == s.end() && iterators.second == s.rend();
}


int main()
{
    std::cout << palindrom("kadyak");


    return 0;
}