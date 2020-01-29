#include <iostream>
#include <deque>

/*
Double-ended queue
Podobna do wektora + mozna wrzucac elementy na poczatek
NIE MA FUNKCJI CAPACITY
wstawanie na poczatek i koniec jest w czasie stały O(1)*
z giwazdka bo nastepuje realokacja
PAMIEC NIECIAGLA, nie ma gwarancji ze bedzie w jednym kawalku
WEKTOR jest w jednym kawalku dlatego jest CASHE-friendly


deque jest oparty o tablice tablic (dodatkowa tablica trzyma miejsca do dodatkowych
tablic)

DOMYSLNY KONTENER JESLI CHODZI O ADAPTERY
*/

using namespace std;

int main()
{
    deque<int> d;

    d.push_back(5);
    d.push_back(523);
    d.push_back(43);
    d.push_front(1);
    d.emplace_front(0);


    for (const auto &element : d)
    {
        cout << element << " ";
    }
    


    return 0;
}