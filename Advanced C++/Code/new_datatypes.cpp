#include <iostream>
using namespace std;

int main()
{
    bool c1 = true;
    bool c2 = false;
    auto a = 10;     // auto datatype can store any type of value(int, string, float, double, char)
    string s = "HI"; // string

    cout << a << endl;  // 10
    cout << s << endl;  // HI
    cout << c1 << endl; // 1 - true
    cout << c2 << endl; // 0 - false
    return 0;
}