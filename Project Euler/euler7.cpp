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
    int i = 3;

    while (wektor.size() <= 10000)
    {
        if (isPrimeNumber(i) == true)
        {
            wektor.push_back(i);
//            cout << wektor[i] << endl;
            i = i + 2;
        }
        else i = i + 2;
    }

    cout << wektor[9999];
    return 0;
}

bool isPrimeNumber(int number)
{
    for (int d = 2; d <= round(sqrt(number)); d++)
    {
        if (number % d == 0) return false;
    }
    return true;
}