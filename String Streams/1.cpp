#include <iostream>
#include <sstream>

int main()
{
    std::string name = "Bob";
    int age = 32;

    std::stringstream ss;

    ss << "Name: " << name << ", age: " << age;

    std::cout << ss.str();

    return 0;
}