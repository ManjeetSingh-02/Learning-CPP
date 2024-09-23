#include <iostream>
using namespace std;

class ATM
{
    int balance;
    double acc_no;

public:
    ATM(int b, double acc)
    {
        balance = b;
        acc_no = acc;
    }
    static int deposit(ATM &tmp, int b);
    static int withdrawl(ATM &tmp, int b);
};

int ATM::deposit(ATM &tmp, int b)
{
    tmp.balance = tmp.balance + b;
    return tmp.balance;
}

int ATM::withdrawl(ATM &tmp, int b)
{
    if (tmp.balance < b)
    {
        return -1;
    }
    else
    {
        tmp.balance = tmp.balance - b;
        return tmp.balance;
    }
}

int main()
{
    int x;
    ATM obj(1000, 11111111);
    x = ATM::deposit(obj, 200);
    cout << "After Deposit, Balance = " << x << endl;
    x = ATM::withdrawl(obj, 100);
    if (x == -1)
    {
        cout << "Not Enough Balance";
    }
    else
    {
        cout << "After Withdrawl, Balance = " << x << endl;
    }
    return 0;
}