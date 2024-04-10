// Baitap1_QLDTTN_MSSVN.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Dethi.h"
#include "Menu.h"
#include <string>

using namespace std;

int main()
{
    cout << "-------Quan ly de thi trac nghiem---HotenSV---------\n";
    Menu m;
    Dethi de;
    string filename;
    m.themLuachon("Thoat chuong trinh"); //tuong ung voi chon 0
    m.themLuachon("Tao de moi");//1
    m.themLuachon("Nhap mot cau hoi tu ban phim");//2
    m.themLuachon("In de thi");//3
    m.themLuachon("Ghi vao file");//4
    m.themLuachon("Doc danh sach cau hoi tu file");//5
    m.themLuachon("Cho thi");
    while (true)
    {
        switch (m.chon())
        {
        case 0:
            return 0;
            break;
        case 1:
            de.taoDethiMoi();
            break;
        case 2:
            de.themCauhoi();
            break;
        case 3:
            de.inDanhsachCauhoi();
            break;
        case 4:
            cout << "Ghi vao file? ";
            getline(cin, filename);
            de.luuFile(filename);
            break;
        case 5:
            cout << "Doc tu file? ";
            getline(cin, filename);
            de.docFile(filename);
            break;
        default:
            break;
        }
    }
}

