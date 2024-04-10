#pragma once
#include <vector>
#include "CauhoiTN.h"
#include <string>

class Dethi
{
private:
	vector<CauhoiTN> dsCauhoi;
public:
	void taoDethiMoi();
	void themCauhoi();
	void inDanhsachCauhoi();
	bool luuFile(string filename); //tra ve true neu ghi thanh cong
	bool docFile(string filename);
	int choThi(); //tra ve so luong cau dung
	//Them chuc nang loc cac cau trung
	int xoaCautrungnhau();//tra ve so cau bi xoa
};

