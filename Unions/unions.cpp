#include <iostream>

using namespace std;

union unia //tak definiujemy unię
{
    float u_zm1;
    short int u_zm2;
};

int main()
{
    unia pierw_unia;
    pierw_unia.u_zm2 = 456;
    pierw_unia.u_zm1 = 123.45; //ostatnia operacja w unii bazuje na u_zm1;
    cout << "Zmienna aktualna w unii: " << pierw_unia.u_zm1 << " - u_zm1\n";
    cout << "Zmienna nie aktualna w unii: " << pierw_unia.u_zm2 << " - u_zm2\n";
    pierw_unia.u_zm1 = 123.45;
    pierw_unia.u_zm2 = 456; //ostatnia operacja w unii bazuje na u_zm2
    cout << "Zmienna aktualna w unii: " << pierw_unia.u_zm2 << " - u_zm2\n";
    cout << "Zmienna nie aktualna w unii: " << pierw_unia.u_zm1 << " - u_zm1\n";
}