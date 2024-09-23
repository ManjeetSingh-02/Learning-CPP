#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cin >> a;
    cin >> b;
    // If user gives proper value, it won't give any runtime error
    // If b = 0, it will become divide by 0 and it will give runtime error
    // In this also, runtime error will depend on user's input
    cout << a / b << endl;
    cout << "THANKS";
    return 0;
}