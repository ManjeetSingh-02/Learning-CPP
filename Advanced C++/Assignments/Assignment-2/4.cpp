#include <iostream>
#define PI 3.14f
using namespace std;

class Area
{
    int radius;

public:
    void setDim(int x)
    {
        radius = x;
    }
    void getArea()
    {
        cout << "Area - " << PI * radius * radius;
    }
};

int main()
{
    Area obj;
    obj.setDim(10);
    obj.getArea();
    return 0;
}