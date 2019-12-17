#include <iostream>
#include <list>
#include <chrono>

int main()
{
    std::list<int> lista;
    // mozna tez zadeklarowac liste list<int> lista (1000000)

    auto start = std::chrono::high_resolution_clock::now();

    for (int i = 1; i <= 1000000; i++)
        lista.emplace_front(i);

    std::list<int>::iterator it = lista.begin();
    for (int i = 1; i <= 499999; it++, i++) { }
        std::cout << *it << std::endl;
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop-start);
    std::cout << "Program trwal: " << duration.count() << " milisekund" << std::endl;


    return 0;
}