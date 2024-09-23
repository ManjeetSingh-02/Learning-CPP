#include <iostream>
using namespace std;

inline float multi(float x , float y) {
    return x*y;
}

int main() {

    cout<<multi(12.43f, 3.14f);
    return 0 ;
}