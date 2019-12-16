#include <iostream>

template <class T>  // or "template <typename T>"
class Test
{
private:
    T obj;

public:
    Test(T obj) { this->obj = obj; };
    void print() { std::cout << obj; };
};

int main()
{
    Test<int> object1(151);
    object1.print();

    Test<std::string> object2("Bobby");
    object2.print();

    return 0;
}