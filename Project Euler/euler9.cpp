/*
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a^2 + b^2 = c^2
For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/

#include <iostream>
#include <cmath>

using namespace std;

bool isPythagoreanTriplet1000(int, int, int);

int main()
{
    int a;
    int b;
    int c;

    for (a = 3; a <= 1000; a++)
    {
        for (b = 4; b <= 1000; b++)
        {
            c = sqrt((a*a + b*b));
            if (isPythagoreanTriplet1000(a, b, c) == true)
            {
                cout << "a: " << a << ", b: " << b << ", c: " << c << endl;
                cout << a * b * c;
            }
        }
    }

    return 0;
}

bool isPythagoreanTriplet1000(int a, int b, int c)
{
    if ((a*a + b*b == c*c) && ((a + b + c) == 1000))
    return true;
    return false;
}