#include <iostream>
#include <list>
#include <chrono>

using namespace std;
//using namespace std::chrono;

int main()
{
    std::list<int> lista;

    auto start = std::chrono::high_resolution_clock::now();

    for (int i = 1; i <= 1000000; i++)
        lista.emplace_front(i);

    auto stop = std::chrono::high_resolution_clock::now();   


    auto duration = chrono::duration_cast<chrono::microseconds>(stop-start);

    cout << "Program trwal: " << duration.count() << " milisekund";

    return 0;
}