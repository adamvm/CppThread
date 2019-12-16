#include <iostream>

template <typename T>  // or "template <typename T>"
void print(T parameter);

int main()
{
    print<int>(5);  // <int> is optional altough it makes difference when overloading functions
    print("Bobby");

    return 0;
}

template <typename T>  // must be repeated here as well
void print(T parameter)
{
    std::cout << parameter << std::endl;
}