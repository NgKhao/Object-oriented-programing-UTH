#include "DeThi.h"


void DeThi::taoDeThi()
{
	dsCauHoi.clear();
	cout << "\nDa xoa tat ca cau hoi. San sang tao cau hoi moi !!!";
}

void DeThi::themCauHoiMoi()
{
	CauhoiTN* cauHoi = new CauhoiTN();
	cauHoi->nhap();
	dsCauHoi.push_back(*cauHoi);
}

void DeThi::inDanhSachCauHoi()
{
	cout << "\nDe thi hien co " << dsCauHoi.size() << " cau: \n";
	for (int i = 0; i < dsCauHoi.size(); i++)
	{
		cout << "Cau hoi " << i + 1;
		dsCauHoi[i].xuat();
	}
}

bool DeThi::docFile(string fileName)
{
	ifstream fileIn(fileName);
	if (!fileIn.is_open()) return false;
	int n; fileIn >> n;
	//string tmp; getline(fileIn, tmp);
	fileIn.ignore();
	for (int i = 0; i < n; i++)
	{
		CauhoiTN* cauHoi = new CauhoiTN();
		cauHoi->docfile(fileIn);
		dsCauHoi.push_back(*cauHoi);
	}
	fileIn.close();
	return true;
}

int DeThi::choThi()
{
	int sumCauDung = 0;
	cout << "\nDe thi hien co " << dsCauHoi.size() << " cau: \n";
	for (int i = 0; i < dsCauHoi.size(); i++)
	{
		cout << "\nCau hoi " << i + 1 << endl;
		if (dsCauHoi[i].kiemtra())
		{
			sumCauDung += 1;
		}
	}
	return sumCauDung;
}

bool DeThi::luuFile(string fileName)
{
	ofstream fileOut(fileName);
	if (!fileOut.is_open()) return false;
	fileOut << dsCauHoi.size() << endl;
	for (int i = 0; i < dsCauHoi.size(); i++)
	{
		dsCauHoi[i].ghifile(fileOut);
	}
	return true;
}

int  DeThi::xoaCauTrungNhau()
{
	//không được dùng for() vì for tu dong tang j
	// sau khi xóa ko dc tăng j vi j la chi so cua ptu sau 
	int i = 0;
	int n = dsCauHoi.size();
	while (i < dsCauHoi.size() - 1)
	{
		int j = i + 1;
		while (j < dsCauHoi.size())
		{
			if (giongnhau(dsCauHoi[i], dsCauHoi[j]))
			{
				dsCauHoi.erase(dsCauHoi.begin() + j);
			}
			else
			{
				j++;
			}
		}
		i++;
	}
	return n - dsCauHoi.size(); 
}




