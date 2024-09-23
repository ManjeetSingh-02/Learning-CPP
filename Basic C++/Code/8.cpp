#include <iostream>
using namespace std;

// int cube(int x) { -------------------- As a normal(), it will send control to that function from main()
//     return x*x*x;
// }

inline int cube(int x) { // -------------------- As a inline(), it will be request compiler and control won't be sent to the function
    return x*x*x;
}

int main() {

    cout<<cube(5);

    return 0 ;
}