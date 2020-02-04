#include <iostream>

int* merge(int arr_left[],int sz_left, int arr_right[], int sz_right);

int main()
{
    int tab1[] = {2,5,7,8,9};
    int tab2[] = {9};

    merge(tab1, 5, tab2, 1);

    int tab3[] = *arr_merged;

    for (auto &&i : arr_merged)
    {
        
    }
    



    return 0;
}

void merge(int arr_left[],int sz_left, int arr_right[], int sz_right){

    int* arr_merged = new int [sz_left+sz_right];

    for (int i = 0; i < sz_left; i++)
        arr_merged[i] = arr_left[i];
    
    int k = 0;

    for (int j = sz_left; j < sz_right; j++, k++)
        arr_merged[j] = arr_right[k];

    for (int *
    

}