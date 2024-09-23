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
        // cout << string("Chintu Chinkara Ji").substr(n); Throws RUNTIME ERROR IMPLICITLY VIA RUNTIME ENVIROMENT
        // throw out_of_range("ERROR"); Thows ERROR EXPLICITLY via CODER
        cout << string("Chintu Chinkara Ji").substr(n) << endl;
    }
    catch (out_of_range &e)
    {
        // what() throws technical error message of the exception
        cout << e.what() << endl;
        cout << "Out of Range" << endl;
    }
    cout << "in MPGI Campus ||" << endl;
    cout << "Thanks ||";
    return 0;
}