#include <iostream>

int main()
{
    int value1 = 5;
    int value2 = 55;
    double value3 = 55.55;

    const int * pValue1 = &value1;
    // pointer to int that is const (pointer cannot point any other type)

    std::cout << *pValue1 << std::endl;

    pValue1 = &value2;

    std::cout << *pValue1 << std::endl;

    // pValue1 = &value3;   it won't work as type (INT) is const

    int * const pValue2 = &value1;
    // const pointer that points to int (pointer as such cannot be reinitialized)

    // pValue2 = &value2;   it won't work as POINTER is const
    // pValue2 = &value3;   it won't work as POINTER is const

    return 0;
}