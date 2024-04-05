#include "CauhoiTN.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//Nhap du lieu tu ban phim
void CauhoiTN::nhap() // Nhap cho 1 cau hoi TN
{
   //Doc noi dung cau hoi, dap an A, dap an B, cau dung
	cout << "Nhap noi dung cau hoi: ";
	cin.ignore();
	getline(cin, noidung);// Doc mot chuoi vao bien noi dung
	cout << "Nhap dap an A: ";
	getline(cin, dapanA);
	cout << "Nhap dap an B: ";
	getline(cin, dapanB);
	cout << "Cau nao dung (A/B)? ";
	getline(cin, caudung);
}


// Xuat noi dung cau hoi ra man hinh
void CauhoiTN::xuat()
{
	cout << noidung << endl;
	cout << "A. " << dapanA << endl;
	cout << "B. " << dapanB << endl;
}

void CauhoiTN::docfile(ifstream& file)
{
	getline(file, noidung); // doc 1 dong tu file f va gan vao noidung
	getline(file, dapanA);
	getline(file, dapanB);
	getline(file, caudung);
}

void CauhoiTN::ghifile(ofstream& file)
{
	file << noidung << endl;
	file << dapanA << endl;
	file << dapanB << endl;
	file << caudung << endl;
}

bool CauhoiTN::kiemtra()
{
	xuat();
	cout << "Moi ban chon (A/B)?";
	string chon;
	getline(cin, chon);
	if (chon.compare(caudung)==0)
		return true;
	else
		return false;
}
