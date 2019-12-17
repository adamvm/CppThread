/* This program calculates a factorial for the user number */
/* It uses function recursion */

#include <iostream>

int factorial (int);

main() {

int number;

std::cout << "Enter the number for which you'd like to calculate a factorial: \n";
std::cin >> number;
std::cout << number << "! equals: " << factorial(number);

}

int factorial (int n){

    if (n == 0) {
        return 1;
    }
    else {
        return n * factorial(n-1);
    }
}