#include <iostream>
using namespace std;

class Date
{
private:
    int day, mon, year;

public:
    Date(int d, int m, int y)
    {
        day = d;
        mon = m;
        year = y;
    }

    int operator<(Date dt) // < OPERATOR OVERLOADING , COMPARING DATE , ARGUMENTS 2 and ONE HIDDEN
    {
        if (this->year < dt.year) // this - dt1 and dt - dt2
        {
            return 1;
        }
        if (this->year == dt.year && this->mon < dt.mon)
        {
            return 1;
        }
        if (this->year == dt.year && this->mon == dt.mon && this->day < dt.day)
        {
            return 1;
        }
        return 0;
    }
    friend ostream &operator<<(ostream &o, Date &dt); // << OPERATOR OVERLOADING USING FRIEND FUNCTION , PRINTING OBJECT , ARGUMENTS 2 and NO ONE HIDDEN
};

ostream &operator<<(ostream &o, Date &dt) // cout is object of ostream class amnd tmp is object of Date class
{
    o << dt.day << "/" << dt.mon << "/" << dt.year; // PRINTING OBJECT VALUES
    return o;
}

template <typename T>
T Logic(T &a, T &b) // COMPARING TWO NUMBERS
{
    return (a < b) ? a : b;
}

int main()
{
    int i = 10, j = 20;
    cout << Logic<int>(i, j) << endl;
    Date dt1(17, 11, 2021), dt2(23, 11, 2023);
    Date tmp = Logic<Date>(dt1, dt2);
    cout << tmp; // Here Operator is overloaded, so both cout and tmp are objects
    return 0;
}