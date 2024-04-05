#pragma once
#include <string>

using namespace std;
class CauhoiTN
{
private:
	// Noi dung cau hoi
	string noidung;
	string dapanA;
	string dapanB;
	string caudung;//'A hoac B'
	
public:
	//Nhap noi dung cau hoi tu ban phim
	void nhap();
	// Xuat noi dung cau hoi ra man hinh
	void xuat();
	// Nhap tu file
	void docfile(ifstream& file);
	//Ghi noi dung vao file
	void ghifile(ofstream& file);
	//Kiem tra
	bool kiemtra();
};

