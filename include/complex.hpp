

#ifndef LAB_6_COMPLEX_H
#define LAB_6_COMPLEX_H


#include <iostream>

using namespace std;
class Complex
{
private:
    double Re, Im;
public:
    Complex();
    Complex(double, double);
    void print(ostream&);
    Complex add(const Complex&);
    Complex sub(const Complex&);
    Complex mul(int a);
    Complex div(int a);
    double real();
    double imaginary();
    Complex(const Complex&);
    Complex operator*(const Complex&);
    Complex operator/(const Complex&);
    Complex operator+=(const Complex&);
    Complex operator-=(const Complex&);
    Complex operator*=(const Complex&);
    Complex operator/=(const Complex&);
    Complex operator=(const Complex&);
    bool operator==(const Complex&);
//     template <class CharT, class Traits>
//     friend basic_ostream<CharT, Traits>& operator <<(basic_ostream<CharT, Traits>&, const Complex&);
//     template <class CharT, class Traits>
//     friend basic_istream<CharT, Traits>& operator >> (basic_istream<CharT, Traits>&, Complex&);
};

#endif //LAB_6_COMPLEX_H
