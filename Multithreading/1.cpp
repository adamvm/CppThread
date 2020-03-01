#include <iostream>
#include <new>

int main()
{
    std::cout << std::alignof(std::max_align_t);

    return 0;
}