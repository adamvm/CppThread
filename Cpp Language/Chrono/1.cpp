#include <iostream>
#include <list>
#include <chrono>

int main()
{
    std::list<int> list1;

    auto start = std::chrono::high_resolution_clock::now();

    for (int i = 1; i <= 1000000; i++)
        list1.emplace_front(i);

    auto stop = std::chrono::high_resolution_clock::now();   

    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop-start);

    std::cout << "Execution time: " << duration.count() << " ms";

    return 0;
}