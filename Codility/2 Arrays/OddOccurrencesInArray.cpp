#include <iostream>
#include <vector>
#include <algorithm>

int solution(std::vector<int> &A);

int main()
{
    std::vector<int> A = {42,0,0,0,0,0,42,55};
    std::cout << solution(A);

}

int solution(std::vector<int> &A)
{
    std::sort(A.begin(), A.end());
    unsigned long long size = A.size();
    
    if (size == 1)
        return A[0];

    for (size_t i = 1; i < size - 1; i++)
    {
        if ((A[i] != A[i-1]) && (A[i] != A[i+1]))
            return A[i];
    }
    
    return A[size - 1];
}