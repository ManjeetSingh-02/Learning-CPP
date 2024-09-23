#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // \n == endl ----------> New Line
    cout << "A";
    cout << "B" << endl;
    cout << "C\n";

    // flush : flushes the output buffer to its final destination, we're sure that at this line, the message has been sent to the stream. This may be important in some applications.
    cout << "This is a nice message...." << endl
         << flush;

    // setw() : Adjusts the field with for the item about to be printed, this manipulator only affects the next value to be printed.
    cout << "Unformatted table : " << endl;
    cout << "Daniel" << " " << "Gray" << " 25" << endl;
    cout << "Formatted table : " << endl;
    cout << setw(10) << "Lastname" << setw(10) << "Firstname" << setw(5) << "Age" << endl;
    cout << setw(10) << "Daniel" << setw(10) << "Gray" << setw(5) << "25" << endl;
    cout << "Formatted table with variables: " << endl;
    int col_width{14};
    cout << setw(col_width) << "Lastname" << setw(col_width) << "Firstname" << setw(col_width / 2) << "Age" << endl;
    cout << setw(col_width) << "Daniel" << setw(col_width) << "Gray" << setw(col_width / 2) << "25" << endl;

    // Justify : Values can be justified in their fields. There are three manipulators for adjusting the justification: left, right, and internal.
    // right justified
    cout << "Right justified table(default) :  " << endl;
    col_width = 20;
    cout << right;
    cout << setw(col_width) << "Lastname" << setw(col_width) << "Firstname" << setw(col_width / 2) << "Age" << endl;
    cout << setw(col_width) << "Daniel" << setw(col_width) << "Gray" << setw(col_width / 2) << "25" << endl;
    // Left justified
    cout << "Left justified table :  " << endl;
    col_width = 20;
    cout << left;
    cout << setw(col_width) << "Lastname" << setw(col_width) << "Firstname" << setw(col_width / 2) << "Age" << endl;
    cout << setw(col_width) << "Daniel" << setw(col_width) << "Gray" << setw(col_width / 2) << "25" << endl;
    // Internal justified : sign is left justified , data is right justified
    cout << endl;
    cout << "Internal justified : " << endl;
    cout << right;
    cout << setw(10) << -123.45 << endl;
    cout << internal;
    cout << setw(10) << -123.45 << endl;

    // setfill
    cout << "Table with fill characters :  " << endl;
    col_width = 20;
    cout << left;
    cout << setfill('*'); // The fill character
    cout << setw(col_width) << "Lastname" << setw(col_width) << "Firstname" << setw(col_width / 2) << "Age" << endl;
    cout << setw(col_width) << "Daniel" << setw(col_width) << "Gray" << setw(col_width / 2) << "25" << endl;

    // boolalpha and noboolapha : control bool output format : 1/0 or true/false
    bool condition{true};
    bool other_condition{false};
    cout << "condition : " << condition << endl;
    cout << "other_condition : " << other_condition << endl;
    cout << boolalpha;
    cout << "condition : " << condition << endl;
    cout << "other_condition : " << other_condition << endl;
    cout << noboolalpha;
    cout << "condition : " << condition << endl;
    cout << "other_condition : " << other_condition << endl;

    // showpos and noshowpos : show or hide the +  sign for positive numbers
    int pos_num{34};
    int neg_num{-45};
    cout << "pos_num : " << pos_num << endl;
    cout << "neg_num : " << neg_num << endl;
    cout << showpos;
    cout << "pos_num : " << pos_num << endl;
    cout << "neg_num : " << neg_num << endl;
    cout << noshowpos;
    cout << "pos_num : " << pos_num << endl;
    cout << "neg_num : " << neg_num << endl;

    // different number systems :     dec,     hex,     oct
    int pos_int{717171};
    int neg_int{-47347};
    double double_var{498.32};
    cout << "default base format : " << endl;
    cout << "pos_int : " << pos_int << endl;
    cout << "neg_int : " << neg_int << endl;
    cout << "double_var : " << double_var << endl;
    cout << "pos_int in different bases : " << endl;
    cout << "pos_int (dec) : " << dec << pos_int << endl;
    cout << "pos_int (hex) : " << hex << pos_int << endl;
    cout << "pos_int (oct) : " << oct << pos_int << endl;
    cout << "neg_int in different bases : " << endl;
    cout << "neg_int (dec) : " << dec << neg_int << endl;
    cout << "neg_int (hex) : " << hex << neg_int << endl;
    cout << "neg_int (oct) : " << oct << neg_int << endl;
    cout << "double_var in different bases : " << endl;
    cout << "double_var (dec) : " << dec << double_var << endl;
    cout << "double_var (hex) : " << hex << double_var << endl;
    cout << "double_var (oct) : " << oct << double_var << endl;
    // uppercase and nouppercase
    pos_int = 717171;
    cout << "pos_int (nouppercase : default) : " << endl;
    cout << "pos_int (dec) : " << dec << pos_int << endl;
    cout << "pos_int (hex) : " << hex << pos_int << endl;
    cout << "pos_int (oct) : " << oct << pos_int << endl;
    cout << "pos_int (uppercase) : " << endl;
    cout << uppercase;
    cout << "pos_int (dec) : " << dec << pos_int << endl;
    cout << "pos_int (hex) : " << hex << pos_int << endl;
    cout << "pos_int (oct) : " << oct << pos_int << endl;

    // fixed and scientific : for floating point values
    double a{3.1415926535897932384626433832795};
    double b{2006.0};
    double c{1.34e-10};
    cout << "double values (default : use scientific where necessary) : " << endl;
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
    cout << "c : " << c << endl;
    cout << "double values (fixed) : " << endl;
    cout << fixed;
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
    cout << "c : " << c << endl;
    cout << "double values (scientific) : " << endl;
    cout << scientific;
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
    cout << "c : " << c << endl;
    cout << "double values (back to defaults) : " << endl;
    cout.unsetf(ios::scientific | ios::fixed); // Hack
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
    cout << "c : " << c << endl;

    // setprecision() : the number of digits printed out for a floating point. Default is 6
    // If the precision is bigger than supported by the type, you'll just print garbage.
    a = 3.1415926535897932384626433832795;
    cout << "a (default precision(6)) : " << a << endl;
    cout << setprecision(10);
    cout << "a (precision(10)) : " << a << endl;
    cout << setprecision(20);
    cout << "a (precision(20)) : " << a << endl;

    // showpoint and noshowpoint : show trailing zeros if necessary, force output of the decimal point
    double d{34.1};
    double e{101.99};
    double f{12.0};
    int g{45};
    cout << "noshowpoint (default) : " << endl;
    cout << "d : " << d << endl;
    cout << "e : " << e << endl;
    cout << "f : " << f << endl; // 12
    cout << "g : " << g << endl;
    cout << "showpoint: " << endl;
    cout << showpoint;
    cout << "d : " << d << endl;
    cout << "e : " << e << endl;
    cout << "f : " << f << endl; // 12.0
    cout << "g : " << g << endl;

    return 0;
}