/*
In England the currency is made up of pound, £, and pence, p, and there are eight coins in general circulation:

1p, 2p, 5p, 10p, 20p, 50p, £1 (100p) and £2 (200p).

It is possible to make £2 in the following way:

1×£1 + 1×50p + 2×20p + 1×5p + 1×2p + 3×1p

How many different ways can £2 be made using any number of coins?
*/

#include <iostream>

using namespace std;

int main()
{
    float onePens = 0.01; // i
    float twoPens = 0.02; // j
    float fivePens = 0.05; // k
    float tenPens = 0.10; // l
    float twentyPens = 0.20; // m
    float fiftyPens = 0.50; // n
    float onePound = 1.00; // o
    float twoPounds = 2.00; // p

    int possibilities = 0;

    for (int i = 0; i <= 2.00 / onePens; i++)
    {
        for (int j = 0; j <= 2.00 / twoPens; j++)
        {
            for (int k = 0; k <= 2.00 / fivePens; k++)
            {
                for (int l = 0; l <= 2.00 / tenPens; l++)
                {
                    for (int m = 0; m <= 2.00 / twentyPens; m++)
                    {
                        for (int n = 0; n <= 2.00 / fiftyPens; n++)
                        {
                            for (int o = 0; o <= 2.00 / onePound; o++)
                            {
                                for (int p = 0; p <= 2.00 / twoPounds; p++)
                                {
                                    if ((i*onePens + j*twoPens + k * fivePens + l*tenPens + m*twentyPens + n*fiftyPens + o*onePound + p*twoPounds) == 2.00)
                                    possibilities++;
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    cout << "The total number of possibilities is: " << possibilities;
    return 0;
}
