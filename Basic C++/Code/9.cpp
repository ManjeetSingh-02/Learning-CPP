#include <iostream>
using namespace std;

#define cube(X) X*X*X // as a macro() if we pass expression, it will be replaced

int main() {

    cout<<cube(3+2); // 3+2*3+2*3+2 => 3+6+6+2 => 17

    return 0 ;
}