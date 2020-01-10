#include <iostream>
#include <vector>

void showVector(const std::vector<int> &v);
void swapElements(int &a, int &b);

int main()
{
    std::vector<int> v = {13, 1, 74, 3, 67, 7, 120, 1};

    int smallest, indexSmallest;
    int vSize = v.size();

    showVector(v);

    /* CODE */
    for (int i = 0; i < vSize; i++)
    {
        smallest = v[i];
        indexSmallest = i;
        
        for (int j = i; j < vSize; j++)
        {
            if (v[j] < smallest)
            {
                smallest = v[j];
                indexSmallest = j;
            }
        }

        swapElements(v[i], v[indexSmallest]);
    }
    /* CODE */

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