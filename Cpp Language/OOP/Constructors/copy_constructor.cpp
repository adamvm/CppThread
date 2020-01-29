#include <iostream>

class Animal
{
private:
    std::string name;

public:
    Animal() { std::cout << "Animal created!" << std::endl; }
    Animal(const Animal & other) { std::cout << "Animal created by copying..." << std::endl; }
    void setName(std::string name) { this->name = name; }
    void speak() const { std::cout << "My name is: " << name << std::endl; }
};

int main()
{
    Animal animal1;

    animal1.setName("Freddy");

    Animal animal2 = animal1;
    animal2.speak();
    animal2.setName("Bobby");

    animal1.speak();
    animal2.speak();

    return 0;
}