

#include <iostream>
#include "fraction.h"

using namespace std;
using namespace mathlib;

int main()
{
    Fraction<> fraction1{ 15, 5 };
    cout << fraction1 << std::endl;

    Fraction<> fraction2{ 15, 6 };
    fraction2.Simplify();
    cout << fraction2 << std::endl;

    cout << fraction1 << " == " << fraction2 << " result: " << (fraction1 == fraction2) << endl;
    cout << fraction1 << " > " << fraction2 << " result: " << (fraction1 > fraction2) << endl;

    cout << fraction1 << " + " << fraction2 << " result: " << (fraction1 + fraction2) << endl;
    cout << fraction1 << " * " << fraction2 << " result: " << (fraction1 * fraction2) << endl;

    Fraction<> fraction3;
    cout << "input fraction (numerator - denominator): \n";
    cin >> fraction3;
    cout << fraction3 << std::endl;
    cout << fraction3.toDouble() << std::endl;
}
