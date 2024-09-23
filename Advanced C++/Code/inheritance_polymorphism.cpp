#include <iostream>
using namespace std;

class A {
    public:
    void area() {
        cout << "HI";
    }
    void area(int x) {
        cout << "HI2";
    }
    void area(int x, int y) {
        cout << "HI3";
    }
};

int main() {
    
    A obj;
    obj.area();
    obj.area(5);
    obj.area(5,6);

    return 0;
}


// class A {                           <============ No Overloading in Multiple Class, only single class
//     public:
//     void area() {
//         cout << "HI";
//     }
// };

// class B : public A {
//     public:
//     void area(int x) {
//         cout << "HI2";
//     }
//     void area(int x, int y) {
//         cout << "HI3";
//     }
// }

// int main() {
//     B obj;

//     obj.area();
//     obj.area(5);
//     obj.area(5,6);

//     return 0;
// }