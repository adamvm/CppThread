#include <iostream>
#include <vector>
#include <algorithm>

bool isOdd(int &n) { return (n % 2) != 0; }

class IsOdd
{
public:
    // zeby moc wywolac IsOdd() to musi byc public!
    bool operator() (int a) { return (a % 2) != 0; }
};

int main()
{
    std::vector<int> v {2, 4, 6, 7, 8, 10};

    // zamiast funktora wywolujemy funkcje
    auto it = std::find_if(v.begin(), v.end(), isOdd);

    std::cout << "Wartosc znaleziona przez funkcje: " << *it << std::endl;

    // wykorzystanie funktora
    // musi byc public!
    auto it2 = std::find_if(v.begin(), v.end(), IsOdd());

    std::cout << "Wartosc znaleziona przez funkcje: " << *it2 << std::endl;

    return 0;
}