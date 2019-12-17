#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
    // różne wer
    // mozna ustawic na sztywno wartosc vectora
    vector<int> v1;

    int capacity = v1.capacity();

    for (int i = 0; i < 1000; i++)
    {
        v1.push_back(i);
        if (capacity != v1.capacity())
        {
            cout << v1.capacity() << " " << v1[i] << endl;
            capacity = v1.capacity();
        }
    }

    return 0;
}