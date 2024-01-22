#include "Complex.h"

int main()
{
    double re2 = 5;
    double im2 = -9;
    Complex c1 = Complex();
    Complex c2 = Complex(re2, im2);
    cout << "c1 = " << c1 << endl;
    cout << "c2 = " << c2 << endl;
    cout << "c1.GetReal() = " << c1.GetReal() << endl;
    cout << "c2.GetImagin() = " << c2.GetImagin() << endl;
    c1.SetReal(-10);
    c1.SetImagin(2);
    cout << "new c1 = " << c1 << endl;
    Complex c3 = c1 + c2;
    cout << "c1 + c2 = " << c3 << " = c3" << endl;
    cout << "c1 - c2 = " << c1 - c2 << endl;
    Complex c1c2 = c1 * c2;
    cout << "c1 * c2 = " << c1c2 << endl;
    Complex c3_c2 = c3 / c2;
    cout << "c3 / c2 = " << c3_c2 << endl;
    c1 += c2;
    cout << "c1 += c2: " << c1 << endl;
    c2 -= c1;
    cout << "c2 -= c1: " << c2 << endl;
    Complex c4 = Complex(c1);
    cout << "c4 = " << c4 << endl;
    cout << "c1 == c4: " << (c1 == c4) << endl;
    cout << "c1 != c2: " << (c1 != c2) << endl;
    cout << "c2 > c1: " << (c2 > c1) << endl;
    cout << "c3 < c2: " << (c3 < c2) << endl;
    cout << "c4.absolut() = " << (c4.absolut()) << endl;
    double lvl = 2;
    cout << "c4.powerup(2) = " << (c4.powerup(lvl)) << endl;
}