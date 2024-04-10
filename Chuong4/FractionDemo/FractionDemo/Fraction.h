#pragma once
#include <iostream>
using namespace std;

class Fraction
{
private:
	int numerator, denominator;
public:
	Fraction();
	Fraction(int num, int den);
	Fraction(int n);
	Fraction simplify();
	friend ostream& operator<< (ostream& os, Fraction f);
	friend istream& operator>>(istream& is, Fraction& f);
	Fraction operator+(Fraction f);
	Fraction operator-(Fraction f);
	Fraction operator*(Fraction f);
	Fraction operator/(Fraction f);
	bool operator==(Fraction f);
	bool operator!=(Fraction f);
	bool operator<=(Fraction f);
	bool operator>=(Fraction f);
};

