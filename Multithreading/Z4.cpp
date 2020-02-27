#include <chrono>
#include <iostream>
#include <mutex>
#include <thread>
#include <vector>

using namespace std::chrono_literals;

class Fork
{
public:   
    std::mutex m;
};

class Philosopher
{
public:
    std::string _name;
    int _forkIndexLeft;
    int _forkIndexRight;
    //std::thread::id myID = std::thread::get_id();

    void doSomething()
    {
        contemplate();
        eat();
    }
    void eat()
    {
        
    }
    void contemplate() { }
    void idle() { std::this_thread::sleep_for(2s); }

    Philosopher(const std::string &name, std::vector<Fork> &table, int left, size_t right)
        : _name(name), _forkIndexLeft(left), _forkIndexRight(right) { }
    ~Philosopher() { }
};

int main()
{
    std::vector<Fork> table(5);
    std::vector<Philosopher> philosophers
    {
        {
            { "Tales", table, 0, 1         },
            { "Pitagoras", table, 1, 2     },
            { "Sokrates", table, 2, 3      },
            { "Platon", table, 3, 4        },
            { "Arystoteles", table, 4      },
            // 4, 0 spowoduje zakleszczenie?
        }
    };

    for (auto &&i : philosophers)
    {
        std::cout << i._name << std::endl;
    }
    

    return 0;
}