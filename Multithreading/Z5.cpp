#include <chrono>
#include <iostream>
#include <thread>
#include <vector>

const int CORES = std::thread::hardware_concurrency();
const int howMany = 1'000'000;

struct Entity
{
    int value;
    int padding[15];
    // no padding
};

void hardWork(std::vector<Entity> & v, int i)
{    
    for (size_t j = 0; j < howMany; j++)
        v[i].value = v[i].value + 2;       
}
 
int main()
{   
    std::vector<std::thread> threads;
    std::vector<Entity> v(CORES);

    auto start = std::chrono::high_resolution_clock::now();
    for (size_t i = 0; i < CORES - 1; i++)
        threads.emplace_back(std::thread(hardWork, std::ref(v), i));        

    hardWork(std::ref(v), CORES - 1);

    for (auto &&i : threads)
        i.join();

    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double, std::milli> difference = end - start;
    std::cout << "This took: " << difference.count() << std::endl;

    return 0;
}