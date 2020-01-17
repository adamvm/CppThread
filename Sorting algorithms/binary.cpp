#include <iostream>
#include <windows.h>

bool binary_search(int arr[], int size, int n);

int main()
{
    int tab[] = {1, 3, 5, 6, 7, 16, 19, 32, 45, 46, 50};

    std::cout << binary_search(tab, 11, 6);

    return 0;
}

bool binary_search(int arr[], int size, int n)
{
    int start = 0;
    int end = (size - 1);
    int mid = (end / 2);

    while (1)
    {
        std::cout << "start = " << start << ", end = " << end << ", mid = " << mid << std::endl;
        Sleep(500);
        if (arr[mid] > n)
        {
            end = mid;
            mid = (end / 2);
        }
        else if (arr[mid] < n)
        {
            start = mid;
            mid = (end / 2);     
        }
        else if (arr[mid] == n)
            return true;
    }
    
    return false;
    
}