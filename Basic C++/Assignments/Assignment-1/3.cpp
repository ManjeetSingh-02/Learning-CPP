#include <iostream>
using namespace std;

class TIME
{
    int hours, minutes, seconds;

public:
    static int th, tm, ts;
    TIME()
    {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }
    TIME(int h, int m, int s)
    {
        hours = h;
        minutes = m;
        seconds = s;
    }
    static void add(TIME &tmp1, TIME &tmp2);
    static void display();
};

int TIME::th, TIME::tm, TIME::ts;
void TIME::add(TIME &tmp1, TIME &tmp2)
{
    th = tmp1.hours + tmp2.hours;
    tm = tmp1.minutes + tmp2.minutes;
    ts = tmp1.seconds + tmp2.seconds;
}
void TIME::display()
{
    cout << "TIME - " << th << ":" << tm << ":" << ts << endl;
}

int main()
{
    TIME t1(5, 30, 30), t2(6, 10, 10);
    TIME::add(t1, t2);
    TIME::display();
    return 0;
}