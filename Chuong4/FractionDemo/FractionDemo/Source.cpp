#include <iostream>
#include "Fraction.h"

using namespace std;

int main()
{
	cout << "Demo Fraction\n";
	Fraction f1(1, 2), f2(1, 2);
	cout << f1 << " + " << f2 << " = ";
	Fraction f3 = f1 + f2;
	Fraction f4 = f3 - f1;
	cout << f3;
	cout << endl << f3 << " - " << f1 << " = " << f4;

	Fraction f(8, 4);
	cout << f.simplify();

	return 0;
}