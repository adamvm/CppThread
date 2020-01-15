#include <iostream>
#include <array>

int* selection_sort_array(int arr[], int size);

int main()
{
    int numbers[] = {-1, 7, 2, 14, 1};

    int * pArray = selection_sort_array(numbers, 5);

    for (int i = 0; i < 5; i++, pArray++)
        std::cout << *pArray << " ";

    std::cout << std::endl << *pArray;

    return 0;
}

int* selection_sort_array(int arr[], int size)
{
    int indexMin;
    int min;
    
    for (int i = 0; i < size; i++)
    {
        min = arr[i];
        indexMin = i;
        
        for (int j = i; j < size; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                indexMin = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[indexMin];
        arr[indexMin] = temp;
    }

    return arr;
}