#include <iostream>
#include <stack>

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