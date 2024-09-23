#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size - ";
    cin >> n;
    int *arr = new int[n];

    cout << "Enter Values:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Values are:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl; // Value
        cout << (arr + i) << endl; // Address
    }
    
    return 0;
}