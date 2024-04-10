#include "CauhoiTN.h"

void CauhoiTN::nhap()
{
	cout << "Nhap noi dung cua cau hoi: "; getline(cin, noiDung);
	cout << "Nhap dap an A: "; getline(cin, cauA);
	cout << "Nhap dap an B: "; getline(cin, cauB);
	cout << "Cau nao dung (A/B)? : "; getline(cin, cauDung);
}

void CauhoiTN::docfile(ifstream &fileIn)
{
	getline(fileIn, noiDung);
	getline(fileIn, cauA);
	getline(fileIn, cauB);
	getline(fileIn, cauDung);
}

void CauhoiTN::ghifile(ofstream& fileOut)
{
	fileOut << noiDung << endl;
	fileOut << cauA << endl;
	fileOut << cauB << endl;
	fileOut << cauDung << endl;

}

bool CauhoiTN::kiemtra()
{
	xuat();
	string cauTraLoi;
	cout << "Nhap cau tra loi cua ban (A/B) : "; cin >> cauTraLoi;
	if (cauDung.compare(cauTraLoi) == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void CauhoiTN::xuat()
{
	cout << noiDung << endl;
	cout << "A. " << cauA << endl;
	cout << "B. " << cauB << endl;
}

bool giongnhau(CauhoiTN cau1, CauhoiTN cau2)
{
	return (cau1.noiDung.compare(cau2.noiDung) == 0 && cau1.cauA.compare(cau2.cauA) == 0 && cau1.cauB.compare(cau2.cauB) == 0);
}

