#include <iostream>
using namespace std;
class B
{
    int a, b;

public:
    // Method Overloading
    void logic()
    {
        cout << "No argument method\n";
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
    void logic(int x)
    {
        cout << "One argument method\n";
        a = x;
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
    void logic(int x, int y)
    {
        cout << "Two argument method\n";
        a = x;
        b = y;
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

int main()
{
    B obj;
    obj.logic();
    obj.logic(10);
    obj.logic(10, 20);
    return 0;
}