#pragma once
#include<string>
using namespace std;
class CauhoiTN
{
	// Noi dung cau hoi trac nghiem
	string noiDung;
	string cauA;
	string cauB;
	
	// dap an dung A/B
	char dapAn;

public:
	// // Nhap cau hoi
	void Nhap();
	// // doc 1 cau hoi tu file fi
	int DocFile(ifstream& fi);
	//ghi file 
	int GhiFile(ofstream& fo);
	bool kiemTra();
	void Xuat();
};

