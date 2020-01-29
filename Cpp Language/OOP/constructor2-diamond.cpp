#include <iostream>

class A
{
public:
    A() { std::cout << "Constructor A\n"; }
    ~A() { std::cout << "Destructor A\n"; }
    void check() { std::cout << "Hello!\n"; }
};

class B : virtual public A
{
public:
    B() { std::cout << "Constructor B\n"; }
    ~B() { std::cout << "Destructor B\n"; }
};

class C : virtual public A
{
public:
    C() { std::cout << "Constructor C\n"; }
    ~C() { std::cout << "Destructor C\n"; }
};

class D : public C, public B
{
public:
    D() { std::cout << "Constructor D\n"; }
    ~D() { std::cout << "Destructor D\n"; }
};


int main()
{
    D obj;
    obj.check();
 
    return 0;
}