#include <iostream>
using namespace std;

int main()
{
    // 1 byte in memory : 2^8 = 256 different values (0 ~ 255)
    char character1{'a'};
    cout << character1 << endl; // a

    char value = 65;       // ASCII character code for 'A'
    cout << value << endl; // A
    cout << static_cast<int>(value) << endl;

    return 0;
}