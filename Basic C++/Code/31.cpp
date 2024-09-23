#include <iostream>
#include <math.h>
using namespace std;
class B
{
    int a, b, c;

public:
    // Method Overloading
    void area(int x)
    {
        float ans;
        cout << "Circle Area is: ";
        a = x;
        ans = (3.14) * a * a;
        cout << ans << endl;
    }
    void area(int x, int y)
    {
        float ans;
        cout << "Rectangle Area is: ";
        a = x;
        b = y;
        ans = a * b;
        cout << ans << endl;
    }
    void area(int x, int y, int z)
    {
        float S, ans;
        cout << "Triangle Area is: ";
        a = x;
        b = y;
        c = z;
        S = (a + b + c) / 2;
        ans = sqrt(S * (S - a) * (S - b) * (S - c));
        cout << ans << endl;
    }
};

int main()
{
    B obj;
    obj.area(10);
    obj.area(10, 20);
    obj.area(7, 6, 5);

    return 0;
}