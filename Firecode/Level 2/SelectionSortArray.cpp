/*
Write a function that takes in an array of ints and uses the Selection Sort algorithm
to sort the array 'in place' in ascending order. The function should return the same in-place sorted array.

Note: Selection sort offers improved performance over bubble sort for arrays with large number of elements.
Where bubble sort accumulated the largest elements towards the end of the array, selection sort
accumulates the smallest elements at the beginning of the array. See the hints and click
the red colored links for additonal details on the algorithm.  
Examples: 

selection_sort_array({1,5,2}, 3) -> {1,2,5}
selection_sort_array({11},1) -> {11}
selection_sort_array({}, 0) -> {}
{} -> [Empty] Array 
*/

#include <iostream>
#include <algorithm>

int* selection_sort_array(int arr[], int size);

int main()
{
    int arr[] = {2, 1, 5, 1, 7, 8, 1, 3, 5, 7, 11, 14, 1, 14, 2, 6, 7};

    selection_sort_array(arr, 17);

    for (auto &&i : arr)
        std::cout << i << " ";

    return 0;
}


int* selection_sort_array(int arr[], int size)
{
    if (size == 0)
        return arr;

    int local_min;
    int index_min;

    for (int i = 0; i < size; i++)
    {
        local_min = arr[i];
        index_min = i;  

        for (int j = i; j < size; j++)
        {
            if (arr[j] < local_min)
            {
                local_min = arr[j];
                index_min = j;
                std::swap(arr[i], arr[j]);
            }
        }     
    }

    return arr;
}