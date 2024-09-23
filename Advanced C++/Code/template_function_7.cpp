#include <iostream>
using namespace std;

class Date
{
private:
    int day, mon, year;

public:
    Date()
    {
    }
    Date(int d, int m, int y)
    {
        day = d;
        mon = m;
        year = y;
    }

    friend ostream &operator<<(ostream &o, Date &dt);
};

ostream &operator<<(ostream &o, Date &dt)
{
    o << dt.day << "/" << dt.mon << "/" << dt.year;
    return o;
}

template <typename T>
T mySwap(T &a, T &b)
{
    T x;
    x = a;
    a = b;
    b = x;
}

int main()
{
    int i = 10, j = 20;
    mySwap<int>(i, j);
    cout << i << "\t" << j << endl;
    char ch = 'A', dh = 'D';
    mySwap<char>(ch, dh);
    cout << ch << "\t" << dh << endl;
    Date dt1(17, 11, 2021), dt2(23, 11, 2023);
    mySwap<Date>(dt1, dt2);
    cout << dt1 << "\t" << dt2;
    return 0;
}