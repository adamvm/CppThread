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
#include <math.h>

bool isPrimeNumber(int a);
std::vector<int> dividers(int a);

int main()
{
    std::vector<int> v1 = dividers(150);
    
    for (auto &&i : v1)
    {
        std::cout << i << " ";
    }
    

    return 0;
}

std::vector<int> dividers(int a)
{
    std::vector<int> v;

    for (int i = 1; i <= a / 2; i++)
    {
    if ((a % i == 0) && (isPrimeNumber(i) == true))
        v.emplace_back(i);
    }

    return v;
}

bool isPrimeNumber(int a)
{
    for (int i = 2; i <= sqrt(a); i++)
    {
     if (a % i == 0)
        return false;
    }
    return true;
}