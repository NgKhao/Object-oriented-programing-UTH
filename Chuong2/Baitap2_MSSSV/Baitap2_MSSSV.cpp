// Baitap2_MSSSV.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "CauhoiTN.h"
#include <vector>
#include <fstream>

using namespace std;

int main()
{
    cout << "-----Bai tap 2 ---- MSST-Hoten ------\n";
    
    //Test thu
    CauhoiTN cau1; //Tao thu 1 cau 
    cau1.nhap();
    cau1.xuat();
    if (cau1.kiemtra())
        cout << "Chuc mung ban da tra loi dung!!!";
    else
        cout << "Rat tiec ban da tra loi sai!!!";
    
    //Thu nhap n cau va luu xuong file
    int n = 3;
    vector<CauhoiTN> dsCauhoi;
    
    for (int i = 0; i < n; i++)
    {
        //Can tao 1 doi tuong cau hoi, chen vao danh sach
        CauhoiTN* ptr = new CauhoiTN();
        ptr->nhap();
        dsCauhoi.push_back(*ptr);//chen vao danh sach
    }
    //Ghi danh sach vao file
    ofstream fo("data.TTN");//mo file
    //Dong dau tien la so cau hoi
    fo << n << endl;
    //Cac dong tiep theo se ghi lan luot cac cau hoi vao
    for (int i = 0; i < n; i++)
        dsCauhoi[i].ghifile(fo);
    fo.close();
    

    //Test doc file
    ifstream fi("data.TTN");
    fi >> n;
    string tmp;
    getline(fi, tmp);
    dsCauhoi.clear();
    for (int i = 0; i < n; i++)
    {
        CauhoiTN* ptr = new CauhoiTN();
        ptr->docfile(fi);
        dsCauhoi.push_back(*ptr);
    }
    fi.close();
    //
    for (int i = 0; i < dsCauhoi.size(); i++)
    {
        cout << i + 1 << ".";
        dsCauhoi[i].xuat();
    }

}
