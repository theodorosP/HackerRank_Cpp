//Some C++ data types, their format specifiers, and their most common bit widths are as follows:
//Int ("%d"): 32 Bit integer
//Long ("%ld"): 64 bit integer
//Char ("%c"): Character type
//Float ("%f"): 32 bit real value
//Double ("%lf"): 64 bit real value

# include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int My_int;
    long My_long;
    char My_char;
    float My_float;
    double My_double;
    cin >> My_int >> My_long >> My_char >> My_float >> My_double;
    cout << My_int << endl;
    cout << My_long << endl;
    cout << My_char << endl;
    cout << fixed << setprecision(3) << My_float << endl;
    cout << fixed << setprecision(9) << My_double << endl ;
    return 0;
}
