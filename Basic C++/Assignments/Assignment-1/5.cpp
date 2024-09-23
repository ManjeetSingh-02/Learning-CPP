#include <iostream>
using namespace std;

class SHAPE
{
    double a, b;

public:
    static double area;
    void getdata(double x, double y)
    {
        a = x;
        b = y;
    }
    static void displayarea(SHAPE &s);
};

double SHAPE::area;
void SHAPE::displayarea(SHAPE &s)
{
    area = s.a * s.b;
    cout << "Area = " << area;
}

int main()
{
    SHAPE s;
    s.getdata(10, 5);
    SHAPE::displayarea(s);
    return 0;
}