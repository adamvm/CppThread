#include <iostream>

int product(std::string);

int main()
{
    std::string sNumber = "1234";

    std::cout << product(sNumber);



    return 0;
}

int product(std::string number)
{
    int product = 1;
    for (auto const & el : number)
    {
        product = product * el;
        std::cout << product << std::endl;
    }


    return product;
}