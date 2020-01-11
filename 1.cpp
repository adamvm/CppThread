#include <iostream>

class Parent
{
public:
    int name = 1;
};

class Child : public Parent
{
public:
    int name;

};


int main()
{
    Child child1;
    child1.name = 2;

    std::cout << child1.Parent::name << " " << child1.name;


    return 0;
}