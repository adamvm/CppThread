#include <iostream>
#include <memory>

int main()
{
    std::unique_ptr<int> p = std::make_unique<int>(10);
    std::cout << p.get() << std::endl;
    std::unique_ptr<int> pp = std::move(p);
    std::cout << p.get() << std::endl;
    std::cout << pp.get() << std::endl;

    return 0;
}