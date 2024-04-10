#pragma once
#include"Fraction.h"
#include<vector>
class ModeFrac
{
private:
	vector<Fraction> dsFra;
public:
	// pso khong vuot qua n
	void printNotOverN(int n);
	void printNotOverOneHalf();
	void printNotSame();
};

