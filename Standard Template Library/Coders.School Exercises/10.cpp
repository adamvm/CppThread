/*
1. Use iterators to initialize a vector with some values (some should occur more than once).
2. Sort the container.
3. Print the container using iterator + std::copy.
4. Make the container unique.
5. Print the container.
6. Reverse the container.
7. Print the container.
*/

#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

void showVector(std::vector<int> v);

int main()
{
    std::vector<int> v1 {1, 5, 1, 3, 5, 6, 7, 7, 3, 4, 5, 11};
    std::vector<int> v2(v1.begin(), v1.end());

    std::sort(v2.begin(), v2.end());
    showVector(v2);

    auto it = std::unique(v2.begin(), v2.end());
    v2.erase(it, v2.end());
    showVector(v2);

    std::reverse(v2.begin(), v2.end());
    showVector(v2);

    return 0;
}

void showVector(std::vector<int> v)
{
    std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;
}