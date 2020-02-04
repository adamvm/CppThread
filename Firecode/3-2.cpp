#include <algorithm>
#include <iostream>

int * remove_dup(int A[], int sz);

int main()
{
    int tab[] = {1,2,4,4,5,6,2,1};

    int * without_dup_tab = remove_dup(tab, 8);

    for (int o = 0; o < 8; o++)
    {
        std::cout << without_dup_tab[o] << " ";
    }
    

    return 0;
}

int * remove_dup(int A[], int sz)
{
    int *output = NULL;
    if (sz == 1)
        return output;

    output = new int[sz];

    std::sort(A, A + sz);
    int k = 0;
    int dup;

    for (int i = 1; i < sz; i++)
    {
        if (A[i] == A[i-1])
        {
            output[k] = A[i];
            dup = A[i];
            k++;
        }

        while (A[i] == dup && i < sz)
            i++;
    }

    return output;
}