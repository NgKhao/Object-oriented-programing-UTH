#pragma once
#include<string>
#include<iostream>
#include<fstream>
using namespace std;
class CauhoiTN
{
private:
	string noiDung;
	string cauA;
	string cauB;
	string cauDung;
public:
	void nhap();
	void docfile(ifstream &fileIn);
	void ghifile(ofstream &fileOut);
	bool kiemtra();
	void xuat();
	// Kiểm tra 2 câu hỏi có giống nhau không??
	friend bool giongnhau(CauhoiTN cau1, CauhoiTN cau2);
};

