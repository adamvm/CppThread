#include <iostream>

class Parent
{


};


class Brother : public Parent
{


};

class Sister : public Parent
{


};

/*
    static_cast<type>(value)
*/

int main()
{
    Parent parent;
    Brother brother;


    Parent * ppb = &brother;

    std::cout << ppb << std::endl;

    Brother *pbb = static_cast<Brother *>(ppb);

    std::cout << pbb << std::endl;

    return 0;
}