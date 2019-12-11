#include <iostream>
#include <algorithm>
#include <cstring>

int main()
{
    char str[] = "dupolapek";

    for (int i = 0; i != sizeof(str); i++)
        putchar(toupper(str[i]));
    
    return 0;
}