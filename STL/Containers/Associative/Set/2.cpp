#include <iostream>
#include <unordered_set>

int main()
{
    std::unordered_set<int> s;

    s.insert(5);
    s.insert(2);
    s.insert(1);
    s.insert(6);
    s.insert(11);

    // for (auto &&i : s)
    // {
    //     std::cout << i << " ";
    // }
    
    if (s.count(55))
        std::cout << "Found!";
    else
        std::cout << "Not found!";


    return 0;
}