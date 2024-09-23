#include <iostream>
using namespace std;

class CALCULATION
{
    int num1, num2;

public:
    void setdata(int x, int y)
    {
        num1 = x;
        num2 = y;
    }
    void add()
    {
        cout << "Addition = " << num1 + num2 << endl;
    }
    void sub()
    {
        cout << "Subtraction = " << num1 - num2 << endl;
    }
    void mul()
    {
        cout << "Multiplication = " << num1 * num2 << endl;
    }
    void div()
    {
        cout << "Division = " << num1 / num2 << endl;
    }
};

int main()
{
    CALCULATION obj;
    obj.setdata(10, 5);
    obj.add();
    obj.sub();
    obj.mul();
    obj.div();
    return 0;
}