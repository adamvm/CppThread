#include <iostream>
#include <map>

using namespace std;

int main()
{
    int sz = 9;
    int tab[] = {1,2,3,4,1,2,4,3,5};

    map<int, int> mapka;

    for (size_t i = 0; i < sz; i++)
    {
        mapka.insert(pair<int, int>(tab[i], 0));
    }
    
    for (size_t i = 0; i < sz; i++)
    {
        if (tab[i] == (mapka.find(i) != mapka.end()))
            cout << "Found";
    }   
    


    return 0;
}