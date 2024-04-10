#include "CauhoiTN.h"
#include <fstream>
#include <iostream>
using namespace std;

// Nhap mot cau hoi tu ban phim
void CauhoiTN::nhap()
{
    cout << "Nhap noi dung cau hoi: ";
    getline(cin, noidung);
    cout << "Nhap dap an A: ";
    getline(cin, dapanA);
    cout << "Nhap dap an B: ";
    getline(cin, dapanB);
    cout << "Cau nao dung (A/B)? ";
    getline(cin, caudung);
}

void CauhoiTN::xuat()
{
    cout << noidung << endl;
    cout << "A. " << dapanA << endl;
    cout << "B. " << dapanB << endl;
}

void CauhoiTN::docfile(ifstream& fi)
{
    getline(fi, noidung);
    getline(fi, dapanA);
    getline(fi, dapanB);
    getline(fi, caudung);
}

void CauhoiTN::ghifile(ofstream& fo)
{
    fo << noidung << endl;
    fo << dapanA << endl;
    fo << dapanB << endl;
    fo << caudung << endl;
}

bool CauhoiTN::kiemtra()
{
    string chon;
    xuat();
    cout << "Dap an cua ban (A/B)?";
    getline(cin, chon); // Cho nguoi dung nhap vao dap an A hay B
    if (chon.compare(caudung)==0) // So sanh voi cau dung
        return true;
    else
        return false;
}

bool giongnhau(CauhoiTN ca1, CauhoiTN cau2)
{
    //Kiem tra cac thuoc tinh trong cau hoi
    //Noi dung cau hoi, dap an A, dap an B
    //if (ca1.noidung.compare(cau2.noidung)==0)
        //kiem tra tiep cac dap an co trung kg ...
    return false;
}
