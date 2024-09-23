#include <iostream>
using namespace std;

int main()
{
    // 0 ------> False
    // 1 ------> True
    cout << sizeof(bool) << endl; // 1 byte

    bool red_light{false};
    bool green_light{true};

    cout << red_light << endl;   // 0
    cout << green_light << endl; // 1

    cout << boolalpha;
    cout << red_light << endl;   // false
    cout << green_light << endl; // true

    return 0;
}