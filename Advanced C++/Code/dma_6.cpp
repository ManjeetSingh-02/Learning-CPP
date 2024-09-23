#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter n - ";
    cin >> n;

    int *ptr = new int[n];

    cout << sizeof(ptr) << endl; // 4, ptr is of int type
    cout << sizeof(n * (*ptr)) << endl; // 4
    cout << (n * sizeof(int)) << endl; // 20
    cout << sizeof(n * sizeof(int)) << endl; // 4

    return 0;
}