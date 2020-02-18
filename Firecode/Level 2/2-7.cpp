#include <iostream>
#include <algorithm>

int main()
{
    std::string t1 = "pawel";
    std::string t2 = "lwepa";

    std::sort(t1.begin(), t1.end());
    std::sort(t2.begin(), t2.end());

    if (t1 == t2)
        std::cout << "YES";
    else
        std::cout << "NO";

    return 0;
}