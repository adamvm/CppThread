#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Person {
public:
    string name;
    int number;
public:
    Person(string name, int number) : name(name), number(number) { }
    ~Person() {}
};

int main()
{
    vector<Person> wektor;

    wektor.push_back(Person("Pawel", 555));
    wektor.push_back(Person("Robert", 555));
    wektor.push_back(Person("Bobek", 123));

    // for (vector<Person>::iterator it = wektor.begin(); it != wektor.end(); it++)
    //     cout << it->name << " " << it->number << endl;

    auto lam = [](const Person & obj){ return obj.number == 555;};

    auto it2 = wektor.begin();
    while ((it2 = find_if(it2, wektor.end(), lam)) != wektor.end())
    {
        std::cout << it2->name << std::endl;
        it2++;
    }

    std::cout << it2->name << " " << it2->number << std::endl;

    return 0;
}