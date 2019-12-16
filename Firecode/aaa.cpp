#include <iostream>
#include <algorithm>

int main()
{
    std::string text = "Warsaw";

    reverse(text.begin(), text.end());

    std::cout << text;

    return 0;
}