#include <iostream>
using namespace std;

int main()
{
    int i, a[5];
    float total = 0;

    cout << "Enter Marks of 5 subjects :" << endl;
    for (i = 0; i < 5; i++)
    {
        cin >> a[i];
        total = total + a[i];
    }

    cout << "Total = " << total;
    cout << "Percentage" << (total / 500) * 100;

    return 0;
}