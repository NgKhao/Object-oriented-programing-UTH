#include "Fraction.h"
#include <cstdlib>
#include "Fraction.h"

Fraction::Fraction()
{
	numerator = 0;
	denominator = 1;
}

Fraction::Fraction(int num, int den)
{
	numerator = num;
	denominator = den;
}

Fraction::Fraction(int n)
{
	numerator = rand() % n;
	denominator = rand() % n + 1;
}

Fraction Fraction::simplify()
{
	//Rut gon
	int a = numerator, b = denominator;
	while (a != b)
		if (a > b)
			a -= b;
		else
			b -= a;
	numerator /= a;
	denominator /= a;
	return *this;
}

Fraction Fraction::operator+(Fraction f)
{
	int num, den;
	num = this->numerator * f.denominator + this->denominator * f.numerator;
	den = this->denominator * f.denominator;
    //Rut gon
	return Fraction(num, den).simplify();
}

Fraction Fraction::operator-(Fraction f)
{

	return (*this)+Fraction(-f.numerator,f.denominator);
}

Fraction Fraction::operator*(Fraction f)
{
	return Fraction();
}

ostream& operator<<(ostream& os, Fraction f)
{
	os << f.numerator << "/" << f.denominator;
	return os;
}

istream& operator>>(istream& is, Fraction& f)
{
	is >> f.numerator >> f.denominator;
	return is;
}

Fraction Fraction::operator/(Fraction f)
{
	return Fraction();
}

bool Fraction::operator==(Fraction f)
{
	return false;
}

bool Fraction::operator!=(Fraction f)
{
	return false;
}

bool Fraction::operator<=(Fraction f)
{
	return false;
}

bool Fraction::operator>=(Fraction f)
{
	return false;
}
