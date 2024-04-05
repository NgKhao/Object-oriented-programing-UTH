// Baitap2_MSSSV.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "CauhoiTN.h"
#include <vector>
#include <fstream>

using namespace std;

bool giongnhau(CauhoiTN cau1, CauhoiTN cau2)
{
    return cau1.noidung == cau2.noidung;
}

int main()
{
    cout << "-----Bai tap 2 ---- 2251120165 - Nguyen Khao  ------\n";
    vector<CauhoiTN> dsCauHoi;
    int soLuongCauHoi = 0;
    while (1)
    {
        cout << "\n============= MENU =============";
        cout << "\n\t1. Them cau hoi";
        cout << "\n\t2. Doc cau hoi tu file";
        cout << "\n\t3. Luu cau hoi vao file";
        cout << "\n============= END  =============";

        cout << "\nNhap lua chon cua ban: ";
        int choice; cin >> choice;

        switch (choice)
        {
        case 1:
            dsCauHoi[soLuongCauHoi].nhap();
            soLuongCauHoi++;
            break;
        //case 2:
        //    ifstream fi("data.TTN");
        //    if (!fi.is_open()) {
        //        cout << "Khong the mo tep tin data.TTN\n";

        //    }
        //    else
        //    {
        //        int soLuongCauHoi = 0;
        //        dsCauHoi.clear();
        //        while (!fi.eof())
        //        {
        //            dsCauHoi[soLuongCauHoi].docfile(fi);
        //            soLuongCauHoi++;
        //        }
        //        soLuongCauHoi--;
        //        fi.close();
        //    }

        //    //
        //    for (int i = 0; i < dsCauHoi.size(); i++)
        //    {
        //        //cout << i + 1 << ".";
        //        dsCauHoi[i].xuat();
        //    }
        //    break;
        //case 3:
        //    ofstream fo("data.TTN");//mo file
        //    //Cac dong tiep theo se ghi lan luot cac cau hoi vao
        //    for (int i = 0; i < dsCauHoi.size(); i++)
        //        dsCauHoi[i].ghifile(fo);
        //    fo.close();

        //default:
        //    break;
        }
    }



    ////Test thu
    //CauhoiTN cau1; //Tao thu 1 cau 
    //cau1.nhap();
    //cau1.xuat();
    //if (cau1.kiemtra())
    //    cout << "Chuc mung ban da tra loi dung!!!";
    //else
    //    cout << "Rat tiec ban da tra loi sai!!!";
    //
    ////Thu nhap n cau va luu xuong file
    //int n = 3;
    //vector<CauhoiTN> dsCauhoi;
    ///*
    //for (int i = 0; i < n; i++)
    //{
    //    //Can tao 1 doi tuong cau hoi, chen vao danh sach
    //    CauhoiTN* ptr = new CauhoiTN();
    //    ptr->nhap();
    //    dsCauhoi.push_back(*ptr);//chen vao danh sach
    //}
    ////Ghi danh sach vao file
    //ofstream fo("data.TTN");//mo file
    ////Dong dau tien la so cau hoi
    //fo << n << endl;
    ////Cac dong tiep theo se ghi lan luot cac cau hoi vao
    //for (int i = 0; i < n; i++)
    //    dsCauhoi[i].ghifile(fo);
    //fo.close();
    ////*/

    ////Test doc file
    //ifstream fi("data.TTN");
    //fi >> n;
    //string tmp;
    //getline(fi, tmp);
    //dsCauhoi.clear();
    //for (int i = 0; i < n; i++)
    //{
    //    CauhoiTN* ptr = new CauhoiTN();
    //    ptr->docfile(fi);
    //    dsCauhoi.push_back(*ptr);
    //}
    //fi.close();
    ////
    //for (int i = 0; i < dsCauhoi.size(); i++)
    //{
    //    cout << i + 1 << ".";
    //    dsCauhoi[i].xuat();
    //}

}
