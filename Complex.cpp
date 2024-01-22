#include "Complex.h"

double Complex::GetReal()const {
    return this->re;
}

double Complex::GetImagin()const {
    return this->im;
}

const Complex& Complex::GetComplex()const {
    return *this;
}

void Complex::SetReal(double newre) {
    this->re = newre;
}

void Complex::SetImagin(double newim) {
    this->im = newim;
}

void Complex::SetComplex(double newre, double newim) {
    this->SetReal(newre);
    this->SetImagin(newim);
}


bool Complex:: operator > (Complex& com)
{
    if (this->re > com.re)
        return 1;
    else if (this->re == com.re && this->im > com.im)
        return 1;
    else
        return 0;
}

bool Complex ::operator < (Complex& com)
{
    if (this->re < com.re)
        return 1;
    else if (this->re == com.re && this->im < com.im)
        return 1;
    else
        return 0;

}

bool Complex::operator != (Complex& com)
{
    if (this->re != com.re || this->im != com.im)
        return 1;
    else
        return 0;
}

bool Complex::operator==(Complex& com)
{
    if (this->re == com.re && this->im == com.im)
        return 1;
    else
        return 0;
}



Complex Complex::operator*(Complex& com)
{
    double i, j;
    i = re * com.re - im * com.im;
    j = re * com.im + com.re * im;
    re = i;
    im = j;
    return *this;
}

Complex Complex::operator/(Complex& com)
{
    double i, j, k;
    k = re * re + com.im * com.im;
    i = (re * com.re + im * com.im) / k;
    j = (com.re * im - re * com.im) / k;
    re = i;
    im = j;
    return *this;
}

Complex& Complex::operator =(Complex com)
{
    this->re = com.re;
    this->im = com.im;
    return *this;
}

Complex Complex::operator+(Complex com)
{
    this->re = this->re + com.re;
    this->im = this->im + com.im;
    return *this;
}

Complex Complex::operator-(Complex com)
{
    this->re = this->re - com.re;
    this->im = this->im - com.im;
    return *this;
}


std::ostream& operator << (std::ostream& out, const Complex& com)
{
    if (com.im < 0)
        out << com.re << com.im << "i";
    else
        out << com.re << "+" << com.im << "i";
    return out;
}

std::istream& operator >> (std::istream& in, Complex& com)
{
    std::cout << "Enter Real Part: ";
    in >> com.re;
    std::cout << "Enter Imaginary Part: ";
    in >> com.im;
    return in;
}

Complex& Complex::operator+=(Complex a)
{
    re += a.re;
    im += a.im;
    return *this;
}

Complex& Complex::operator-=(Complex a)
{
    re -= a.re;
    im -= a.im;
    return *this;
}

Complex& Complex::operator*=(Complex a)
{
    re *= a.re;
    im *= a.im;
    return *this;
}

Complex& Complex::operator/=(Complex a)
{
    re /= a.re;
    im /= a.im;
    return *this;
}

double Complex::absolut() {
    return sqrt(pow(this->re, 2) + pow(this->im, 2));
}

Complex Complex::powerup(double level) {
    Complex a = this->GetComplex();
    this->re = (a.absolut() * cos((level * atan(a.im / a.re) * 180 / M_PI) * M_PI / 180));
    this->im = (a.absolut() * sin((level * atan(a.im / a.re) * 180 / M_PI) * M_PI / 180));
    return *this;
}