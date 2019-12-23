#include <iostream>
#include <map>

using namespace std;

/*
begin() – zwraca iterator pierwszego elementu
end()   - zwraca iterator "miejsca za ostatnim elementem
size()  - zwraca liczbe elementow
max_size() - zwraca maksymalna liczbe elementow jaka moze pomiescic
empty() - zwraca true jesli pusty
pair insert(keyvalue, mapvalue) - wstawia element
erase(iterator position) - usuwa element na podanej pozycji
erase(const g) - usuwa wartosc z mapy
clear() - usuwa wszystkie elementy z mapy
*/

int main()
{
    map<int, int> mapka;
    auto poczatek = mapka.begin();

// DODAWANIE ELEMENTÓW

    mapka.insert({2, 5});                   // OK
    mapka.insert(pair<int, int>(3, 132));   // OK
    mapka.erase(2);
//  mapka.insert(55, 2);                    // NIEPOPRAWNE

// PRZESZUKIWANIE ZBIORU


    // for ( auto iter = mapka.begin(); iter != mapka.end(); ++iter )
    // {
    //     cout << iter->first << " " << iter->second << endl;
    // }

    for (auto const & el : mapka)
        std::cout << el.first << " " << el.second;


    return 0;
}