#include <map>
#include <iostream>

int main()
{
    std::map<int, int> a = {{1, 2}, {2, 4}};

    std::map<int, int> b = {{1, 2}, {4, 2}};

    if (a == b)
        std::cout << "Yes!";
    else
        std::cout << "No!";


    return 0;
}