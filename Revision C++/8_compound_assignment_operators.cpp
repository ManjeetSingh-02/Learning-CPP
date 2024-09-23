#include <iostream>
using namespace std;

int main()
{

    int value{45};
    cout << value << endl; // 45

    value = value + 5;
    cout << value << endl; // 50

    value -= 5;
    cout << value << endl; // 45

    value *= 2;
    cout << value << endl; // 90

    value /= 3;
    cout << value << endl; // 30

    value %= 11;
    cout << value << endl; // 8
    
    return 0;
}