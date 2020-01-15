#include <iostream>

int main()
{
    int array[] = {1, 5, 7, 11, 16};

    int *pArray = array;

    for (int i = 0; i < 5; i++)
        std::cout << pArray[i] << " ";

    return 0;
}