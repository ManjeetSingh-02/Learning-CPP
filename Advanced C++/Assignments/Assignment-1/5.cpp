#include <iostream>
using namespace std;

int main()
{
    float P, R, N, SI;

    cout << "Enter P :" << endl;
    cin >> P;
    cout << "Enter R :" << endl;
    cin >> R;
    cout << "Enter N :" << endl;
    cin >> N;

    SI = (P * R * N) / 100;

    cout << "SI = " << SI;

    return 0;
}