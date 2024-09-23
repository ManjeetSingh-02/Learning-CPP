#include <iostream>
using namespace std;
class SHAPE
{
public:
    static int x, y;
    static void setdata(int a, int b);
};

int SHAPE::x, SHAPE::y;
void SHAPE::setdata(int a, int b)
{
    x = a;
    y = b;
}

class TRIANGLE : public SHAPE
{
    int area;

public:
    void area_triangle()
    {
        area = 0.5 * x * y;
        cout << "Area of Triangle = " << area << endl;
    }
};

class RECTANGLE : public SHAPE
{
    int area;

public:
    void area_rectangle()
    {
        area = x * y;
        cout << "Area of Rectangle = " << area << endl;
    }
};

int main()
{
    SHAPE obj;
    SHAPE::setdata(5, 10);
    TRIANGLE obj1;
    obj1.area_triangle();
    RECTANGLE obj2;
    obj2.area_rectangle();
    return 0;
}