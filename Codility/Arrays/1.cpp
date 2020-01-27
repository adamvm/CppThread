#include <iostream>
#include <vector>
#include <algorithm>

int solution(std::vector<int> &A);

int main()
{
    std::vector<int> A = {42,0,0,0,0,0,42, 55};

    std::cout << solution(A);

}

int solution(std::vector<int> &A)
{
    std::vector<int> B = A;
    std::sort(B.begin(), B.end());
    unsigned long long size = B.size();
    
    for (size_t i = 0; i < size; i++)
    {
        if (!(B[i] == B[i+1] || B[i] == B[i-1]))
            return B[i];
    }
    
    return B[0];
}