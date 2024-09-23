#include <iostream>
using namespace std;

int main()
{
    unsigned char data{250};
    ++data;
    cout << "data : " << static_cast<int>(data) << endl; // 251
    ++data;
    cout << "data : " << static_cast<int>(data) << endl; // 252
    ++data;
    cout << "data : " << static_cast<int>(data) << endl; // 253
    ++data;
    cout << "data : " << static_cast<int>(data) << endl; // 254
    ++data;
    cout << "data : " << static_cast<int>(data) << endl; // 255

    ++data;                                              // Overflow
    cout << "data : " << static_cast<int>(data) << endl; // 0 in place of 256

    cout << dec;

    data = 1;
    --data;
    cout << "data : " << static_cast<int>(data) << endl; // 0

    --data;                                              // Underflow
    cout << "data : " << static_cast<int>(data) << endl; // 255 in place of -1

    return 0;
}