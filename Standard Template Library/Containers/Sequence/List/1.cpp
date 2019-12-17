#include <iostream>
#include <list>

/*
Zapewnia dostęp dwukierunkowy (nie ma dostepu losowego (random access))
czyli np chcemy v[4]

zeby dostac sie do jakiegos elementu trzeba wziac element pierwszy lub ostatni
i za pomoca iteratorow isc do przodu albo do tylu

dostep do dowolnego elementu jest liniowy

lista jest zaimplementowana z dwoma wskaznikami

kazda lista ma head (poczatek) i tail (koniec)

kolejne elementy listy sa lokowalne dowolnie w pamieci

to ze nie sa elementy kolo siebie moze wydluzyc dostep
do elementu (moze nie byc w pamieci CACHE)

*/


using namespace std;

int main()
{
    list<int> lista;

    lista.emplace_front(2321);
    lista.emplace_front(156);
    lista.emplace_back(423);
    lista.emplace_back(15734);
    lista.emplace_back(15734);

    for (const auto &element : lista)
        cout << element << " ";

    cout << endl;

    lista.sort();
    lista.unique();
    lista.reverse();

    for (const auto &element : lista)
    cout << element << " ";


    return 0;
}