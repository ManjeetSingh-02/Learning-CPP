#include <iostream>
using namespace std;

int main()
{
    int i, a[5];
    float total = 0;

    cout << "Enter Temp of 5 cities :" << endl;
    for (i = 0; i < 5; i++)
    {
        cin >> a[i];
        total = total + a[i];
    }

    cout << total / 5;

    return 0;
}