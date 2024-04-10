#pragma once
#include "Student.h"
#include <vector>

class StudentManagement
{
private:
	vector<Student> dsSinhVien;
public:
	void themSV();
	void IndsSV();
	bool docFile(string fileName);
	bool ghiFile(string fileName);
	void IndsSVDuThi();
	void IndsSVNguyen();
	void IndsSVTheoTen(string name);
};

