#include <iostream>
#include <math.h>
using namespace std;

class MAIN_CLASS
{
public:
    void logic(double m, int n)
    {
        cout << "A - " << pow(m, n) << endl;
    }
    void logic(int m, int n)
    {
        cout << "B - " << pow(m, n) << endl;
    }
};

int main()
{
    MAIN_CLASS obj;
    obj.logic(5.0, 2);
    obj.logic(10, 2);
    return 0;
}