#include <iostream>
using namespace std;
int arr[4] = {5, 9, 3, 1};

template <typename T>
void mymax(T x, T y) // Indexes
{
    if (arr[x] > arr[y])
    {
        int t = arr[x];
        arr[x] = arr[y];
        arr[y] = t;
    }
}

int main()
{
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = i + 1; j < 4; j++)
        {
            mymax<int>(i, j);
        }
    }

    for (i = 0; i < 4; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}