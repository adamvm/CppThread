#include <iostream>

int solution(int N);

int main()
{
    std::cout << solution(325123);

    return 0;
}

int solution(int N)
{
    int local_max = 0;
    int largest = 0;

    std::string answer = "";

    while (N != 0)
    {
        if (N % 2 == 0)
        {
            answer = "0" + answer;
            N = N / 2;
            local_max++;
            if (local_max > largest)
                largest = local_max;
        }
        else
        {
            N = N - 1;
            answer = "1" + answer;
            N = N / 2;
            local_max = 0;
        }
    }

return largest;
}