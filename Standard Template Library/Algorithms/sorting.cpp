#include <iostream>
#include <deque>
#include <algorithm>
#include "time.h"

int gen()
{
    return std::rand() % 8;
}



int main()
{
    srand(time(NULL));
    std::deque<int> d;

    std::generate_n(std::back_inserter(d), 14, gen);

    std::sort(d.begin(), d.end());

    for (const auto &el : d)
        std::cout << el << " ";

    std::cout << std::endl;

    auto last = std::unique(d.begin(), d.end());

    d.erase(last, d.end());

    for (const auto &el : d)
            std::cout << el << " ";

    std::cout << std::endl;

    std::rotate(d.begin(), d.begin() + (d.size()/2), d.end());

    for (const auto &el : d)
        std::cout << el << " ";

    return 0;
}