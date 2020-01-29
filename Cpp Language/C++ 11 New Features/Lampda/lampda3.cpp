#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int counter = 0;

    std::vector<int> v {23, 213, 231, 323, 513, 16, 53, 513, 312, 123};

    for (auto &&i : v)
    {
        counter++;
    }

    std::cout << "Counter: " << counter << std::endl;
    
    std::for_each(v.begin(), v.end(), [=](int &n){ n + counter; });

for (auto &&i : v)
{
    std::cout << i << std::endl;
}


    return 0;
}