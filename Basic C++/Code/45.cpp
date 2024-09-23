#include <iostream>
using namespace std;

class A
{
public:
    void pub_fun()
    {
        cout << "A class public" << endl;
    }

protected:
    void pro_fun()
    {
        cout << "A class protected" << endl;
    }

private:
    void pri_fun()
    {
        cout << "A class private" << endl;
    }
};

class B : public A
{
public:
    void p_get()
    {
        pub_fun(); // with-in and out-side
        pro_fun(); // with-in
        // pri_fun(); not accessible
    }
};

int main()
{
    B obj;
    obj.p_get();
    cout << endl;
    obj.pub_fun(); // outside of A class public
    return 0;
}