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
    wektor.push_back(Person("Bobek", 123));

    for (vector<Person>::iterator it = wektor.begin(); it != wektor.end(); it++)
        cout << it->name << " " << it->number << endl;

    auto it2 = find_if(wektor.begin(); wektor.end(); this->name == 555);


    return 0;
}