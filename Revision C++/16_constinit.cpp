#include <iostream>
using namespace std;

const int val1{33};
constexpr int val2{34};
int val3{35}; // Run time value

constinit int age = 88;         // INITIALIZED at compile time
const constinit int age1{val1}; // const and constinit can be combined
constinit int age2{age1};       // Initializing with age would lead to a compiler error because age is not const
// constinit int age3 {val3}; // Error : val3 is evaluated at run time
//  can't const initialize age3

const constinit double weight{33.33};
// constexpr constinit double scale_factor{3.11}; Can't combine constexpr and constinit

int main()
{
    // constinit double height{1.72}; -----> ERROR, can't be declared here

    cout << "age : " << age << endl;   // 88
    cout << "age1 : " << age1 << endl; // 33
    cout << "age2 : " << age2 << endl; // 33

    age = 22;                        // Can change a const init variable
    cout << "age : " << age << endl; // 22

    // Combining const and constinit
    cout << "weight : " << weight << endl; // 33.33
    // weight = 44.44; // ERROR, can't be modified

    return 0;
}