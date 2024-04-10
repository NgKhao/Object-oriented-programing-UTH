#pragma once
#include <iostream>
#include <string>
#include<fstream>
#include<vector>
#include<sstream>
using namespace std;
class Student
{
private:
	string studentID;
	string fullName;
	int buoiVang;
	float diemTH;
	float diemGK;
public:
	void nhap();
	void xuat();
	void docSV(ifstream&);
	void ghiSV(ofstream&);
	float diemQT();
	bool checkHoNguyen();
	friend bool checkTen(Student s, string name);

};

