#include "StudentManagement.h"

void StudentManagement::themSV()
{
	Student* sv = new Student();
	sv->nhap();
	dsSinhVien.push_back(*sv);
}

void StudentManagement::IndsSV()
{
	cout << "\n\nDanh sach co " << dsSinhVien.size() << " sinh vien: ";
	cout << "\n-----------------------------------------------------";
	for (int i = 0; i < dsSinhVien.size(); i++)
	{
		cout << "\nThong tin sinh vien thu " << i + 1 << ":";
		dsSinhVien[i].xuat();
	}
}

bool StudentManagement::docFile(string fileName)
{
	ifstream fileIn(fileName);
	if (!fileIn.is_open()) return false;
	int soLuongSv;
	fileIn >> soLuongSv; 
	fileIn.ignore(); // xoa \n
	for (int i = 0; i < soLuongSv; i++)
	{
		Student* sv = new Student();
		sv->docSV(fileIn);
		dsSinhVien.push_back(*sv);
	}
	fileIn.close();
	return true;
}

bool StudentManagement::ghiFile(string fileName)
{
	ofstream fileOut(fileName);
	if (!fileOut.is_open()) return false;
	fileOut << dsSinhVien.size() << endl;
	for (int i = 0; i < dsSinhVien.size(); i++)
	{
		dsSinhVien[i].ghiSV(fileOut);
	}
	fileOut.close();
	return true;
}

void StudentManagement::IndsSVDuThi()
{
	vector<Student>dsSVDuThi;
	for (int i = 0; i < dsSinhVien.size(); i++)
	{
		if (dsSinhVien[i].diemQT() >= 3)
		{
			dsSVDuThi.push_back(dsSinhVien[i]);
		}
	}
	cout << "\n\nDanh sach co " << dsSVDuThi.size() << " sinh vien du dieu kien du thi: ";
	cout << "\n-----------------------------------------------------";
	for (int i = 0; i < dsSVDuThi.size(); i++)
	{
		cout << "\nThong tin sinh vien thu " << i + 1 << ":";
		dsSVDuThi[i].xuat();
	}
}

void StudentManagement::IndsSVNguyen()
{
	vector<Student>dsSVNguyen;
	for (int i = 0; i < dsSinhVien.size(); i++)
	{
		if (dsSinhVien[i].checkHoNguyen())
		{
			dsSVNguyen.push_back(dsSinhVien[i]);
		}
	}
	cout << "\n\nDanh sach co " << dsSVNguyen.size() << " sinh vien ho \"Nguyen\": ";
	cout << "\n-----------------------------------------------------";
	for (int i = 0; i < dsSVNguyen.size(); i++)
	{
		cout << "\nThong tin sinh vien thu " << i + 1 << ":";
		dsSVNguyen[i].xuat();
	}
}

void StudentManagement::IndsSVTheoTen(string name)
{
	vector<Student>dsSVTheoTen;
	for (int i = 0; i < dsSinhVien.size(); i++)
	{
		if (checkTen(dsSinhVien[i], name))
		{
			dsSVTheoTen.push_back(dsSinhVien[i]);
		}
	}
	cout << "\n\nDanh sach co " << dsSVTheoTen.size() << " sinh vien co ten giong sinh vien " << name << " :";
	cout << "\n-----------------------------------------------------";
	for (int i = 0; i < dsSVTheoTen.size(); i++)
	{
		cout << "\nThong tin sinh vien thu " << i + 1 << ":";
		dsSVTheoTen[i].xuat();
	}
}





