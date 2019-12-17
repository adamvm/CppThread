#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int liczby[10],suma=0;
int main()
{
    srand(time(NULL));
    for(int i=0;i<=9;i++)
    {
        liczby[i]=rand()%7+4;
        cout<<"Losowanie nr "<<i<<endl;
        cout<<"Wylosowano liczbe : "<<liczby[i]<<endl<<endl;
        suma +=liczby[i];
    }

    cout<<"Suma liczb wynosi "<<suma<<endl;
 
    return 0;
 
}

