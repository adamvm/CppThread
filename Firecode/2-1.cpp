#include <iostream>

void swap(int & number1, int & number2);

int main()
{
    int arr[] = {7,5,2,3,5,1,9,11,4,2};
    int min, temp;

    std::cout << "Original array: ";

    for (auto const & el : arr)
        std::cout << el;

    for (size_t i = 0; i < 10; i++)
    {

        for (size_t j = i; j < 10; j++)
        {
            min = arr[i];
            if (arr[i] < min)
                min = arr[i];
        }
    }

    swap(arr[0], arr[3]);
    std::cout << std:: endl << "Sorted array: ";
    for (auto const & el : arr)
        std::cout << el;

    return 0;
}

void swap(int & number1, int & number2)
{
    int temp;
    temp = number1;
    number1 = number2;
    number2 = temp;
}