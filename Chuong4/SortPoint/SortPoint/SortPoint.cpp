// SortPoint.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Point.h"
#include <vector>
#include <fstream>
#include <algorithm>
using namespace std;

int main()
{
    cout << "Sort a List of Points!\n";
    vector<Point> list;
    //Doc file vao list
    int n;
    ifstream fin("Points.txt");
    //Doc so luong diem
    fin >> n;
    //Duyet danh sach diem
    for (int i = 0; i < n; i++)
    {
        Point* p_new = new Point();
        fin >> *p_new;
        list.push_back(*p_new);
    }
    fin.close();
    //In thu noi dung file
    cout << "Danh sach diem da doc:\n";
    for (int i = 0; i < list.size(); i++)
        cout << list[i] << " ";
    cout << endl;
    // Sap xep danh sach diem theo khoang cach
    sort(list.begin(), list.end());
    cout << "Danh sach diem da sap xep:\n";
    for (int i = 0; i < list.size(); i++)
        cout << list[i] << " ";
    cout << endl;
}
