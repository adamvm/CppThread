/*
Write a function - power(x,n) that returns the value of x raised to the power of n (xn). n can be negative!
Example:

power(2,3) ==> 8.0
*/

double power(double x, int n)
{
    if (n == 0)
        return 1;
    
    if (n == 1)
        return x;
    
    double answer = x;

    while (n > 1)    
    {
        answer *= x;
        n--;    
    }
    
    if (n > 0)
        return answer;
    else
        return 1 / answer;
        
    return 666;
}