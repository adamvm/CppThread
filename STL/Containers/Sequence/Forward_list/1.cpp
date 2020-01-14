#include <iostream>
#include <forward_list>

/*
to samo co lista ale mozna sie tylko iterowac do przodu
nie ma wskaznika tail i nie ma wskaznikow prev
mniej miejsca w pamieci zajmuje dzieki temu
dostep liniowy

*/


using namespace std;

int main()
{
    forward_list<int> lista;

    lista.emplace_front(2321);
    lista.emplace_front(156);

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