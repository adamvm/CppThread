/*

*/

#include <iostream>

using namespace std;

int main()
{
    int n = 15;
    int fib[n];

    fib[0] = 1;
    fib[1] = 1;

    for (int i = 2; i < n; i++)
    {
        fib[i] = fib[i-2] + fib[i-1];
        cout << fib[i] << endl;
    }

    return 0;
}