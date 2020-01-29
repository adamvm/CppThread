#include <iostream>
#include <cstring>

int main()
{
    char text[] = "Alexandro";

    for (int i = 0; i <= strlen(text)/2; i++)
    {
        char tmp = text[i];
        text[i] = text[strlen(text)-1-i];
        text[strlen(text)-1-i] = tmp;
    }

    for (auto const &el : text)
        std::cout << el;

    return 0;
}