#include <iostream>
using namespace std;

class Calculation
{
    int num1, num2;

public:
    Calculation(int x, int y)
    {
        num1 = x;
        num2 = y;
    }
    void add()
    {
        cout << "Add - " << num1 + num2 << endl;
    }
    void sub()
    {
        cout << "Sub - " << num1 - num2 << endl;
    }
    void mul()
    {
        cout << "Mul - " << num1 * num2 << endl;
    }
    void div()
    {
        cout << "Div - " << num1 / num2 << endl;
    }
};

int main()
{
    Calculation obj(10, 2);
    obj.add();
    obj.sub();
    obj.mul();
    obj.div();
    return 0;
}