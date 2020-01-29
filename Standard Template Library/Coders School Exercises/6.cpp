#include <iostream>
#include <forward_list>
#include <algorithm>

int main()
{
    std::forward_list<int> l {1, 5, 86, 35, 111, 435, 555};

    auto it = l.begin(); // alternatively begin(l)
    auto at = l.end(); // alternatively end(l)

    int size = 0;

    for ( ; it != at; it++)
    {
        size++;
    }

    std::cout << size << std::endl;

    auto it2 = l.begin();
    std::advance(it2, 4);

    std::cout << *it2 << std::endl;

    std::cout << "Distance from l.begin() to it2: " << std::distance(l.begin(), it2);

    return 0;
}