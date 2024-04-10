#include "Menu.h"

void Menu::themChucNang(string name)
{
	dsChucNang.push_back(name);
}

void Menu::xuatCacChucNang()
{
	cout << "\n===========================MENU==========================";
	for (int i = 0; i < dsChucNang.size(); i++)
	{
		cout << endl << i << ". " << dsChucNang[i] ;
	}
	cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~END~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
}

int Menu::choice()
{
	int ch;
	do {
		xuatCacChucNang();
		cout << "\nNhap lua chon cua ban: "; cin >> ch; cin.ignore();
		if (ch < 0 || ch >= dsChucNang.size())
		{
			cout << "\nLua chon khong hop le. Vui long chon lai !!!";
		}
	} while (ch < 0 || ch >= dsChucNang.size());
	return ch;
}






