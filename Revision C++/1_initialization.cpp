#include <iostream>
using namespace std;

int main()
{
    // Declaration
    int a; // Initialized - Garbage
    cout << a << endl;

    // Declared, Assignment Initialization
    int f = 6;   // Initialized - 6
    int F = 2.9; // Initialized - 2 & .9 will be discarded
    cout << f << endl;
    cout << F << endl;

    // Declared, Braced Initialization
    int b{};      // Initialized - 0
    int c{2};     // Initialized - 2
    int d{3};     // Initialized - 3
    int e{c + d}; // Initialized - 5
    // int E{2.9}; --------> ERROR TYPE CONVERSION
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;

    // Declared, Functional Initialization
    int x(2);     // Initialized - 2
    int y(4);     // Initialized - 4
    int z(x + y); // Initialized - 6
    int Z(2.9);   // Initialized - 2 & .9 will be discarded
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;
    cout << Z << endl;

    return 0;
}