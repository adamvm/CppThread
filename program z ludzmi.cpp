#include <iostream>
#include <vector>
#include <algorithm>

/*
System budowania (preferowany CMake, ewentualnie Makefile)
Przechowywanie rekordów o strukturze: Imię, nazwisko, nr indeksu.
Wpisywanie nowych danych
Sortowanie po numerze indeksu
Usuwanie po numerze indeksu
*/

using namespace std;

struct Person
{
public:
    string firstName;
    string lastName;
    int number;

public:
    Person(string firstName, string lastName, int number): firstName(firstName), lastName(lastName), number(number) {}

  

};

int main()
{
    vector<Person> wektor;

    wektor.push_back(Person("Bob", "Kowalski", 231234));
    wektor.push_back(Person("Robert", "Warzycha", 110231));
    wektor.push_back(Person("Ania", "Kawalec", 135132));

    for (vector<Person>::iterator it = wektor.begin(); it != wektor.end(); it++)
        cout << it->firstName << " " << it->lastName << " " << it -> number << endl;

    sort(wektor.begin(),wektor.end(),[](const Person& lhs, const Person& rhs) {
      return lhs.firstName < rhs.firstName;
   });

    for (vector<Person>::iterator it = wektor.begin(); it != wektor.end(); it++)
        cout << it->firstName << " " << it->lastName << " " << it -> number << endl;

    return 0;
}