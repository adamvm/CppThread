/*
The sum of the squares of the first ten natural numbers is:

1^2 + 2^2 + ... + 10^2 = 385

The square of the sum of the first ten natural numbers is:

(1 + 2 + ... + 10)^2 = 55^2 = 3025

Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.
Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

#include <iostream>

using namespace std;

int square(int);
int sumOfSquares(int);
int squareOfSum(int);

int main()
{
    cout << squareOfSum(100) - sumOfSquares(100);
    return 0;
}

int square(int number)
{
    return number * number;
}

int sumOfSquares(int number)
{
    int score = 0;

    for (int i = 1; i <= number; i++)
        score += square(i);
    return score;
}

int squareOfSum(int number)
{
    int score = 0;

    for (int i = 1; i <= number; i++)
        score += i;
    return score * score;
}