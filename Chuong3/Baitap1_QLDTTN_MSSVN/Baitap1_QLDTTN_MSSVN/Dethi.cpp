#include "Dethi.h"
#include <iostream>
#include <fstream>

using namespace std;

void Dethi::taoDethiMoi()
{
	dsCauhoi.clear();
	cout << "Da xoa tat ca cac cau hoi!\n";
}

void Dethi::themCauhoi()
{
	//Tao moi doi tuong cau hoi
	CauhoiTN* cauhoi=new CauhoiTN();
	//nhap cau hoi tu ban phim
	cauhoi->nhap();
	//chen doi tuong cau hoi vao danh sach
	dsCauhoi.push_back(*cauhoi);
}

void Dethi::inDanhsachCauhoi()
{
	cout << "\nDe thi hien co " << dsCauhoi.size() << " cau:\n";
	for (int i = 0; i < (int)dsCauhoi.size(); i++)
	{
		cout << "Cau " << i + 1 << ". ";
		dsCauhoi[i].xuat();
	}
}

bool Dethi::luuFile(string filename)
{
	ofstream fo(filename);
	if (!fo.is_open())
		return false;
	fo << dsCauhoi.size() << endl; //DOng dau tien ghi so luong cau hoi
	for (int i = 0; i < (int)dsCauhoi.size(); i++)
		dsCauhoi[i].ghifile(fo);
	fo.close();
	return true;
}

bool Dethi::docFile(string filename)
{
	ifstream fi(filename);
	if (!fi.is_open())
		return false;
	//Doc so luong cau hoi
	int n;
	fi >> n; //doc so luong cau hoi
	string tmp;
	getline(fi, tmp);//bo qua endl
	for (int i = 0; i < n; i++)
	{
		CauhoiTN* cauhoi=new CauhoiTN();
		cauhoi->docfile(fi);
		dsCauhoi.push_back(*cauhoi);
	}
	fi.close();
	return true;
}

int Dethi::choThi()
{
	//SV tu viet
	return 0;
}

int Dethi::xoaCautrungnhau()
{
	//Cho danh sach cac so nguyen
	// 1 2 4 1 2 5 6 6 7
	//==> 1 2 4 5 6 7
	int i = 0;
	int n = dsCauhoi.size();//giu so cau hoi truoc khi xoa
	while (i < dsCauhoi.size() - 1)
	{
		int j = i + 1;//cho j chay sau i
		while (j < dsCauhoi.size())
		{
			if (giongnhau(dsCauhoi[i], dsCauhoi[j]))
				//xoa cau j
				dsCauhoi.erase(dsCauhoi.begin() + j);
			else
				j++;
		}
		i++;
	}
	return n - dsCauhoi.size();//tra ve so cau da xoa
}
//Cach 2
/*
dsMoi = empty
duyet danh sach cu
if pt[i] chua co trng dsMoi then chen vao dsmoi

*/