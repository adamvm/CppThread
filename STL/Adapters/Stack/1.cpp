#include <iostream>
#include <stack> // LIFO

// Stack uses deque (by default) but this is adjustable

int main()
{
    std::stack<int> s;

    s.push(300);
    s.push(400);
    s.push(100);

    while (!s.empty())
    {
        std::cout << s.top() << std::endl;
        s.pop();
    }

    return 0;   
}