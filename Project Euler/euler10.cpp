/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
What is the 10 001st prime number?
*/

#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

bool isPrimeNumber(int);

int main()
{
    vector<int> wektor;
    int i = 2;
    int sum = 0;

    while (i < 2000000)
    {
        if (isPrimeNumber(i) == true)
        {
   //         cout << i << endl;
            sum += i;
            i = i++;
        }
        else i++;
    }

    cout << sum;

    return 0;
}

bool isPrimeNumber(int number)
{
    for (int i = 2; i <= round(sqrt(number)); i++)
    {
        if (number % i == 0) return false;
    }
    return true;
}