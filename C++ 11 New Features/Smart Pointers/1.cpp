#include <iostream>
#include <memory>

class A {

public:

    static int counter;
    int number;

    A() {
        number = A::counter+1;
        A::counter++;
        std::cout << "Konstruktor " << number << std::endl;
    }

    ~A() {
        std::cout << "Destruktor " << number << std::endl;
    }
};

int A::counter = 0;

int main()
{
    std::unique_ptr<A> p = std::make_unique<A>();
    p = std::make_unique<A>();
}