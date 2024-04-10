#pragma once
#include<cstdlib>
#include<iostream>
using namespace std;

class Fraction
{
private:
	int numberator;
	int denominator;
public:
	Fraction();
	Fraction(int tu, int mau);
	Fraction(int n);
	Fraction simplify();
	float getValue();
	friend istream& operator>>(istream& in, Fraction& fra);
	friend ostream& operator<<(ostream& os, Fraction& fra);
	Fraction operator+(Fraction fra);
	Fraction operator-(Fraction fra);
	Fraction operator*(Fraction fra);
	Fraction operator/(Fraction fra);
	friend bool giongNhau(Fraction f1, Fraction f2);
};

