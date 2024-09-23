#include <iostream>
using namespace std;

class Student
{
    int x, y, z;

public:
    Student()
    {
    }
    Student(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    Student operator*(Student tmp)
    {
        Student tmp2;
        tmp2.x = this->x * tmp.x;
        tmp2.y = this->y * tmp.y;
        tmp2.z = this->z * tmp.z;
        return tmp2;
    }
    void get()
    {
        cout << x << endl;
        cout << y << endl;
        cout << z << endl;
    }
};

int main()
{
    Student s1(1, 2, 3), s2(4, 5, 6), s3;
    s3 = s1 * s2;
    s3.get();
}