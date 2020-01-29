#include <iostream>
#include <cassert>

int main()
{
    int err = 1;

    while (1)
    {
        err++;
        std::cout << "Passed!\n";
        assert(err < 7);
    }

    return 0;
}