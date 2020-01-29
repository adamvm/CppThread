#include <iostream>

using namespace std;

class Animal
{
public:
    void speak() { cout << "Grrrr" << endl; };
};

class Cat: public Animal
{
public:
//    void speak() { cout << "Miauu" << endl; };
    void jump() { cout << "Cat jumping" << endl; };

};

class Tiger: public Cat
{
public:
    void attack() { cout << "Attacking!" << endl; };

};

int main()
{
    Animal a;
    a.speak();

    Cat b;
    b.speak();

    Tiger c;
    c.speak();
    c.jump();
    c.attack();

    return 0;
}