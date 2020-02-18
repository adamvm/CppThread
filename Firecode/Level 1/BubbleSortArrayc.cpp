/*
Write a function that takes in an array of ints and the size of the array and uses the
Bubble Sort algorithm to sort the array in ascending order.
The function should return the same, in-place sorted array.

Note: Bubble sort is one of the most inefficient ways to sort a large array of integers. Nevertheless, it is an interview favorite.
Bubble sort has a time complexity of O(n2). However, if the
sample size is small, bubble sort provides a simple implementation of a classic sorting algorithm.
Examples:

bubble_sort_array({5,4,3},3) -> {3,4,5}
bubble_sort_array({3},1) -> {3}
bubble_sort_array({},0) -> {}

*/

#include <algorithm>
#include <iostream>

int* bubble_sort_array(int arr[], int size);

int main()
{
    int arr[] = {2, 1, 5, 1, 7, 8, 1, 3, 5, 7, 11, 14, 1, 14, 2, 6, 7};

    bubble_sort_array(arr, 17);

    for (auto &&i : arr)
    {
        std::cout << i << " ";
    }
    
    return 0;
}

int* bubble_sort_array(int arr[], int size)
{
    // size 17
    if (size == 0)
        return arr;
    
    int changes = 1;

    while (changes != 0)
    {
        changes = 0;
        for (int i = 0; i < size - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                std::swap(arr[i], arr[i + 1]);
                changes++;
            }
        }
    }
    
    return arr;
}