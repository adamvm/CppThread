#include <iostream>
#include <map>
#include <algorithm>

template <size_t N>
void showArray(std::array<int, N> array);

int main()
{
    std::array<int, 10> array1;

    std::fill(array1.begin(), array1.end(), 5);
    array1[3] = 3;

    std::array<int, array1.size()> array2 {};

    std::swap(array1, array2);

    showArray(array1);
    showArray(array2);

    return 0;
}

template <size_t N>
void showArray(std::array<int, N> array)
{
    for (auto const &i : array)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}