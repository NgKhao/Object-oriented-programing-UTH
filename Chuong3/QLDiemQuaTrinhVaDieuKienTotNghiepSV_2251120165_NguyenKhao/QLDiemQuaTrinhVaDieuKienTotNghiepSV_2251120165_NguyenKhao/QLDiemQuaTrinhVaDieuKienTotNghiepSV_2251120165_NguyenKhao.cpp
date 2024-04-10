// QLDiemQuaTrinhVaDieuKienTotNghiepSV_2251120165_NguyenKhao.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "StudentManagement.h"
#include "Menu.h"
using namespace std;

int main()
{
    cout << "-------Quan ly sinh vien---Nguyen Khao---------\n";
    StudentManagement sm;
    Menu m;
    string fileName;
    string name;
    m.themChucNang("Thoat");
    m.themChucNang("Them thong tin 1 sinh vien");
    m.themChucNang("In danh sach sinh vien");
    m.themChucNang("Doc danh sach sinh vien tu file");
    m.themChucNang("Ghi danh sach sinh vien vao file");
    m.themChucNang("In danh sach sinh vien du dieu kien du thi");
    m.themChucNang("In danh sach sinh vien co ho \"Nguyen\"");
    m.themChucNang("In danh sach sinh vien co ten trung voi ten sinh vien khac");
    while (1)
    {
        switch (m.choice())
        {
        case 0:
            cout << "ban da thoat chuong trinh......";
            return 0;
            break;
        case 1:
            sm.themSV();
            break;
        case 2:
            sm.IndsSV();
            break;
        case 3:
            cout << "\nDoc tu file: "; getline(cin, fileName);
            cout << (sm.docFile(fileName) ? "Da doc thanh cong !!!" : "Mo file that bai !!!");
            break;
        case 4:
            cout << "\nGhi ra file: "; getline(cin, fileName);
            cout << (sm.ghiFile(fileName) ? "Da doc thanh cong !!!" : "Mo file that bai !!!");
            break;
        case 5:
            sm.IndsSVDuThi();
            break;
        case 6:
            sm.IndsSVNguyen();
            break;
        case 7:
            cout << "\nNhap ten cua sinh vien khac: "; cin >> name;
            sm.IndsSVTheoTen(name);
            break;
        default:
            break;
        }
    }
    return 0;
}
