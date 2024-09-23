#include <iostream>
using namespace std;

class Area
{
    int length, breadth;

public:
    Area(int x, int y)
    {
        length = x;
        breadth = y;
    }
    void getArea()
    {
        cout << "Area - " << length * breadth;
    }
};

int main()
{
    Area obj(10, 2);
    obj.getArea();
    return 0;
}