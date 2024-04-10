// QuanLyDeThiTracNghiem_2251120165_NguyenKhao.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "DeThi.h"
#include "Menu.h"
#include <iostream>
using namespace std;
int main()
{
    cout << "-------Quan ly de thi trac nghiem---Nguyen Khao---------\n";
    Menu m;
    DeThi dt;
    string nameFile;
    m.themChucNang("Thoat");
    m.themChucNang("Tao mot de thi moi");
    m.themChucNang("Them mot cau hoi moi");
    m.themChucNang("In danh sach cau hoi");
    m.themChucNang("Luu danh sach cau hoi vao file");
    m.themChucNang("Doc danh sach cau hoi tu file vao bo nho");
    m.themChucNang("Cho thi, ra ve so cau dung");
    m.themChucNang("Xoa cac nhung cau bi trung nhau");
    while (1)
    {
        switch (m.choice())
        {
        case 0:
            cout << "ban da thoat chuong trinh......";
            return 0;
            break;
        case 1:
            dt.taoDeThi();
            break;
        case 2:
            dt.themCauHoiMoi();
            break;
        case 3:
            dt.inDanhSachCauHoi();
            break;
        case 4:
            cout << "\nNhap ten File can luu: ";
            getline(cin, nameFile);
            cout << (dt.luuFile(nameFile) ? "Da luu thanh cong !!!" : "Mo file that bai !!!");
            break;
        case 5:
            cout << "\nNhap ten File can doc: ";
            getline(cin, nameFile);
            cout << (dt.docFile(nameFile) ? "Da doc thanh cong !!!" : "Mo file that bai !!!");
            break;
        case 6:
            cout << "\nBat dau thi .....................";
            cout << "\nSo cau tra loi dung: " << dt.choThi();
            break;
        case 7:
            cout << "\nSo cau bi xoa do trung nhau: " << dt.xoaCauTrungNhau();
            break;
        default:
            break;
        }
    }
    return 0;
}


