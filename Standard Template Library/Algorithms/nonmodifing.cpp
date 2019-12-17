#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> v {1, 3, 9, 11, 13};

    // all_of | any_of | non_of (sprawdza czy wszystkie | jakikolwiek | zaden z elementy kolekcji spelniaja dany warunek)
    std::cout << std::all_of(v.begin(), v.end(), [](int &n){ return (n % 2) != 0; });



    return 0;
}
