#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter a :" << endl;
    cin >> a;
    cout << "Enter b :" << endl;
    cin >> b;

    string c = a % 2 == 0 ? "Even" : "Odd";
    cout << c;

    return 0;
}