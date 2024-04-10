#include "Student.h"

void Student::nhap()
{
	cout << "\nNhap ma so sinh vien: "; getline(cin, studentID);
	cout << "\nNhap ho ten sinh vien: "; getline(cin, fullName);
	cout << "\nNhap so buoi vang: ";  cin >> buoiVang;
	cout << "\nNhap diem thuc hanh: "; cin >> diemTH;
	cout << "\nNhap diem giua ky: "; cin >> diemGK;
	//cin.ignore();
}

void Student::xuat()
{
	cout << "\nMa so sinh vien: " << studentID;
	cout << "\nHo ten sinh vien: " << fullName;
	cout << "\nSo buoi vang: " << buoiVang;
	cout << "\nDiem thuc hanh: " << diemTH;
	cout << "\nDiem giua ki: " << diemGK;
}

void Student::docSV(ifstream& fileIn)
{
	getline(fileIn, studentID);
	getline(fileIn, fullName);
	fileIn >> buoiVang;
	fileIn >> diemTH;
	fileIn >> diemGK;  fileIn.ignore();
}

void Student::ghiSV(ofstream& fileOut)
{
	fileOut << studentID << endl;
	fileOut << fullName << endl;
	fileOut << buoiVang << endl;
	fileOut << diemTH << endl;
	fileOut << diemGK << endl;
}

float Student::diemQT()
{
	if (buoiVang <= 5)
	{
		return (10 - buoiVang * 2) * 0.2 + diemTH * 0.3 + diemGK * 0.5;
	}
	else {
		return 0;
	}

}

bool Student::checkHoNguyen()
{
	if (fullName.find("Nguyen") == 0) return true;
	return false;
}

bool checkTen(Student s, string name)
{
	vector<string> tachTu;
	stringstream ss(s.fullName);
	string tmp;
	while (ss >> tmp)
	{
		tachTu.push_back(tmp);
	}
	if (tachTu.back() == name) return true;
	return false;
}
