#include <iostream>
#include <vector>

void print(int a)
{
    std::cout << a << " ";
}

void forEach(const std::vector<int> & values, void(*func)(int))
{
    for (auto el : values)
        func(el);
}

int main()
{
    std::vector<int> values = {1, 5, 4, 2, 3};

    auto func = print;

    forEach(values, print);

    std::cout << std::endl;

    forEach(values,[](int el){ std::cout << el << " "; }); // option with lambda

    forEach(values,[](int el){ print(el); }); // option with lambda

    return 0;
}