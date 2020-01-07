#include <iostream>
#include <sstream>

int main()
{
    std::string name = "Bob";
    int age = 32;

    std::stringstream ss;

    // std::string info = 
    // This will not work!

    ss << "Name: " << name << ", age: " << age;

    std::cout << ss.str();

}
