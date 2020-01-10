#include <iostream>
#include <windows.h>
#include <vector>

void showVector(const std::vector<int> &v);
void swapElements(int &a, int &b);
void quickSort(std::vector<int> &v, int left, int right);

int main()
{
//    std::vector<int> v = {13, 1, 74, 3, 67, 7, 120, 1};
    std::vector<int> v = {2, 5, 1, 3, 4, 0, 6, 2, 5};
    showVector(v);

    quickSort(v, 0, v.size() - 1);

    showVector(v);

    return 0;
}

void showVector(const std::vector<int> &v)
{
    for (auto i : v)
        std::cout << i << " ";
    std::cout << std::endl;  
}

void swapElements(int &a, int &b)
{
    int temp = b;
    b = a;
    a = temp;
}

void quickSort(std::vector<int> &v, int left, int right)
{
    if (left >= right)
        return;

    int i = left;
    int j = right;
    int pivot = v[(left + right) / 2];
    std::cout << "Nowy pivot: " << pivot << std::endl;

    while (1)
    {
        while (v[i] < pivot)
        {
            i++;
        }
        while (v[j] > pivot)
        {
            j--;
        }
        
        if (i <= j)
        {
            swapElements(v[i], v[j]);
            std::cout << "Zamieniam " << v[i] << " z " << v[j] << std::endl;
            Sleep(250);
            i++;
            j--;
        }
        else break;
    }

    if (j > left)
        quickSort(v, left, j);

    if (i < right)
        quickSort(v, i, right);
}