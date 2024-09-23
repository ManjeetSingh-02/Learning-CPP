#include <iostream>
#include <iomanip> // setprecision()
using namespace std;

int main()
{
    float number1{1.12345678901234567890F};       // Precision : 7
    double number2{1.12345678901234567890};       // Precision : 15
    long double number3{1.12345678901234567890L}; // Precision : 15+

    cout << sizeof(float) << endl;       // 4 bytes
    cout << sizeof(double) << endl;      // 8 bytes
    cout << sizeof(long double) << endl; // 16 bytes

    cout << setprecision(20); // Control the precision from cout.
    cout << number1 << endl;  // 7 digits
    cout << number2 << endl;  // 15'ish digits
    cout << number3 << endl;  // 15+ digits

    float number4 = 192400023.0F; // ERROR ----> narrowing conversion
    cout << number4 << endl;      // 192400016

    double number10{5.6};
    double number11{-5.6};
    double number12{};
    double number13{};

    double result1{number10 / number12};  // +INFINITY
    double result2{number11 / number12};  // -INFINITY
    double result3 = number12 / number13; // NaN

    return 0;
}