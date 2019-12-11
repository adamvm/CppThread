#include <iostream>
#include <cstring>

int main()
{
     char str1[] = "Warsaw";
     char str2[] = "Waarsaw";

     if (strcmp(str1, str2) == 0)
          std::cout << "Both strings are equal.\n";
     if (strcmp(str1, str2) > 0)
          std::cout << "String 1 is longer.\n";
     if (strcmp(str1, str2) < 0)
          std::cout << "String 2 is longer.\n";

     // strcmp compares two strings lexicographically

     return 0;
}