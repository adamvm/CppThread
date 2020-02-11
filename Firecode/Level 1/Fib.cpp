/*
The Fibonacci Sequence is the series of numbers: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
The next number is found by adding up the two numbers before it.
Write a recursive function fib(n) that returns the nth Fibonacci number.
n is 0 indexed, which means that in the sequence 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...,
n == 0 should return 0 and n == 3 should return 2.
Assume n is less than 15.
Even though this problem asks you to use recursion, more efficient ways to solve it include using an Array,
or better still using 3 volatile variables to keep a track of all required values. Check out this blog post to examine better solutions for this problem.
Examples:

fib(0) ==> 0
fib(1) ==> 1
fib(3) ==> 2
*/

#include <iostream>

int fib(int n);

int main()
{
    for (int i = 0; i <= 15; i++)
        std::cout << fib(i) <<std::endl;

    return 0;
}

int fib(int n)
{
    if (n == 0)
        return 0;
    if (n <= 2)
        return 1; 
    else
        return fib(n - 1) + fib(n - 2);    
}