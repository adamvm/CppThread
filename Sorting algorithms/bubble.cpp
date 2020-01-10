#include <iostream>
#include <vector>

void showVector(const std::vector<int> &v);
void swapElements(int &a, int &b);

int main()
{
    std::vector<int> v = {13, 1, 74, 3, 67, 7, 120, 1};

    int swapNum, i;
    int vSize = v.size();

    showVector(v);

    /* CODE */
    while (swapNum != 0)
    {
        swapNum = 0;
        i = 0;
        for ( ; i < vSize - 1; i++)
        {
            if (v[i] > v[i+1])
            {
                swapElements(v[i], v[i+1]);
                swapNum++;
            }
        }
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