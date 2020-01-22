// https://app.codility.com/programmers/lessons/1-iterations/binary_gap/

#include <iostream>

int solution(int N);

int main()
{
    std::cout << solution(523);

    return 0;
}

int solution(int N)
{
    std::string Nbinary = "";
    int localMax = 0;
    int totalMax = 0;

    while (N != 0)
    {
        if (N % 2 == 0)
        {
            Nbinary = "0" + Nbinary;
            localMax++;
            if (localMax > totalMax)
                totalMax = localMax;
        }
        else
        {
            Nbinary = "1" + Nbinary;
            N = N - 1;
            localMax = 0;
        }
        N = N / 2;
    }
    
    return totalMax;
}