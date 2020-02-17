/*
Napisz współbieżną wersję algorytmu std::count_if.
Zmierz czas działania i napisz testy, pokazujące, że zwraca ona takie same wyniki, jak std::count_if.

    std::vector<int> v = {4, 7, 13, 511, 2, 5, 7, 74, 7, 23};

*/

#include <functional>
#include <iostream>
#include <numeric>
#include <thread>
#include <vector>

template <typename IT, typename T>
T p_count_if(IT first, IT last, T target);

int main()
{   
    std::vector<int> v{4, 7, 13, 511, 2, 5, 7, 74, 7, 23};

    int a = p_count_if(v.begin(), v.end(), 7);

    std::cout << "Number of occurences: " << a << std::endl;

    return 0;
}

template <typename IT, typename T>
T p_count_if(IT first, IT last, T target)
{
    const size_t size = std::distance(first, last);

    if (!size)
        return 0;
   
    const size_t threadsInCPU = std::thread::hardware_concurrency();
    const size_t usedThreads = threadsInCPU != 0 ? threadsInCPU : 2;
    const size_t dataChunk = size / usedThreads;

    std::vector<T> results(usedThreads);
    std::vector<std::thread> threads(usedThreads - 1);

    IT begin  = first;
    for (size_t i = 0; i < (usedThreads - 1); i++)
    {
        IT end = std::next(begin, dataChunk);
        // alternatively std::advance
        threads[i] = std::thread([](IT begin, IT end, T& results)
        {
            results  = count_if(begin, end, T{});
        }, begin, end, std::ref(results[i]));
    begin = end;
    }

    results[usedThreads - 1] = std::accumulate(begin, last, T{});

    for_each(std::begin(threads), std::end(threads), std::mem_fn(&std::thread::join));

    return std::accumulate(std::begin(results), std::end(results), 0);
}