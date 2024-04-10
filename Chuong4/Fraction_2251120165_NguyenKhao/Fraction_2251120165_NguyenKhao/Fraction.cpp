#include "Fraction.h"

int UCC(int a, int b)
{
	if (b == 0)  return a;
	return UCC(b, a % b);
}

Fraction::Fraction()
{
	numberator = 0;
	denominator = 1;
}

Fraction::Fraction(int tu, int mau)
{
	numberator = tu;
	denominator = mau;
}
Fraction::Fraction(int n)
{
	numberator = rand() % n ;
	denominator = rand() % n + 1;
}

Fraction Fraction::simplify()
{
	int UC = UCC(numberator, denominator);
	numberator /= UC;
	denominator /= UC;
	return *this; 
}
float Fraction::getValue()
{
	return 1.0 * numberator / denominator;
}

istream& operator>>(istream& in, Fraction& fra)
{
	in >> fra.numberator >> fra.denominator;
	return in;
}

ostream& operator<<(ostream& os, Fraction& fra)
{
	os << fra.numberator << "/" << fra.denominator;
	return os;
	// TODO: insert return statement here
}

Fraction Fraction::operator+(Fraction fra)
{
	Fraction curr;
	curr.numberator = this->numberator * fra.denominator + this->denominator * fra.numberator;
	curr.denominator = this->denominator * fra.denominator;
	return curr.simplify();
}

Fraction Fraction::operator-(Fraction fra)
{
	Fraction curr;
	curr.numberator = this->numberator * fra.denominator - this->denominator * fra.numberator;
	curr.denominator = this->denominator * fra.denominator;
	return curr.simplify();
}

Fraction Fraction::operator*(Fraction fra)
{
	Fraction curr;
	curr.numberator = this->numberator * fra.numberator;
	curr.denominator = this->denominator * fra.denominator;
	return curr.simplify();
}

Fraction Fraction::operator/(Fraction fra)
{
	Fraction curr;
	curr.numberator = this->numberator * fra.denominator;
	curr.denominator = this->denominator * fra.numberator;
	return curr.simplify();
}


bool giongNhau(Fraction f1, Fraction f2)
{
	if (f1.numberator == f2.numberator && f1.denominator == f2.denominator) return 1;
	return 0;
}