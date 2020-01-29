/* This program calculates a factorial for the user number */


#include <iostream>

long long factorial (int);

main() {

int number;

std::cout << "Enter the number for which you'd like to calculate a factorial: \n";
std::cin >> number;
std::cout << number << "! equals: " << factorial(number);

}

long long factorial (int n){

int score = 1;

for (int i = 1; i < n+1; i++) {
    score = i * score;
}
return score;

}