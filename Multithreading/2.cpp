#include <iostream>
#include <thread>
#include <chrono>

using namespace std::chrono_literals;

void foo()
{
    std::cout << std::this_thread::get_id() << std::endl;
    std::this_thread::sleep_for(5s);
    std::cout << "Id after 5s: " << std::this_thread::get_id() << std::endl;
    auto start = std::chrono::high_resolution_clock::now();
    std::this_thread::sleep_until(start + 15s);
    std::cout << "Id after 'now + 15 s': " << std::this_thread::get_id() << std::endl;
}

int main()
{   
    std::thread t1(foo);
    std::thread t2(foo);

    t1.join();
    t2.join();

    return 0;
}