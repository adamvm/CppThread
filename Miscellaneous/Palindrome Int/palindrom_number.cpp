#include <iostream>

bool is_pal(int);

int main()
{
    std::cout << is_pal(321123);
    return 0;
}

bool is_pal(int n)
{
    int m = n;
    int r = 0;
    int d = 0;

    while (n > 0)
    {
        d = n % 10;
        r = r * 10 + d;
        n = n / 10;
        std::cout << "d = " << d << ", r = " << r << ", n = " << n << std::endl;
    }

    return m == r;
}


/*

321123

m = 321123
r = 0
d = 0

1) d = 3, r = 3, n = 32112
2) d = 2, r = 32, n = 3211
3) d = 1, r = 321, n = 321
4) d = 1, r = 3211, n = 32
5) d = 2, r = 32112, n = 3
6) d = 3, r = 321123, n = 0


*/