#include <iostream>

using namespace std;

class Test
{
public:
    static int count;
    Test() { count++;
    cout << "Number of all objects: " << count; }
    ~Test() { }
};

// zwykle klasy sa definiowane w pliku *.hpp
// zmienne statyczne klasy powinny byc zainicjowane w pliku main.cpp
// przed int main() poprzez Test::count = 0;

int Test::count = 1;

int main()
{
    Test test1;
    Test test2;
    Test test3;
    Test test4;
    Test test5;
    Test test6;
    Test test7;

    return 0;
}