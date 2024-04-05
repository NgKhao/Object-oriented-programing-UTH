#include "CauhoiTN.h"
#include<iostream>
#include<string>
using namespace std;

// // Nhap cau hoi
void CauhoiTN::Nhap()
{
    cout << "Nhap noi dung cau hoi: ";
    getline(cin, noiDung);
    cout << "Nhap dap an A: ";
    getline(cin, cauA);
    cout << "Nhap dap an B: ";
    getline(cin, cauB);
    cout << "Cau nao dung (A/B)? ";
    cin >> dapAn;
}


// // doc 1 cau hoi tu file fi
int CauhoiTN::DocFile(ifstream& fi)
{
    // TODO: Add your implementation code here.
    return 0;
}
// ghi mot cau hoi vao file
int CauhoiTN::GhiFile(ofstream& fo)
{
    return 0;
}

bool CauhoiTN::kiemTra()
{
    return false;
}

void CauhoiTN::Xuat()
{
    cout << noiDung << endl;
    cout << "A. " << cauA << endl;
    cout << "B. " << cauB << endl;
    cout << "[Dap an la: " << dapAn << "]" << endl;
}
