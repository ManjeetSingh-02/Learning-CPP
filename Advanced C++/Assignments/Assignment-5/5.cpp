#include <iostream>
using namespace std;

class Student
{
    int mark;

public:
    Student()
    {
    }
    Student(int tmark)
    {
        mark = tmark;
    }
    bool operator==(Student tmp)
    {
        if (this->mark == tmp.mark)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Student s1(100), s2(200), s3(100);

    if (s1 == s2)
    {
        cout << "Not Same Marks";
    }
    if (s1 == s3)
    {
        cout << "Same Marks";
    }
    return 0;
}