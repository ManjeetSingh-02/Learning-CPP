#include <iostream>
using namespace std ;

class employee {
    public:
    int a;
    int b;
    static int c;
};

int employee::c; // allocating memory to static member outside the class

int main() {

    employee e1;

    e1.a = 10; // no error , memory allocated cuz of instance variable
    e1.b = 20; // no error , memory allocated cuz of instance variable
    e1.c = 30; // error , memory not allocated cuz of static variable

    cout<<e1.a<<e1.b<<e1.c;

    return 0;
}