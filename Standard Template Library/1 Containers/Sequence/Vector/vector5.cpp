// Pytanie o ten wektor pada na rozmowach kwalifikacyjnych
// Specjalnosc wektora
// najmniejsza ilosc pamieci jaka mozna zaalokowac to 1 bajt (8 bitow)
// bool zajmuje tylko 1 bit z 8
// wektor booli ma taka wlasnosc ze na 1 bajtowy wektor
// moze pomiescic 8 booli
// SA ULOZONE ZEBY MNIEJ PAMIECI ZAJMOWAC
// to utrudnia dostep do pojedynczego boola
// mozna sie do nich dostac korzystajac z obiektu proxy
// na operacje bitowe naklada sie maske zeby mozna pobrac 1 konkretny bit
// maski XOR, AND, OR
// WTEDY WSKAZNIKI DZIALAJA BARDZO NIEINTUICYJNE
// inkrementujac iterator on dalej wskazuje na to samo miejsce w pamieci



#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<bool> v (10, true);

    for (auto element : v)
    {
        cout << element << " ";
    }

    cout << "Size of v: " << sizeof(v);
    cout << "Size of bool: " << sizeof(bool);


    return 0;
}