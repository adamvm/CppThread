#include <iostream>
#include <string>
#include <iterator>

int main()
{
    std::string s = "alibaba";

    for (std::string::reverse_iterator it = s.rbegin(); it != s.rend(); it++)
    {
        std::cout << *it;
    }
    


    return 0;
}