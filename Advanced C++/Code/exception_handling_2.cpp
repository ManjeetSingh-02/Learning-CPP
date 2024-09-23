#include <iostream>
#include <stdexcept>
#include <exception>
using namespace std;

int main()
{
    int n;

    cin >> n;
    cout << "Welcome Dear" << endl;
    try
    {
        cout << string("Chintu Chinkara Ji").substr(n) << endl;
    }
    // `...` can be used in place of catch(out_of_range &e) if we don't know the error
    catch (...)
    {
    }
    cout << "in MPGI Campus ||" << endl;
    cout << "Thanks ||";
    return 0;
}