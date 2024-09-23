#include <iostream>
using namespace std;

class Sport;

class Student
{
    int Roll_no, mark1, mark2, mark3, result;

public:
    void set(int id, int m1, int m2, int m3)
    {
        Roll_no = id;
        mark1 = m1;
        mark2 = m2;
        mark3 = m3;
    }
    void calc(Sport &obj);
};

class Sport
{
    int sport_mark;

public:
    Sport(int sm)
    {
        sport_mark = sm;
    }
    friend void Student::calc(Sport &);
};

void Student::calc(Sport &obj)
{
    result = mark1 + mark2 + mark3 + obj.sport_mark;
    cout << "Result - " << result;
}

int main()
{
    Student s1;
    s1.set(101, 10, 20, 30);
    Sport obj(80);
    s1.calc(obj);
    return 0;
}