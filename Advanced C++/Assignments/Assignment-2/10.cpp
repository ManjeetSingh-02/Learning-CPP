#include <iostream>
using namespace std;

class Clock
{
    int hrs, mins, secs;

public:
    Clock(int x, int y, int z)
    {
        hrs = x;
        mins = y;
        secs = z;
    }
    void calc()
    {
        hrs = hrs * 3600;
        mins = mins * 60;
        cout << "Total Seconds - " << hrs + mins + secs;
    }
};

int main()
{
    Clock obj(2, 15, 30);
    obj.calc();
    return 0;
}