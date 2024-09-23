#include <iostream>
using namespace std;

class ATM
{
    int Accountno, balance = 0;

public:
    ATM(int acno, int bal)
    {
        Accountno = acno;
        balance = bal;
    }
    void Deposit(int bal)
    {
        balance = balance + bal;
        cout << "Amount Added, Balance - " << balance << endl;
    }
    void Withdrawl(int bal)
    {
        if (balance == 0)
        {
            cout << "Balance is 0" << endl;
        }
        else if (bal > balance)
        {
            cout << "Withdrawl Amount is greater" << endl;
        }
        else
        {
            balance = balance - bal;
            cout << "Amount Deducted, Balance - " << balance << endl;
        }
    }
    void Balance()
    {
        cout << "Balance - " << balance << endl;
    }
};

int main()
{
    int n;
    ATM obj(101, 1000);

    cout << "1 - Deposit" << endl;
    cout << "2 - Withdrawl" << endl;
    cout << "3 - Display Balance" << endl;
    cout << "4 - Exit" << endl;
    cout << "Select Choice - ";

    cin >> n;

    if (n == 1)
    {
        int x;

        cout << "Enter Amount - ";
        cin >> x;
        obj.Deposit(x);
    }
    else if (n == 2)
    {
        int x;

        cout << "Enter Amount - ";
        cin >> x;
        obj.Withdrawl(x);
    }
    else if (n == 3)
    {
        obj.Balance();
    }
    else
    {
        cout << "Thanks for using ATM";
    }
    return 0;
}