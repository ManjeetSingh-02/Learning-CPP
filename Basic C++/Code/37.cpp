#include <iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout << "A Class Constructor";
    }
};

// A is Parent Class
// B is Child Class
// A & B has ISA Relationship
// class B : public A [:] is inheritance

class B : public A
{
public:
    B() // B():A() --- this is done implicitly if only B() is written
    {
        cout << "B Class Constructor";
    }
};

// B class Constructor Called B Class Constructor first but as it has a parent then child class constructor called parent class constructor and executed parent constructor first then executed child constructor

int main()
{
    cout << "HI";
    A ob1;
    cout << "GOOD";
    B ob2; // [B Constructor Called --- A Constructor Called --- A Constructor Executed --- B Constructor Executed]
    cout << "GREAT";
    return 0;
}

// HI
// A Class Constructor
// GOOD
// A Class Constructor
// B Class Constructor
// GREAT