#include <iostream>
using namespace std;

class Shape
{
public:
    int height, width;
    Shape()
    {
    }
};

class Triangle : Shape
{
public:
    Triangle(int x, int y)
    {
        Shape::height = x;
        Shape::width = y;
    }
    void getTArea()
    {
        cout << "Area of Triangle - " << (height * width) / (float)2 << endl;
    }
};

class Rectangle : Shape
{
public:
    Rectangle(int x, int y)
    {
        Rectangle::height = x;
        Rectangle::width = y;
    }
    void getRArea()
    {
        cout << "Area of Rectangle - " << (height * width) << endl;
    }
};

int main()
{
    Triangle t(10, 2);
    t.getTArea();
    Rectangle r(10, 2);
    r.getRArea();
    return 0;
}