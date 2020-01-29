#include <iostream>
#include <vector>
#include <algorithm>

struct Class
{
    std::string name;
    int age;

    Class(std::string name, int age) : name(name), age(age) { }
};

int main()
{
    std::vector<Class> v;

    v.emplace_back(Class("Aga", 35));
    v.emplace_back(Class("Marek", 47));
    v.emplace_back(Class("Bogdan", 16));

    std::cout << std::all_of(v.begin(), v.end(), [](const Class & person){ return person.age > 16; }) << std::endl;
    std::cout << std::none_of(v.begin(), v.end(), [](const Class & person){ return person.name == "Pawel"; });

    return 0;
}