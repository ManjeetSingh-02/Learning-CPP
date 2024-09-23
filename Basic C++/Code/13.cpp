#include <iostream>
using namespace std ;

class student {
    char name[10]; // will be allocated memory every time a new object is created
    int sid,score; // will be allocated memory every time a new object is created
    static char trainer[10]; // will be allocated in memory one time and will be shared among all objects
};

int main() {

    student s1,s2,s3;
    cout<<"HI";

    return 0;
}