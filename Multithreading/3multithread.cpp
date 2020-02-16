#include <algorithm>
#include <functional>
#include <iostream>
#include <numeric>
#include <thread>
#include <vector>

constexpr size_t min_data_size = 5000;

// constexpr to znaczy ze ta liczba bedzie znana w czasie kompilacji

template <typename IT, typename T>
T p_accumulate(IT first, IT last, T init)
{
    const size_t size = std::distance(first, last);
    if (!size)
        return init;

    if (size < min_data_size)
        return std::accumulate(first, last, init);
    
    const size_t threadsInCPU = std::thread::hardware_concurrency();
    const size_t usedThreads = threadsInCPU != 0 ? threadsInCPU : 2;
    const size_t usedThreads = std::min(recommendedThreads, threadsInCPU);
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
            results  = accumulate(begin, end, T{});
        }, begin, end, std::ref(results[i]));
    begin = end;
    }

    results[usedThreads - 1] = std::accumulate(begin, last, T{});
    std::for_each(std::begin(threads), std::end(threads), std::mem_fn(&std::thread::join));

    return std::accumulate(std::begin(results), end(results), init);
}

int main()
{   
    std::vector<int> v(1'000'000);

    std::generate(begin(v), end(v), [i{0}]() mutable { return i++; });
    // mutable musi byc bo lambda musi wiedziec ze moze to zmieniac

    // std::cout << std::accumulate(begin(v), end(v), 0) << std::endl;
    // nie trzeba std bo zagniezadzanie namespacow?

    std::cout << p_accumulate(begin(v), end(v), 0) << std::endl;

    return 0;
}