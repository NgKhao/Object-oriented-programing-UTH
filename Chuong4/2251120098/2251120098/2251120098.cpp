// Demo_Menu.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Menu.h"

using namespace std;

int main()
{
    cout << "::::::::::::::Demo Menu Class::::::::::::\n";
    Menu m1("MENU CHINH");
    //

    m1.themLuachon("Thoat chuong trinh");
    m1.themLuachon("Chuc nang 1");
    m1.themLuachon("Chuc nang 2");

    //Cai dat toan tu chen (<<) o Class Menu de co the dung cac lenh sau de them chuc nang
    //


    m1 << "Chuc nang 3";
    m1 << "Chuc nang 4" << "Chuc nang 5" << "Chuc nang 6";

    //
    Menu m2("Xac nhan");
    /*
    m2.themLuachon("Dong y thuc hien");
    m2.themLuachon("Huy thao tac");
    */
    //

    m2 << "Dong y thuc hien";
    m2 << "Huy thao tac";




    while (true) {
        switch (m1.chon())
        {
        case 0:
            if (m2.chon() == 0)
                return 0; //Thoat chuong trinh
            break;
        case 1:
            if (m2.chon() == 0)
                cout << "Da thuc hien chuc nang 1";
            break;
        case 2:
            if (m2.chon() == 0)
                cout << "Da thuc hien chuc nang 2";
            break;
        case 3:
            if (m2.chon() == 0)
                cout << "Da thuc hien chuc nang 3";
            break;
        case 4:
            if (m2.chon() == 0)
                cout << "Da thuc hien chuc nang 4";
            break;
        case 5:
            if (m2.chon() == 0)
                cout << "Da thuc hien chuc nang 5";
            break;
        case 6:
            if (m2.chon() == 0)
                cout << "Da thuc hien chuc nang 6";
            break;
        default:
            cout << "Xin loi chuc nang dang phat trien";
            break;
        }
    }
}