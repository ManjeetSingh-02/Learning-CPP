#include <iostream>
using namespace std;

template <typename T>
void mymax(T arr[], T n) // Values
{
    int i, j, t;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
}

int main()
{
    int i, j, arr[4] = {5, 9, 3, 1};
    mymax(arr, 4);

    for (i = 0; i < 4; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}