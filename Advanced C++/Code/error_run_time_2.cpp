#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;
    cout << "Welcome Dear";
    // cout << string("Chintu Chinkara Ji").substr(37); It will give runtime error/throw an exception as 37 index is not there and program will abnomally terminate
    // cout << string("Chintu Chinkara Ji").substr(n); Now it will depend of user's input to throw exception or not
    cout << string("Chintu Chinkara Ji").substr(n);
    cout << " in MPGI Campus || \n";
    cout << " Thanks ||";
    return 0;
}