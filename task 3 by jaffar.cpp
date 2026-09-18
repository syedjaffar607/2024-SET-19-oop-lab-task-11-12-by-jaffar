#include <iostream>
using namespace std;

class BankAccount
{
private:
    string accountHolderName;
    double balance;

public:
    static int totalAccounts;

    BankAccount(string name, double bal)
    {
        accountHolderName = name;
        balance = bal;
        totalAccounts++;
    }

    void display()
    {
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Balance: " << balance << endl;
        cout << endl;
    }
};

int BankAccount::totalAccounts = 0;

int main()
{
    BankAccount acc1("Ali", 6000);
    BankAccount acc2("umair", 8000);
    BankAccount acc3("usman", 30000);

    acc1.display();
    acc2.display();
    acc3.display();

    cout << "Total Bank Account: "
         << BankAccount::totalAccounts << endl;

    return 0;
}