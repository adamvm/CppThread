#include <iostream>
#include <forward_list>


int main()
{
    std::forward_list<int> lista {5, 15, 645, 3452, 4565, 5555, 6666};

    std::forward_list<int>::iterator start = lista.begin();
    std::forward_list<int>::iterator koniec = lista.end();

    std::cout << distance(lista.begin(), lista.end()) << std::endl;

    auto start2 = lista.begin();

    advance(start2, 4);
    std::cout << "5th element: " << *start2 << std::endl;

    auto start4 = lista.begin();
    advance(start4, 4);
    std::cout << "Distance from begin to 4th element: " << distance(lista.begin(), start4);

    


    return 0;
}