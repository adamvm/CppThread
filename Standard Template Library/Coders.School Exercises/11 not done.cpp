/*
1. Create empty std::deque for int values.
2. Generate 14 values using std::back_inserter and std::generate_n with rand() but limited to 7.
3. Sort values and print.
4. Leave only unique values in the container and print them.
5. Rotate them around the middle element and print result.
*/

#include <iostream>
#include <deque>
#include <algorithm>
#include <time.h>
#include <cstdlib>

int main()
{
    std::deque<int> v;
    srand(time(NULL));

    std::fill_n(std::back_inserter(v), 14, std::generate(rand()%7));

    std::generate()



    return 0;
}