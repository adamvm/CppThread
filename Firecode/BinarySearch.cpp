#include <iostream>
#include <windows.h>

bool binary_search(int arr[], int size, int n);

int main()
{
    int tab[] = {1, 3, 5, 6, 7, 16, 19, 32, 45, 46, 50};

    std::cout << "Jedynka: " << binary_search(tab, 11, 1) << std::endl;
    std::cout << "Trojka: " << binary_search(tab, 11, 3) << std::endl;
    std::cout << "Piatka: " << binary_search(tab, 11, 5) << std::endl;
    std::cout << "Szostka: " << binary_search(tab, 11, 6) << std::endl;
    std::cout << "Siodemka: " << binary_search(tab, 11, 7) << std::endl;


    return 0;
}

bool binary_search(int arr[], int size, int n)
{
    int start = 0;
    int end = size - 1;
    int mid = (end - start) / 2;

    while (start <= end)
    {
        std::cout << "start = " << start << ", end = " << end << ", mid = " << mid << std::endl;
        Sleep(500);
        if (arr[mid] == n)
            return true;
        else if (n > arr[mid])
        {
            start = mid + 1;
            mid = (end + start) / 2;
        }
        else if (n < arr[mid])
        {
            end = mid - 1;
            mid = (end + start) / 2;     
        }
    }
    return false;
}