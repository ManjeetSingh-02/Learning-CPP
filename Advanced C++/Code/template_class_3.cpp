#include <iostream>
using namespace std;

template <class T, int size>
class A
{
    T arr[size];

public:
    void set(int x)
    {
        static int i = 0;
        arr[i] = x;
        i++;
    }
    void get()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << endl;
        }
    }
};

int main()
{
    A<int, 4> arr1;
    for (int i = 0; i < 4; i++)
    {
        arr1.set(i + 10);
    }
    arr1.get();
    return 0;
}