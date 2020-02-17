#include <algorithm>
#include <chrono>
#include <functional>
#include <iostream>
#include <numeric>
#include <thread>
#include <vector>

template <typename IT, typename T>
T p_accumulate(IT first, IT last, T init);

int main()
{   
    std::vector<int> v(1'000'000);

    std::generate(begin(v), end(v), [i{0}]() mutable { return i++; });
    // alternatively std::iota(v.begin(), v.end(), 0)

    auto start = std::chrono::high_resolution_clock::now();
    auto result = p_accumulate(begin(v), end(v), 0);
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> difference = end - start;
    std::cout << "Multithreaded version: " << difference.count() << " ms" << std::endl;

    start = std::chrono::high_resolution_clock::now();
    result = std::accumulate(std::begin(v), std::end(v), 0);
    end = std::chrono::high_resolution_clock::now();
    difference = end - start;
    std::cout << "Singlethread version: " << difference.count() << " ms" << std::endl;

    return 0;
}

template <typename IT, typename T>
T p_accumulate(IT first, IT last, T init)
{
    const size_t size = std::distance(first, last);

    if (!size)
        return init;
   
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
            results  = accumulate(begin, end, T{});
        }, begin, end, std::ref(results[i]));
    begin = end;
    }

    results[usedThreads - 1] = std::accumulate(begin, last, T{});

    std::for_each(std::begin(threads), std::end(threads), std::mem_fn(&std::thread::join));

    return std::accumulate(std::begin(results), std::end(results), init);
}