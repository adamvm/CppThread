#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    int liczba;

    // start randomizing
    srand(time(NULL));
    liczba = rand()%100;

    for (size_t i = 0; i < 15; i++)
    {
        cout << rand()%100 << endl;
    }

}