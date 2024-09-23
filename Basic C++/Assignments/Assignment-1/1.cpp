#include <iostream>
using namespace std;

class DISTANCE
{
    int feet, inches;

public:
    static int tf, ti;
    void input(int x, int y)
    {
        feet = x;
        inches = y;
    }
    static void add(DISTANCE &tmp1, DISTANCE &tmp2);
    static void output();
};

int DISTANCE::tf, DISTANCE::ti;
void DISTANCE::add(DISTANCE &tmp1, DISTANCE &tmp2)
{
    tf = tmp1.feet + tmp2.feet;
    ti = tmp1.inches + tmp2.inches;
}
void DISTANCE::output()
{
    cout << tf << "Feet" << ti << "Inches" << endl;
}

int main()
{
    DISTANCE obj1, obj2;
    obj1.input(10, 20);
    obj2.input(20, 30);
    DISTANCE::add(obj1, obj2);
    DISTANCE::output();
    return 0;
}