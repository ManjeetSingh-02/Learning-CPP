#include <iostream>
using namespace std;

int main()
{
    float F, C;

    cout << "Enter Temp in F :" << endl;
    cin >> F;

    C = (F - 32) * (5 / 9);
    cout << "Temp in C = " << C;

    return 0;
}