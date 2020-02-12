#include <iostream>
#include <algorithm>
#include <vector>


int main()
{
    std::vector<int> v {2, 4, 6, 8, 10};

    std::transform(v.begin(), v.end(), v.begin(), [](int &a){ return a*a; });

    std::for_each(v.begin(), v.end(), [](int &a){ std::cout << a << " "; });

    return 0;
}