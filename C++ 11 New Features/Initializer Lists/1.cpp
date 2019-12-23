#include <iostream>

/*
Usage of the initializer list is a must for:

* non static or const data members
* reference members
*/


class Person
{
public:
    std::string name;
    int id;

    Person(std::string name, int id) : name(name), id(id) {};
};

int main()
{
    Person person1("Bob", 12);

    std::cout << person1.name;

    return 0;
}