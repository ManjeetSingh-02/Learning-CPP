#include <iostream>
using namespace std;

// template <typename T, int size> - Works same as class T
template <class T, int size> // T - int and size - 4
class A
{
public:
    T arr[size]; // int arr[4]
    T data = 20; // int data = 20
    A() // constructor
    {
        cout << "Data - " << data << endl; // 20 20 20
        cout << "Array Size - " << size << endl; // 4 4 4
        cout << "Array Bytes - " << sizeof(arr) << endl; // 16 16 32
    }
};

int main()
{
    A<int, 4> arr1; // arr is object of template class A -----> CLASSNAME<DATATYPE, SIZE> OBEJCT;
    A<float, 4> arr2;
    A<double, 4> arr3;
    return 0;
}