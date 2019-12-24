#include <iostream>

void HelloWorld(int a)
{
    std::cout << "Hello World! a = " << a << std::endl;
}


int main()
{
    auto function = HelloWorld; // & before HelloWorld is optional

    function(2);
    function(5);

    return 0;
}