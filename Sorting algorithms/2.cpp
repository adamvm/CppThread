#include <iostream>

int main()
{
    int v[] = {1, 4, 7};

    for (auto &&i : v)
    {
        std::cout << i << " ";
    }
    
    std::cout << std::endl;

    swap(v[0], v[2]);



    return 0;
}