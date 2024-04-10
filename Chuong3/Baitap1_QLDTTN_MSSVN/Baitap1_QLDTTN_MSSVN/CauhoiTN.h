#pragma once
#include <string>
#include <fstream>
using namespace std;

class CauhoiTN
{
	// Noi dung cau hoi trac nghiem
	string noidung;
	// Dap an A
	string dapanA;
	// Dap an B
	string dapanB;
	// Cau dung (A/B)
	string caudung;

public:
	// Nhap mot cau hoi tu ban phim
	void nhap();
	// Xuat mot cau hoi ra man hinh
	void xuat();
	// Nhap mot cau hoi tu file
	void docfile(ifstream& fi);
	// Xuat file
	void ghifile(ofstream& fo);
	// Kiem tra
	bool kiemtra();
	// So sanh trung cau hoi
	friend bool giongnhau(CauhoiTN ca1, CauhoiTN cau2); //Chua cai dat
};

