#pragma once
#include"CauhoiTN.h"
#include<vector>
class DeThi
{
private:
	vector<CauhoiTN> dsCauHoi;
public:
	void taoDeThi();
	void themCauHoiMoi();
	void inDanhSachCauHoi();
	bool luuFile(string fileName);
	bool docFile(string fileName);
	int choThi();
	int xoaCauTrungNhau();
};

