/*
Write a method that returns a number that appears only once in an array.
Assume the array will surely have a unique value. If the array is empty return 0.
Examples: {1,2,3,4,1,2,4,3,5} ==> 5
*/

#include <iostream>
#include <algorithm>

int single_number(int arr[], int sz);

int main()
{
    int arr[] = {1,2,3,4,1,2,4,3,5};

    std::cout << single_number(arr, 9);

    return 0;
}

int single_number(int arr[], int sz)
{
    if (sz == 0)
        return 0;
        
    std::sort(arr, arr + sz);
    
    if (arr[0] != arr[1])
        return arr[0];

    for (int i = 1; i < sz - 1; i++)
    {
        if (arr[i] != arr[i-1] && arr[i] != arr[i+1])
            return arr[i];
    }
    
    return arr[sz-1];
}