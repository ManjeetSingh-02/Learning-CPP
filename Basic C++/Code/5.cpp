#include <iostream>
using namespace std;

int add(int x , int y) {
    int z ;
    z = x + y ;
    return z;
}

int main()
{
    int a , b ;
    cout<<"Enter 2 numbers";
    cin>>a>>b;
    cout<<"Sum = "<<add(a , b) ;

    return 0 ;
}