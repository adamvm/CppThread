#include <iostream>
#include <array>
#include <algorithm>

template <size_t L>
void printArray(std::array<double, L> &a);

struct sortAbs
{
    int operator() (std::array<double, L> & a)
};

int main()
{
    std::array<double, 6> a = {5.0, 4.0, -1.4, 7.9, -8.22, 0.4};

    std::sort(a.begin(), a.end());
    printArray(a);




    return 0;
}

template <size_t L>
void printArray(std::array<double, L> &a)
{
    for (const auto &i : a)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

/*

1. Create std::array of 6 doubles with the following elements:
{5.0, 4.0, -1.4, 7.9, -8.22, 0.4}
2. Sort elements of the array using std::sort and provide a functor, that sorts by absolute values
(std::abs)
3. Change functor object to a lambda function.

*/