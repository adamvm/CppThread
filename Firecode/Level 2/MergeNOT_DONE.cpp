/*
The idea behind the classic Mergesort algorithm is to divide an array in half,
sort each half and then use a merge() function to merge the two halves into a single sorted array.
Implement a merge() function that takes in two sorted arrays and returns a third sorted array that contains
elements of both the input arrays in the ascending order.
You can assume that the input arrays will always be sorted in ascending order and can have different sizes.
Examples:

merge({2,5,7,8,9},5,{9},1) -> {2,5,7,8,9,9}
merge({7,8},2,{1,2},2) -> {1,2,7,8}
merge({2},1,{},0) -> {2}
*/

int* merge(int arr_left[],int sz_left, int arr_right[], int sz_right)
{
    int* arr_merged = new int [sz_left+sz_right];
    
    index_left = 0;
    index_right = 0;

    for (size_t i = 0; i < sz_left + sz_right; i++)
    {
        
        arr_merged[i] 
    }



    return arr_merged;
}