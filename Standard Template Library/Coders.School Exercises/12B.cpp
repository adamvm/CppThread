/*
Divisors Finder
Requirements:
1. Generate N random values (int numbers from 0 to M)
2. Generate all prime numbers from 0 to M
3. Create a map Prime -> Values, where Prime is a divisor of Value. (eg. 3 -> [6,9] where 6,9 are
generated random numbers)
4. Input data: N, M (from cin)
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <math.h>
#include <time.h>

int main()
{
    int N, M;

    std::cout << "Enter the number of elements: ";
    std::cin >> N;
    std::cout << "Enter the maximum number: ";
    std::cin >> M;

    std::vector<int> NRandomValues(N);

    srand(time(NULL));
    std::for_each(NRandomValues.begin(), NRandomValues.end(), [=](int &a){ return a = rand() % M; });

    for (auto &&i : NRandomValues)
    {
        std::cout << i << " ";
    }
    
    return 0;
}