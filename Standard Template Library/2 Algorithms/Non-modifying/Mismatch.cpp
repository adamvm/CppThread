#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> v1 = {5, 15, 45, 60, 90};
    std::vector<int> v2 = {5, 15, 65, 70, 80};

    auto mispair1 = mismatch(v1.begin(), v1.end(), v2.begin());

    std::cout << *mispair1.first << " " << *mispair1.second << std::endl;
    // returns 45 65

    auto mispair2 = mismatch(v1.begin(), v1.end(), v2.begin(), [](int & a, int & b){ return a >= b; });

    std::cout << *mispair2.first << " " << *mispair2.second;
    // returns 45 65

    return 0;
}