#include "Menu.h"
#include <iostream>
using namespace std;
void Menu::themLuachon(string mota)
{
	dsLuachon.push_back(mota);
}

void Menu::xuat()
{
	cout << "\n====Thuc don=====\n";
	for (int i = 0; i < dsLuachon.size(); i++)
		cout << i << ". " << dsLuachon[i] << endl;
}

int Menu::chon()
{
	int ch;
	do {
		//In menu
		xuat();
		//Cho nguoi dung nhap lua chon qua chi so
		cout << "Moi chon?";
		cin >> ch;
		string tmp;
		getline(cin, tmp);//bo qua ky tu xuong dong
		if (ch < 0 || ch >= dsLuachon.size())
			cout << "Chon sai! Moi chon lai!!!\n";
	} while (ch < 0 || ch >= dsLuachon.size());
	//Lap lai cho den khi chon dung
	return ch;
}
