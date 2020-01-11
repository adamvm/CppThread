#include <iostream>

class A
{
public:
    A() { std::cout << "Constructor A\n"; }
    ~A() { std::cout << "Destructor A\n"; }
};

class B : public A
{
public:
    B() { std::cout << "Constructor B\n"; }
    ~B() { std::cout << "Destructor B\n"; }
};

class C : public B
{
public:
    C() { std::cout << "Constructor C\n"; }
    ~C() { std::cout << "Destructor C\n"; }
};


int main()
{
    C obj;
 
    return 0;
}