#include <iostream>

bool is_isomorphic(std::string input1, std::string input2);

int main()
{
    std::cout << is_isomorphic("css", "dll") << std::endl;
    std::cout << is_isomorphic("css", "dle") << std::endl;
    std::cout << is_isomorphic("abcabc", "xyzxyz") << std::endl;
    std::cout << is_isomorphic("abcabc", "xbexyz") << std::endl;

    return 0;
}

bool is_isomorphic(std::string input1, std::string input2)
{

    const size_t length = input1.size();
    for (size_t i = 0; i < length - 1; i++)
    {
        if ((input1[i] != input1[i+1] && input2[i] != input2[i+1]) || (input1[i] == input1[i+1] && input2[i] == input2[i+1]))
        { }
        else
            return false;
    }
    return true;
}