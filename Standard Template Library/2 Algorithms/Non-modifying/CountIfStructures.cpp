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
    v.emplace_back(Class("Pawel", 47));
    v.emplace_back(Class("Mateusz", 47));
    v.emplace_back(Class("Agata", 47));

    int a = std::count_if(v.begin(), v.end(), [](const Class & person){ return person.age == 47; });

    std::cout << a;

    return 0;
}