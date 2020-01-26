#include <iostream>
#include <queue>
#include <vector>

// same as queue but when pushing a new element the queue is sorted

int main()
{
    std::priority_queue<int, std::vector<int>, std::greater<int>> q;

    q.push(5);
    q.push(142);
    q.push(23);
    q.push(53);
    q.push(4);
    q.push(1);

    while (!q.empty())
    {
        std::cout << q.top() << std::endl;
        q.pop();
    }

    return 0;
}