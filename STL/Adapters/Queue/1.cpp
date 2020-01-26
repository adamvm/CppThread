#include <iostream>
#include <queue> //FIFO

int main()
{
    std::queue<int> q;

    q.emplace(5);
    q.emplace(7);
    q.emplace(11);
    q.emplace(42);
    q.emplace(4);
    q.emplace(1);
    
    while (q.empty() != 1)
    {
        std::cout << q.front() << " ";
        q.pop();
    }
    

    return 0;
}