#include <iostream>
#include <vector>

struct Struct
{
    int data;
    std::string name;
} s1 {1, "Bob"};

int main()
{
    int value {5};
    std::string value2 {"Hello"};
    int array[] {1, 5, 8};

    int * pValue = new int[3] {1, 2, 3};

    int * pValue2 {&value};

    std::cout << value << " " << value2 << " " << array[1] << " " << pValue[2] << " " << *pValue2 << std::endl;

    int array2[5] { };

    for (auto const & el : array2)
        std::cout << el;

    std::cout << std::endl << s1.name << std::endl;

    std::vector<int> v {12, 15};

    std::cout << std::endl << v[1];
    
    delete [] pValue;

    return 0;
}