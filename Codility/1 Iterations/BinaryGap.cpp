// https://app.codility.com/programmers/lessons/1-iterations/binary_gap/

#include <iostream>

size_t solution(size_t N);

int main()
{
    std::cout << solution(523) << std::endl;
    std::cout << solution(32) << std::endl;

    return 0;
}

size_t solution(size_t N)
{
    int overallMax = 0;
    int localMax = 0;
    bool flag = false;
    while (N > 0)
    {
        if (N % 2 == 0)
        {
            if (flag == true)
                localMax++;
        }
        else
        {
            flag = true;
            N = N - 1;
            if (localMax > overallMax)
                overallMax = localMax;
            localMax = 0;
        }
        N = N / 2;
    }

    return overallMax;
}