#include <iostream>
#include <set>
#include <vector>


int main()
{
    std::set<int> set1 {1, 3, 5, 7, 7};

    std::vector<int> vec1 {3, 5, 5, 88, 1};

    std::set<int> set2;

    for (auto it = vec1.begin(); it != vec1.end(); it++)
        set2.insert(*it);

    for (auto const & al : set2)
        std::cout << al << std::endl;

    auto search = set2.find(85);

    if (search != set2.end())
        std::cout << std::endl << "Found!";
    else
        std::cout << std::endl << "Not found!";

    return 0;
}