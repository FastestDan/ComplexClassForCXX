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
    Complex(const Complex& ob) { re = ob.re; im = ob.im; }; //����
    double GetReal()const;
    double GetImagin()const;
    const Complex& GetComplex()const;
    void SetReal(double = 0);
    void SetImagin(double = 0);
    void SetComplex(double = 0, double = 0);
    Complex& operator = (Complex); //������������
    Complex operator + (Complex); // ��������
    Complex operator - (Complex); // ���
    Complex operator * (Complex&); //������������
    Complex operator / (Complex&); //�������
    Complex& operator += (Complex); // ���
    Complex& operator -= (Complex); // ��
    Complex& operator *= (Complex); // �
    Complex& operator /=(Complex); //  "�����"
    friend std::istream& operator >>(std::istream&, Complex&); //����
    friend std::ostream& operator << (std::ostream&, const Complex&); //�����
    bool operator == (Complex& com); //��������
    bool operator != (Complex& com); //���������
    bool operator > (Complex& com); // ����
    bool operator < (Complex& com); // �����������
    double absolut();
    Complex powerup(double);
};
#endif
//COMPLEX_H