#include <iostream>

using namespace std;

class Account
{
private:
    string name;
    float balance;

public:
    Account(string, float);
    ~Account();
    void showAccount() const;
    const Account & topVal(const Account & s) const;
};

int main()
{
    Account tablica[4] = {
        Account("Bob", 243.66),
        Account("Robert", 555),
        Account("Pawel", 666),
        Account("Diabel", 642.25), 
    };
    
    for (int i = 0; i < 4; i++)
    {
        tablica[i].showAccount();
    }

    const Account * top = &tablica[0];
    for (int i = 0; i < 4; i++)
    {
        top = &top->topVal(tablica[i]); 
    }

    cout << "Najwieksza wartosc w pakiecie to: " << endl;
    top->showAccount();

    return 0;
}

Account::Account(string name, float balance)
{
    this->name = name;
    this->balance = balance;
}

Account::~Account()
{
    cout << "Account deleted." << endl;
}

void Account::showAccount() const
{
    cout << "Name: " << name << endl;
    cout << "Balance: " << balance << endl;
}

const Account & Account::topVal(const Account & s) const
{
    if (s.balance > balance) return s;
    else return *this;
}