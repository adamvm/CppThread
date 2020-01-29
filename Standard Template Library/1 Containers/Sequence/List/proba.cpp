#include <iostream>
#include <vector>
#include <numeric>
#include <iterator>


int main()
{
    std::vector<int> v(1000000);

    std::iota(v.begin(), v.end(), 1);


    std::vector<int>::iterator it = v.begin();
    std::advance(it, 499999);

    std::cout << *it;

    return 0;
}