#include <iostream>
using namespace std;

class ATM
{
    int Accountno, balance = 0;

public:
    void deposit(int acno, int bal)
    {
        Accountno = acno;
        balance = balance + bal;
        cout << "Amount Added, Balance - " << balance << endl;
    }
    void withdrawl(int bal)
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
};

int main()
{
    ATM obj;
    obj.deposit(101, 0);
    obj.withdrawl(100);
    return 0;
}