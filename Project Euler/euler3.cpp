/*
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143?
*/

#include <iostream>
#include <math.h>
#include <chrono>

bool isPrimeNumber(long long);

int main()
{

    int largest = 0;
    long long number = 600851475143;

    auto start = std::chrono::high_resolution_clock::now();
    for (size_t i = round(sqrt(number)); i > 2; i--)
    {
        if ((number % i) == 0 && (isPrimeNumber(i) == 1))
        {
            largest = i;
            break;
        }

    }
    
    std::cout << "Largest prime: " << largest << std::endl;
    auto stop = std::chrono::high_resolution_clock::now();

    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop-start);

    std::cout << "Program trwal: " << duration.count() << " milisekund";

    return 0;
}

bool isPrimeNumber(long long number)
{
    for (int d = 2; d <= round(sqrt(number)); d++)
    {
        if (number % d == 0) return false;
    }
    return true;
}