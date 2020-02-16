#include <iostream>
#include <thread>
#include <vector>
#include <algorithm>
#include <numeric>

int main()
{   
    std::vector<int> v(10000);
    std::generate(begin(v), end(v), [i{0}]() mutable { return i++; });

    // mutable musi byc bo lambda musi wiedziec ze moze to

    std::cout << std::accumulate(begin(v), end(v), 0) << std::endl;
    // nie trzeba std bo zagniezadzanie namespacow?

    return 0;
}