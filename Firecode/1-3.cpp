#include <iostream>

int fib(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fib(n-1) + fib(n-2);
}

int main()
{
    std::cout << "Fib(11) = " << fib(11);

    return 0;
}