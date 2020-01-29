#include <iostream>
#include <vector>
#include <time.h>
#include <algorithm>

int main()
{
    srand(time(NULL));

    std::vector<int> v;

    for (int i = 0; i < 100; i++)
    {
        int temp = rand()%100;
        v.emplace_back(temp);
        std::cout << v[i] << " ";
    }
    
    std::cout << std::endl << std::all_of(v.begin(), v.end(), [](const int & x){ return x < 90; }) << std::endl;
    std::cout << std::any_of(v.begin(), v.end(), [](const int & x){ return x == 14; }) << std::endl;
    std::cout << std::none_of(v.begin(), v.end(), [](const int & x){ return x > 95; });

    return 0;
}