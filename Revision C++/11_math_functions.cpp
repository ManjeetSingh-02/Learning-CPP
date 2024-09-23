#include <iostream>
#include <cmath>
using namespace std;

int main()
{
     double weight{7.7};
     double savings{-5000};
     double exponential = exp(10);

     // floor
     cout << "Weight rounded to floor is : " << floor(weight) << endl; // 7

     // ceil
     cout << "Weight rounded to ceil is : " << ceil(weight) << endl; // 8

     // abs
     cout << "Abs of weight is : " << abs(weight) << endl;   // 7.7
     cout << "Abs of savings is : " << abs(savings) << endl; // 5000

     // exp : f(x) = e ^ x , where e = 2.71828 . Test the result here against a calculator
     cout << "The exponential of 10 is : " << exponential << endl; // 22026.5

     // pow
     cout << "3 ^ 4 is : " << pow(3, 4) << endl; // 81
     cout << "9^3 is : " << pow(9, 3) << endl;   // 729

     // log : reverse function of pow. if 2^3 = 8 , log 8 in base 2 = 3.  Log is like asking to which exponent should we elevate 2 to get eight ? Log, by default computes the log in base e. There also is another function which uses base 10 called log10
     // Try the reverse operation of  e^4 = 54.59 , it will be log 54.59 in base e = ?
     cout << "Log ; to get 54.59, you would elevate e to the power of : " << log(54.59) << endl; // 3.99985
     // log10 , 10 ^ 4 = 10000  , to get 10k , you'd need to elevate 10 to the power of ? , this is log in base 10
     cout << "To get 10000, you'd need to elevate 10 to the power of : " << log10(10000) << endl; // 4

     // sqrt
     cout << "The square root of 81 is : " << sqrt(81) << endl; // 9

     // round. Halfway points are rounded away from 0. 2,5 is rounded to 5 for example
     cout << "3.654 rounded to : " << round(3.654) << endl; // 4
     cout << "2.5 is rounded to : " << round(2.5) << endl;  // 3
     cout << "2.4 is rounded to : " << round(2.4) << endl;  // 2

     return 0;
}