#include "ModeFrac.h"

void ModeFrac::printNotOverN(int n)
{
	for (int i = 0; i < 100; i++)
	{
		Fraction *fra = new Fraction(n);
		fra->simplify();
		dsFra.push_back(*fra);
	}
	for (int i = 0; i < 100; i++)
	{
		cout << dsFra[i] << " ";
	}
}

void ModeFrac::printNotOverOneHalf()
{
	vector<Fraction> ds;
	for (int i = 0; i < dsFra.size(); i++)
	{
		if (dsFra[i].getValue() <= 0.5)
		{
			ds.push_back(dsFra[i]);
		}
	}
	cout << "\nCac phan so khong vuot qua 1/2: \n";
	for (int i = 0; i < ds.size(); i++)
	{
		cout << ds[i] << " ";
	}
}

void ModeFrac::printNotSame()
{
	vector<Fraction> ds;
	int i = 0;
	while (i < dsFra.size())
	{
		int j = 0;
		bool flag = false;
		while (j < i)
		{
			if (giongNhau(dsFra[i], dsFra[j]))
			{
				flag = true;
				break;
			}
			j++;
		}
		if (!flag)
		{
			ds.push_back(dsFra[i]);
		}
		i++;
	}
	cout << "\nCac phan so khong trung nhau: \n";
	for (int i = 0; i < ds.size(); i++)
	{
		cout << ds[i] << " ";
	}
}




		