#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
#include <iterator>

int main()
{
    std::array<int, 9> a {1, 1, 5, 7, 1, 6, 7, 123, 6};
    
    std::vector<int> v(a.begin(), a.end());

    for (auto const &el : v)
        std::cout << el << " ";

    std::cout << std::endl;

    std::sort(v.begin(), v.end());

    std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, " "));

    std::unique(v.begin(), v.end());

    v.shrink_to_fit();

        for (auto const &el : v)
        std::cout << el << " ";

    // std::cout << std::endl;
    // std::cout << std::endl;

    // std::cout << "Po zmianach: ";
    // std::copy(v.begin(), v.end(), std::ostream_iterator<int>(std::cout, " "));


    return 0;
}