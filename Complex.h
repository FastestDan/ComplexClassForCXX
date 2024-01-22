#ifndef COMPLEX_H
#define COMPLEX_H

#define _USE_MATH_DEFINES
#include <iostream> 
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <conio.h>
using namespace std;

class Complex
{
private:
    double re, im;
public:
    Complex() { re = 0; im = 0; }
    Complex(double r, double i) { re = r; im = i; }
    Complex(const Complex& ob) { re = ob.re; im = ob.im; }; //ââîä
    double GetReal()const;
    double GetImagin()const;
    const Complex& GetComplex()const;
    void SetReal(double = 0);
    void SetImagin(double = 0);
    void SetComplex(double = 0, double = 0);
    Complex& operator = (Complex); //ïğèñâàèâàíèå
    Complex operator + (Complex); // ÎÏÅĞÀÖÈÈ
    Complex operator - (Complex); // ÍÀÄ
    Complex operator * (Complex&); //ÊÎÌÏËÅÊÑÍÛÌÈ
    Complex operator / (Complex&); //×ÈÑËÀÌÈ
    Complex& operator += (Complex); // ÎÍÈ
    Complex& operator -= (Complex); // ÆÅ
    Complex& operator *= (Complex); // Ñ
    Complex& operator /=(Complex); //  "ĞÀÂÍÎ"
    friend std::istream& operator >>(std::istream&, Complex&); //Ââîä
    friend std::ostream& operator << (std::ostream&, const Complex&); //Âûâîä
    bool operator == (Complex& com); //ÎÏÅĞÀÖÈÈ
    bool operator != (Complex& com); //ÑĞÀÂÍÅÍÈß
    bool operator > (Complex& com); // ÄÂÓÕ
    bool operator < (Complex& com); // ÊÎÌÏËÅÊÑÍÛÕ
    double absolut();
    Complex powerup(double);
};
#endif
//COMPLEX_H