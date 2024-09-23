#include <iostream>
using namespace std;

int main()
{
    // CONSTANT EXPRESSIONS VALUES ARE KNOWN AT COMPILE TIME
    // NON-CONSTANT EXPRESSIONS VALUES ARE NOT KNOWN AT COMPILE TIME
    constexpr int SOME_LIB_MAJOR_VERSION{1237};
    constexpr int eye_count{2};
    constexpr double PI{3.14};

    // eye_count = 4; cant be modified

    // int leg_count {2}; -------> Non constexpr and it is not known at compile time
    // constexpr int arm_count{leg_count}; ----> Error

    constexpr int room_count{10};
    constexpr int door_count{room_count}; // OK
    const int table_count{5};
    constexpr int chair_count{table_count * 5}; // Works

    // STATIC ASSERTION is used to check if a condition is true when the code is compiled, if not then compilation will stop at that point
    // static_assert(SOME_LIB_MAJOR_VERSION == 123); -------> ERROR
    // static_assert(SOME_LIB_MAJOR_VERSION == 1237); ------> OK

    // int age = 5;
    // static_assert(age == 5); -------> ERROR as non-constant values are not available at compile time

    return 0;
}