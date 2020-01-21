// https://app.codility.com/programmers/lessons/2-arrays/cyclic_rotation/

#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> solution(std::vector<int> &A, int K);

int main()
{
    std::vector<int> A = {3, 8, 9, 7, 6};
    int K = 3;

    std::vector<int> C = solution(A, K);

    for (auto &&i : C)
        std::cout << i << " ";
    
    return 0;
}

std::vector<int> solution(std::vector<int> &A, int K)
{
    std::vector<int> B = A;
    for (int i = 0; i < K; i++)
        std::rotate(B.rbegin(), B.rbegin() + 1, B.rend());

    return B;
}