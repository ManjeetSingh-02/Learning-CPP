#include <iostream>
using namespace std;

template <typename T, typename P>
void max(T x, P y)
{
    if (x > y)
    {
        cout << x << endl;
    }
    else
    {
        cout << y << endl;
    }
}

template <typename T>
void mymax(T x, T y)
{
    if (x > y)
    {
        cout << x << endl;
    }
    else
    {
        cout << y << endl;
    }
}

int main()
{
    // Single Template
    mymax<int>(10, 12);
    mymax<float>(2.1f, 3.2f);
    mymax<double>(45.2, 37.4);
    mymax<char>('R', 'F');

    // Double Template
    max<int, int>(5, 4);
    max<float, float>(12.1f, 13.2f);
    max<double, double>(15.2, 17.4);
    max<char, char>('A', 'D');

    // Template Overloading
    max<int, float>(10, 12.4f);

    return 0;
}