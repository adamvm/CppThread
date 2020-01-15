#include <iostream>

double power(double x, int n);

int main()
{
    std::cout << power(2, 3) << std::endl;
    std::cout << power(2, -1);
    
    return 0;
}

double power(double x, int n)
{
    if (n == 0)
        return 1;
    
    if (n == 1)
        return x;
        
    double temp = 1;
    int newN = abs(n);
    
    for ( ; newN > 0; newN--)
        temp *= x;
        
    if (n < 0)
        return (1 / temp);
        
    if (n > 0)
        return temp;

    return 555.000;
}