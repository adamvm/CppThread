#include <list>
#include <iostream>
#include <algorithm>
#include <chrono>
#include <numeric>
#include <vector>

int main()
{
    std::list<int> list1(1000000); // alternatively std::vector

    auto start = std::chrono::high_resolution_clock::now();

    std::iota(list1.begin(), list1.end(), 1);

    auto stop = std::chrono::high_resolution_clock::now();

    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop-start);

    std::cout << "Execution time: " << duration.count() << " ms" << std::endl;

    auto it = list1.begin();

    std::advance(it, 499999);
    std::cout << "Element numer 500000 przechowuje liczbe: " << *it;

    return 0;
}